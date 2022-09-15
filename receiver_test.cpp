//#define CATCH_CONFIG_MAIN
//#include "test/catch.hpp"

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> temperature;
vector<int> soc;

vector<int> take_int(string str) {
    stringstream ss(str);
    vector<int> result;
    char ch;
    int tmp;
    while(ss >> tmp) {
        result.push_back(tmp);
        ss >> ch;
    }
    return result;
}

int main()
{
    int counter = 50;
    cout<<"receiver start"<<endl;
    while(counter--)
    {
        string str;
        getline(cin, str);
        vector<int> integers = take_int(str);
        temperature.push_back(integers[0]);
        soc.push_back(soc[1]);
        cout<<str<<endl;
    }
    cout<<"....................................................................."<<endl;
    for(int i =0; i<temperature.size();i++) {
        cout<< temperature[i]<<endl;
    }
   cout<<"....................................................................."<<endl;
        for(int i =0; i<soc.size();i++) {
        cout<< soc[i]<<endl;
    }
    
    cout<<"receiver end"<<endl;
    return 0;
}
