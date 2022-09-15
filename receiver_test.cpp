//#define CATCH_CONFIG_MAIN
//#include "test/catch.hpp"

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> temperatureList;
vector<int> socList;

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
        temperatureList.push_back(integers[0]);
        socList.push_back(soc[1]);
        cout<<str<<endl;
    }
    cout<<"....................................................................."<<endl;
    for(int i =0; i<temperatureList.size();i++) {
        cout<< temperatureList[i]<<endl;
    }
   cout<<"....................................................................."<<endl;
        for(int i =0; i<socList.size();i++) {
        cout<< socList[i]<<endl;
    }
    
    cout<<"receiver end"<<endl;
    return 0;
}
