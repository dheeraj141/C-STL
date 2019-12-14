//
//  deque.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "deque.hpp"
#include <iostream>

using namespace std;

void display_deque( deque<float> &temp)
{
    for( int i = 0; i<temp.size(); i++)     //  temp.size() gives the number of elements  in the dequeu
        cout<<temp[i]<<" ";                 // accessing the element
    cout<<endl;
}
void deque_operation()
{
    // declaring a deque variable of type float
    // double ended queue and can grow in both direction which means push_back and push_front are supported
    // STL provides only those function that have good performance meaning constant or logarithmic complexity
    
    deque<float> test;
    
    for( int i = 0; i<3; i++)
        test.push_back(i);          //push_back method
    
    
    display_deque(test);
    
    // now push_front method
    
    for( int i = 0; i<3; i++)
        test.push_front(i+5);
    
    display_deque(test);
    
    
    
    
    
    
}
