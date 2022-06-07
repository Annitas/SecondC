//
//  main.cpp
//  2
//
//  Created by Anita Stashevskaya on 30.05.2022.
//
#include "Iterator.hpp"
#include "ArrayQueue.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    ArrayQueue a(4);
    cout<< "Size = " <<a.getSize() << "\n";
    a.addElem(8);
    cout<< "Last elem = " << a.getElem();
    if(a.isEmpty() == 0) {
        cout<<"\nNot empty\n";
    } else cout<< "Empty";
    

    
    a.makeEmpty();
    if(a.isEmpty() == 0) {
        cout<<"\nNot empty\n";
    } else cout<< "Empty\n";
    cout<< "Size = " << a.getSize() << "\n";
    
    
    ArrayQueue a1(4);
    for (int i = 0; i < 4; i++) {
        a1.addElem(i);
    }
    ArrayQueue a2(a1);
    Iterator iterator(a2);
    iterator.printValue(iterator);
    
    return 0;
}
