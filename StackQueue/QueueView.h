//
//  QueueView.h
//  ASD Tema 5
//
//  Created by Marius Ilie on 02/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#ifndef QueueView_h
#define QueueView_h

#include <iostream>
#include "QueueModel.h"
using namespace std;

template <class T>
class QueueView {
public:
    static void printSubIndex(int index, bool isLastIndex = true) {
        cout << "[" << index << "]";
        if(isLastIndex)
            cout << ": ";
    }
    
    static void printIndex(int index, bool isLastIndex = true) {
        cout << "queue";
        printSubIndex(index, isLastIndex);
    }
    
    static void printValue(T value) {
        cout << value << "\n";
    }
    
    static void printElement(int index, T value) {
        printIndex(index);
        printValue(value);
    }
    
    static void printOperationElement(int index, int operation, T value) {
        printIndex(index, false);
        printSubIndex(operation);
        printValue(value);
    }
};

#endif /* QueueView_h */
