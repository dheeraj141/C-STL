//
//  maps.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "maps.hpp"

#include <map>
#include <string>
using namespace std;


 

// Associative containers where each element is a Key/Value pair and they are typically implemented as binary tree
// where each element has 1 parent and 2 childrens and particularly as Red Black trees

// All elements to the left have lesser values and to the right have higher values

// finding element is log( n) complexity
// unordered map where duplicates are not allowed
// unordered multimap duplicates are allowed 

void map_operation()
{
    // mutlimap duplicate values are allowed here key in the int value and string is the string value
    
    // the type of elements beneath the map is pair<const key, value> so the key is constant and can't be changed once inserted
    
  multimap<int,string> coll= { {5,"tagged"},
             {2,"a"},
             {1,"this"},
             {4,"of"},
             {6,"strings"},
             {1,"is"},
             {3,"multimap"} };
    
    for( const auto &elem : coll)
        cout<<elem.first<< " "<<elem.second<<endl;
    cout<<endl;
    
    
    
    
    //unordered maps are implemented as an array of linked list and the order is not defined
    // accessing the elements is much faster ( faster than the associative containers) and almost provide constant complexity of accessing an element
    
    // same thing can be done for unordered maps
    
    multimap<string, double> test = { { "tim", 5.5},{ "rock", 4.5},{ " Kim", 6.7}};
    
    for( auto &elem: test)
        elem.second+=2;                 // here reference is used as we are changing values
    
    // if we don't want to use auto
    for( pair< const string, double> &elem: test)   //  as you can see the internal type of the map elements is pair <const string, double> the key is constant
        elem.second-=2;                 // auto makes the code compact
    
    
    
    // printing the elements
    for( const auto &elem : test)
        cout<<elem.first<< " "<<elem.second<<endl;
    cout<<endl;
    
}
