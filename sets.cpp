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

void set_operation()
{
    // a multiset of string type
    
    
    multiset<string> cities = { " New York", " Los Angeles", "Paris", " Lyon", " Barcelona"," Lyon"};
    
    
    // printing  the values
    
    for( const auto &elem: cities)              // used auto for automatically deducing the type and const so that the elem is not modified 
        cout<<elem<<" ";
    cout<<endl;
    
    // to insert the elements in the sets
    cities.insert( { "Lyon", "Paris", " Barcelona", "Madrid"});
    
    
    // in general the associative and the unordered provide the same interface only the name differs
    // unordered multiset
    unordered_multiset<string> cities1 { " New York", " Los Angeles", "Paris", " Lyon", " Barcelona"," Lyon"};
    
    // the order in the print might be different
    for ( const auto &elem :cities1)
        cout<<elem<<" ";
    cout<<endl;

}
