//
//  QueueModel.h
//  ASD Tema 5
//
//  Created by Marius Ilie on 02/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#ifndef QueueModel_h
#define QueueModel_h

using namespace std;

template <class T>
class QueueModel : public StackModel<T> {
public:
    QueueModel() {
        StackModel<T>();
    }
    
    Optional<T> pop(function<void (string)> eventClosure) override {
        Optional<T> optionalValue;
        typename StackModel<T>::StackNode *nextBottom;
        
        if (this->isEmpty())
        {
            eventClosure("COADA ESTE GOALA");
        }
        else
        {
            optionalValue = this->bottom->value;
            
            nextBottom = this->bottom->back;
            // delete this->bottom -> StackModel in loc de StackNode ???
            
            if(nextBottom == NULL) {
                this->top = 0;
            }
            
            this->bottom = nextBottom;
        }
        
        return optionalValue;
    }
    
    Optional<T> peek(function<void (string)> eventClosure) override {
        Optional<T> optionalValue;
        
        if(this->isEmpty()) {
            eventClosure("COADA ESTE GOALA");
        } else {
            optionalValue = this->bottom->value;
        }
        
        return optionalValue;
    }
};

#endif /* QueueModel_h */
