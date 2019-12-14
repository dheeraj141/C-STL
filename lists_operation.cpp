//
//  lists_operation.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "lists_operation.hpp"
#include <forward_list>

// C++11 supports two list containers:
//list( double linked list) is the general and forward list ( single linked list) is the more restricted type

template <typename T>
void print_elements( const T &l)
{
    // here the list l is passed as a const reference so the function can't modify the list and we are passing as a reference because
    // it is usually faster to pass by refernce as pass by value involves a copy operation
    
    for( const auto &elem:l)
        cout<<elem<<endl;
        
}

void list_operations()
{
   
    
    
    // Insertion and removal of the element is pretty fast unlike arrays or vectors so push_back and push_front are supported
    
    list< char>  test_list;
    for( int i = 0 ; i<26; i++)
        test_list.push_back(char( 'a'+ i));
    
    
    // No random access of the elements provided so can't use the subscript operator []
    // Accessing the element is linear time complexity
    
    // range based loop used for displaying the element available from C++11
    // auto variable automatically deduce the type
    
    for( auto elem: test_list)
    {
        cout<<elem<<" ";                // here elem is the copy of the test_list
        elem = 'b';                     // no change will occur
        cout<<endl;
    }
    
    for( auto &elem: test_list)
    {
        cout<<elem<<" ";            // elem is reference to the test_list element;
        elem = 'b';                 // here change will occur and all the elements will change to 'b'
    }
    cout<<endl;
    
    // to stop unnecessary modification of the element when passed the element to a data structure use const reference
    print_elements(test_list);
    
    
    if( test_list.empty())          // .empty() gives whether the list contains element or not
        cout<<"non empty list"<<endl;
    
    // Another method to print
    
    while( test_list.empty())
    {
        cout<<test_list.front()<<" ";       // gives the first element or the head of the list
        test_list.pop_front();              // removes the first element
    }
    
    
    
    // Forward List which are single linked list which means only next pointer provided
    
    forward_list<int> sll = {1,2,3,4,5};
    
    
    for( auto elem: sll)
        cout<<elem<<" ";
    cout<<endl;
    
    
    
    
    
    
}
