//
//  vectors.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "vectors.hpp"


void vector_operation()
{
    
    
    vector<int> coll; // declared and initialized to null values
       
       for( int i =0; i<6; i++)
           coll.push_back(i);
       
       for( int i = 0; i<coll.size(); i++)     // coll.size() gives the number of element in the vector
           cout<<coll[i]<<" ";                 // accessing the element
       cout<<endl;
}
