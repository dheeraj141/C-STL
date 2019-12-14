//
//  array_operation.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "array_operation.hpp"
#include <iostream>
using namespace std;

void array_operations()
{
    // static array you have to specify the size and that cannot be changed, not like vector
    // you have to specify the size at the creation time
    
    // declaring a string array of 5 elements and 3 are initialized to the values we have given and rest to NULL values using initializer lists
    
    array<string, 5> test = { " test", "string", "hello"};
    
    // to access the elements
    // array consist of type and size so array<int, 5> and array<int, 10> are 2 different arrays and can't be comapared as a whole
    
    for( int i = 0; i< test.size(); i++)
        cout<<test[i]<<" ";
    cout<<endl;
    
    
    
    
}
