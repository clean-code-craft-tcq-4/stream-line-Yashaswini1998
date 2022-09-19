//#define CATCH_CONFIG_MAIN
//#include "test/catch.hpp"

#include <stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include "receiver.h"

using namespace std;

vector<int> temperatureList;
vector<int> socList;

vector<int> convertCsvStringToInteger(string stringToConvert) {
    stringstream stringStreamToConvert(stringToConvert);
    vector<int> convertedIntegerList;
    char character;
    int tmp;
    while(stringStreamToConvert >> tmp) {
        convertedIntegerList.push_back(tmp);
        stringStreamToConvert >> character;
    }
    return convertedIntegerList;
}

int main()
{
    int counter = 50;
    cout<<"receiver start"<<endl;
    while(counter--)
    {
        string stringFromSenderConsole;
        getline(cin, stringFromSenderConsole);
        vector<int> integerList = convertCsvStringToInteger(stringFromSenderConsole);
        temperatureList.push_back(integerList[0]);
        socList.push_back(integerList[1]);
        cout<<stringFromSenderConsole<<endl;
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

int findMaximumValue(vector<int> arryToFindMaxValue)
{
  int maxValue = *max_element(arryToFindMaxValue.begin(), arryToFindMaxValue.end());
  return maxValue;
}

int findMinimumValue(vector<int> arryToFindMinValue)
{
  int minValue = *min_element(arryToFindMinValue.begin(), arryToFindMinValue.end());
  return minValue;
}
