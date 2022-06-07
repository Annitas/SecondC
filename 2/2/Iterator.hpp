//
//  Iterator.hpp
//  2
//
//  Created by Anita Stashevskaya on 30.05.2022.
//

#ifndef Iterator_hpp
#define Iterator_hpp

#include <stdio.h>

#endif /* Iterator_hpp */
#include "ArrayQueue.hpp"

class Iterator {
private:
    int index;
    ArrayQueue queue;
public:
    Iterator(ArrayQueue &it);
    void start();
    void next();
    bool finish();
    int getValue();
    void printValue(Iterator it);
};
