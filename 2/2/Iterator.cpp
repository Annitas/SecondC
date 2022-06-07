//
//  Iterator.cpp
//  2
//
//  Created by Anita Stashevskaya on 30.05.2022.
//
//#include "ArrayQueue.hpp"
#include "Iterator.hpp"

//конструктор привязки к очереди
Iterator::Iterator(ArrayQueue &que) {
    this->index = que.firstElem;
    this->queue = que;
}

//начать перебор элементов
void Iterator::start() {
    index = queue.firstElem;
}
//перейти к следующему элементу
void Iterator::next() {
    index = (index + 1) % queue.size;
}
//проверка, всё ли проитерированно
bool Iterator::finish() {
   // if (queue.isEmpty()) {
     //       return true;
       // }
    return index == queue.size-1;
}
//получить очередной элемент очереди
int Iterator::getValue() {//tut
    return queue.array[index];
}

//Iterator
void Iterator::printValue(Iterator iterator) {
    iterator.start();
    while (!iterator.finish()) {
        cout << iterator.getValue() << " ";
        iterator.next();
    }
    cout<<iterator.getValue();
}
