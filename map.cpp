#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    // declaring map
    // of char and int
    map<string, int > mp;
      
    // declaring iterators
    map<string, int>::iterator it ;
    map<string, int>::iterator it1 ;
      
    // inserting values 
    mp["zero"]=0;
    mp["one"]=1;
    mp["two"]=2;
    mp["three"]=3;
    mp["four"]=4;
      
    // using find() to search for 'b' 
    // key found
    // "it" has address of key value pair.
    it = mp.find("one");
      
    if(it == mp.end())
        cout << "Key-value pair not present in map" ;
    else
        cout << "Key-value pair present : " 
          << it->first << " - " << it->second ;
      
    cout << endl ;
      
    // using find() to search for 'm' 
    // key not found
    // "it1" has address of end of map.
    it1 = mp.find("anything");
      
    if(it1 == mp.end())
        cout << "Key-value pair not present in map" ;
    else
        cout << "Key-value pair present : " 
            << it1->first << "->" << it1->second ;

    return 0; 
}