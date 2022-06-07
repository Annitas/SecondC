//
//  ArrayQueue.hpp
//  2
//
//  Created by Anita Stashevskaya on 30.05.2022.
//

#ifndef ArrayQueue_hpp
#define ArrayQueue_hpp

#include <stdio.h>

#endif /* ArrayQueue_hpp */
#include <iostream>
#pragma once
using namespace std;
/*Реализовать кольцевойбуфер(очередь на базе массива) в виде класса.
 Размер буфера задаётся в конструкторе. Методы:
 - добавить эл-т в конец очереди (при неисполнении - исключение)
 - взять элемент в конце очереди (нет - исключение)
 - получить элемент в конце очереди(без изъятия)
 - размер очереди
 - сделать очередь пустой
 - проверка очереди на пустоту
 */
class ArrayQueue {
public:
    int size;
    int* array;
    int firstElem;
    int lastElem;
    
    friend class Iterator;
    ArrayQueue();
    ArrayQueue(int size);
    ArrayQueue(const ArrayQueue& copy);
   // ~ArrayQueue();
    void addElem(int elem);
    int takeElem();
    int getElem();
    int getSize();
    void makeEmpty();
    bool isEmpty();
};
