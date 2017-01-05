/*
 *  StackQueue.cpp
 *  StackQueue
 *
 *  Created by Marius Ilie on 05/01/17.
 *  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
 *
 */

#include <iostream>
#include "StackQueue.hpp"
#include "StackQueuePriv.hpp"

void StackQueue::HelloWorld(const char * s)
{
    StackQueuePriv *theObj = new StackQueuePriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void StackQueuePriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

