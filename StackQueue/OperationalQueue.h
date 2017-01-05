//
//  OperationalQueue.h
//  StackQueue
//
//  Created by Marius Ilie on 05/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#ifndef OperationalQueue_h
#define OperationalQueue_h

#include "Queue.h"

template<class T>
class OperationalQueue: public Queue<T> {
public:
    OperationalQueue() {
        Queue<T>();
    }
    
    void push(int operationIndex, T value) {
        this->Items->push(operationIndex, value);
    }
};

#endif /* OperationalQueue_h */
