//
//  OptionalType.h
//  ASD Tema 5
//
//  Created by Marius Ilie on 02/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#ifndef OptionalType_h
#define OptionalType_h

#include <limits>
double nan = std::numeric_limits<double>::quiet_NaN();

template <class T>
class Optional {
private:
    T value = std::numeric_limits<double>::quiet_NaN();
    bool objIsNull = true;
    
public:
    
    Optional(T value) {
        setValue(value);
    }
    
    Optional() {
        objIsNull = true;
    }
    
    void setValue(T value) {
        this->objIsNull = false;
        this->value = value;
    }
    
    T getValue() {
        if(this->isSet())
            return value;
        else return std::numeric_limits<double>::quiet_NaN();
    }
    
    bool isSet() {
        return !this->objIsNull;
    }
    
    bool operator==(const Optional<T>& operand2) {
        if(this->objIsNull == operand2->objIsNull && this->value == operand2->value)
            return true;
        else return false;
    }
    
    
    void operator=(const int value) {
        this->setValue(value);
    }
    
    void operator+=(const int value) {
        if(this->objIsNull)
            this->setValue(value);
        else this->value += value;
    }
    
    void operator-=(const int value) {
        if(this->objIsNull)
            this->setValue(value);
        else this->value += value;
    }
    
    Optional<T> operator+(const Optional<T>& operand2) {
        Optional<T> toReturn = Optional<T>();
        
        if(!this->objIsNull)
            toReturn += this->value;
        
        if(!operand2->objIsNull)
            toReturn += this->value;
        
        return toReturn;
    }
    
    Optional<T> operator-(const Optional<T>& operand2) {
        Optional<T> toReturn = Optional<T>();
        
        if(!this->objIsNull)
            toReturn -= this->value;
        
        if(!operand2->objIsNull)
            toReturn -= this->value;
        
        return toReturn;
    }
};

#endif /* OptionalType_h */
