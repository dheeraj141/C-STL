//
//  vectors.cpp
//  vector
//
//  Created by Dheeraj Kumar Ramchandani on 14/12/19.
//  Copyright © 2019 Dheeraj Kumar Ramchandani. All rights reserved.
//

#include "vectors.hpp"


void vector_methods( vector<int> &A)
{
    // minimum element in the vector
    auto it = min_element(A.begin(), A.end()); // can pass the customized compare function also and it returns an iterator
    cout<<*it<<endl;
    
    // same for the max element
    it = max_element(A.begin(), A.end());
    cout<<*it<<endl;
    
    // sorting the vector
    sort( A.begin(), A.end());          // can't use A.cbegin() and A.cend() as sort modifies the elements
    
    // find an element with a particular value
    
    it =  find( A.begin(), A.end(), 3); // you specify the range in the first two arguments and the value to be find in third argument
    if ( it != A.end())
        cout<<"element found"<<endl;    // if the element is not found then A.end() is returned
    
    reverse( A.begin(), A.end());       // here the whole vector is reversed
    
    // when passing the range make sure that both are valid and belong to the same container
    //the end can be reached from the begining and it is not past the end.
    reverse( it, A.end());              // here the elements are reverse from the first element which was 3 and till the end
    
    
    
    
    
    
}
void valid_range_example()
{
    vector<int> B;
    for( int i = 20; i<=40; i++)
        B.push_back(i);
    
    auto pos23 = find(B.begin(), B.end(), 23);
    auto pos34 = find( B.begin(), B.end(), 34);
    
    
    //  here we have to make sure that the iterators are valid and pos23 is ahead of the pos34 otherwise errors can occur
    // if pos23 is behind the pos34 then we will never reach pos34 and the loop will never end.
    auto max1 = max_element(pos23, pos34);
    cout<<*max1<<endl;
    
    // How do we make sure that pos23 is ahead of pos34
    //case 1 if pos23 and pos34 are random access iterators then  they can be comapred and checked so
    
    if ( pos23 < pos34)
    {
        // valid range is pos23 - pos34
        max1 = max_element(pos23, pos34);
        
    }
    else if( pos34 < pos23)
    {
        // valid range is pos34 - pos23
        max1 = max_element( pos34, pos23);
    }
    else
    {
        // both are equal must be end then
    }
    cout<<*max1<<endl;
    
    
    // case2 when they are not random access iterators meaning they can't be compared then how to make sure that the range is valid
    pos23 = find( B.begin(), B.end(), 23);
    pos34 = find( B.begin(), pos23, 34);
    
    if( pos23!= B.end() && pos34!= pos23)
    {
        // means that pos34 is ahead of the pos23 and valid range is pos34 - pos23
        max1 = max_element(pos34, pos23);
        
    }
    else
    {
        pos34 = find( pos23, B.end(), 34);
        if( pos34!= B.end())        // means that pos34 is after pos23
            max1 = max_element(pos23, pos34);
    }
    cout<<*max1<<endl;
    
    
    // more optimized approach
   auto it = find_if (B.begin(), B.end(),  // range
                   [] (int i) {               // criterion
                       return i == 23 || i == 34;
                   });
    if (it == B.end()) {
        // no element with value 25 or 35 found
    }
    else if (*it == 23) {

        // element with value 25 comes first
        pos23 = it;
        pos34 = find (++it, B.end(),        // range
                      34);                      // value
        
    }
    else {
        // element with value 35 comes first
        pos34 = it;
        pos23 = find (++it, B.end(),        // range
                      23);                      // value

    }
    
    
    
}

void copy_bug()
{
    vector<int> A = {1,2,3,4,5,6,7};
    vector<int> B;
    copy( A.begin(), A.end(), B.begin()); // error as the copy function assumes that the resulting vector has the resulting size as it overwrites
    // rather than inserting the element so make sure that the resulting vector has the appropriate size or use the insert iterator
    
    // fix for this
    B.resize( A.size());            // resize used to change the number of elements in the operation
    copy( A.begin(), A.end(), B.begin());
    // or use the insert iterator
    
}
void vector_operations()
{
    
    
    vector<int> coll; // declared and initialized to null values
       
       for( int i =0; i<6; i++)
           coll.push_back(i);
       
       for( int i = 0; i<coll.size(); i++)     // coll.size() gives the number of element in the vector
           cout<<coll[i]<<" ";                 // accessing the element
       cout<<endl;
    vector_methods(coll);
}
