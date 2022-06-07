//
//  ArrayQueue.cpp
//  2
//
//  Created by Anita Stashevskaya on 30.05.2022.
//

#include "ArrayQueue.hpp"
#include <exception>
#include <iostream>
/*Реализовать кольцевойбуфер(очередь на базе массива) в виде класса.
 Размер буфера задаётся в конструкторе. Методы:
 - добавить эл-т в конец очереди (при неисполнении - исключение)
 - взять элемент в конце очереди (нет - исключение)
 - получить элемент в конце очереди(без изъятия)
 - размер очереди
 - сделать очередь пустой
 - проверка очереди на пустоту
 */
using namespace std;

ArrayQueue::ArrayQueue() {
    array = nullptr;
    size = 0;
    firstElem = 0;
    lastElem = 0;
}

ArrayQueue::ArrayQueue(int size) {
    this -> size = size;
    array = new int[size];
    firstElem = 0;
    lastElem = 0;
}

ArrayQueue::ArrayQueue(const ArrayQueue& copy) {
    this->size = copy.size;
    firstElem = copy.firstElem;
    lastElem = copy.lastElem;
    array = new int[copy.size];
    for (int i = 0; i < size; i++) {
        array[i] = copy.array[i];
    }
}

//ArrayQueue::~ArrayQueue() {
//    delete [] array;
//}

//добавить эл-т в конец очереди (при неисполнении - исключение)
void ArrayQueue::addElem(int elem) {
    try {
        array[lastElem] = elem;
        lastElem = (lastElem + 1) % size;
    } catch (const std::exception& err) {
        std::cout << "isFull\n";
    }
}

//взять элемент в конце очереди (нет - исключение)
int ArrayQueue::takeElem() {
    try {
        int e = array[firstElem];
        firstElem = (firstElem + 1) % size;
        return e;
    } catch (const std::exception& err) {
        cout<<"Empty\n";
        return -1;
    }
}
//получить элемент в конце очереди(без изъятия)
int ArrayQueue::getElem() {
    try {
        return array[firstElem];
    } catch (const std::exception& err) {
        return -1;
    }
}

//размер очереди
int ArrayQueue::getSize() {
    return size;
}

//сделать очередь пустой
void ArrayQueue::makeEmpty() {
    firstElem = 0;
    lastElem = 0;
}

//проверка очереди на пустоту
bool ArrayQueue::isEmpty() {
    //array = nullptr;
    size = 0;
    return firstElem == lastElem;
}

