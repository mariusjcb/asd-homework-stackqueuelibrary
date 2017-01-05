//
//  Queue.h
//  ASD Tema 5
//
//  Created by Marius Ilie on 02/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "Stack.h"

#include "QueueModel.h"
#include "QueueView.h"

template<class T>
class Queue {
public:
    QueueModel<T> *Items;
    QueueView<T> *View;
    
    Queue() {
        Items = new QueueModel<T>();
        View = new QueueView<T>();
    }
    
    ~Queue() {
        delete Items;
        delete View;
    }
    
    void push(T value) {
        Items->push(value);
    }
    
    Optional<T> pop(function<void (string)> eventClosure = showErrorClosure) {
        return Items->pop(eventClosure);
    }
    
    Optional<T> peek(function<void (string)> eventClosure = showErrorClosure) {
        return Items->peek(eventClosure);
    }
    
    bool empty() {
        return Items->isEmpty();
    }
    
    Optional<int> search(T value) {
        return Items->search(value, true);
    }
    
    void afiseaza() {
        Items->forEach.values(View->printElement, true);
    }
};

#endif /* Queue_h */
