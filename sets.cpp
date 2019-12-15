//
//  sets.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "sets.hpp"


// set consist of only values and the values are sorted

// in set no duplicates are allowed and in multiset duplicates can be used
// unordered set in which the values are not stored in sorted manner but using a hash values

// unordered multiset where duplicates are allowed 

template <typename T>
void print_elements_using_iterator( multiset<T> &s)
{
    multiset<int>::const_iterator it;
    for( it = s.begin(); it!=s.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;
    
    
}
void multiset_operation()
{
    // a multiset of string type
    
    
    multiset<string> cities = { " New York", " Los Angeles", "Paris", " Lyon", " Barcelona"," Lyon"};
    
    
    // printing  the values
    
    for( const auto &elem: cities)              // used auto for automatically deducing the type and const so that the elem is not modified 
        cout<<elem<<" ";
    cout<<endl;
    
    // to insert the elements in the sets
    cities.insert( { "Lyon", "Paris", " Barcelona", "Madrid"});
    
    // changing the sorting function of the set
    set<int, greater<int>> integers; // here we have changed the default sorting function which is < and now it is >
    
    // insert method set
    integers.insert( { 1,2,3,4,5,6});
    
    // printing the elements
    for( auto it  = integers.begin(); it!= integers.end(); ++it)
        cout<<*it<<" ";
    
    
    
   
}
void unordered_multiset_operation()
{
    // in general the associative and the unordered provide the same interface only the name differs
       // unordered multiset
       unordered_multiset<string> cities1 { " New York", " Los Angeles", "Paris", " Lyon", " Barcelona"," Lyon"};
       
    // the order in the print might be different
    // here the order is not defined but the iterator knows how to iterate over all the elements
       for ( const auto &elem :cities1)
           cout<<elem<<" ";
       cout<<endl;
    
    

}
