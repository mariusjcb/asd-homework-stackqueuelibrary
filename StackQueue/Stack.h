//
//  Stack.h
//  ASD Tema 5
//
//  Created by Marius Ilie on 02/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "StackModel.h"
#include "StackView.h"

template<class T>
class Stack {
public:
    StackModel<T> *Items;
    StackView<T> *View;
    
    Stack() {
        Items = new StackModel<T>();
        View = new StackView<T>();
    }
    
    virtual ~Stack() {
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
        return Items->search(value);
    }
    
    void afiseaza() {
        Items->forEach.values(View->printElement);
    }
};

#endif /* Stack_h */
