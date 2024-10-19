#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdint> 
// #include <bits/stdc++.h>   <-   this uses all libraries
// using namespace std;  <- you won't need any of the below using statements
using std::cout;
using std::cin;
using std::string;
using std::sort;
using std::pow;

string Abbreviate(string const &loc){
    string sorted_loc = loc;
    sort(sorted_loc.begin(), sorted_loc.end());
    int freq[26] = {0}; //mapping each letter, creating array.
    for (char c : sorted_loc){
        freq[c - 'a']++;
    }
    string result; //makes string smaller
    for (int i = 0; i<26;++i){
        while (freq[i]>= 2){
        freq[i] -=2;
        if (i+1<26 ){
            freq[i +1]++;
        }
        }
        if (freq[i]==1){
        result.push_back('a'+i);
        }
    }
    return result;
    }


    std::int64_t LocToDec(std::string const & loc){
    int64_t result = 0;
    for (char c : loc){
        result += static_cast<long long>(1)<< (c-'a');
    }
    return result;
    }

    std::string DecToLoc(std::int64_t dec){
    string loc;
    for (int i =0; dec> 0; ++i){
        if (dec & 1){
        loc.push_back(static_cast<char>('a'+i));
        }
        dec >>=1;
    }
    return Abbreviate(loc);
    }

    int64_t AddLoc(std::string const &loc1, std::string const &loc2){
    string combined = loc1 + loc2;
    string abbreviated_loc = Abbreviate(combined);
    return LocToDec(abbreviated_loc);
    }


    int main(){
    string location_string;
    int64_t l;
    string a,b;
    std::cout<<"Give me a location string: "<<std::endl;
    std::cin >> location_string;
    std::cout<<"Give me an integer: "<<std::endl;
    std::cin>> l;
    std::cout<<location_string<<" to dec: " <<LocToDec(location_string)<<std::endl;
    std::cout<< location_string<<" abbreviated: "<<Abbreviate(location_string)<<std::endl;
    std::cout<<l<<" to loc: "<<DecToLoc(l)<<std::endl;
    std::cout<<"Give me two more location strings:"<<std::endl;
    std::cin>>a>>b;
    std::cout<< "Sum of "<< a<< " and "<<b<< " is: "<< AddLoc(a,b)<<std::endl;
    return 0;

}