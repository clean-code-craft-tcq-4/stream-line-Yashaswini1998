//#define CATCH_CONFIG_MAIN
//#include "test/catch.hpp"

#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include "receiver.h"

using namespace std;

struct Sensor{
  vector<int> temperatureList;
  vector<int> stateOfChargeList;
};

int findMaximumValue(vector<int> arryToFindMaxValue);
int findMinimumValue(vector<int> arryToFindMinValue);
Sensor receiveSensorDataFromConsole(int numberOfLinesToRead);



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
    Sensor sensor;
    sensor = receiveSensorDataFromConsole(50);

    cout<<"....................................................................."<<endl;
    for(int i =0; i<sensor.temperatureList.size();i++) {
        cout<< sensor.temperatureList[i]<<endl;
    }
   cout<<"....................................................................."<<endl;
        for(int i =0; i<sensor.stateOfChargeList.size();i++) {
        cout<< sensor.stateOfChargeList[i]<<endl;
    }

    cout<<"receiver end"<<endl;
    return 0;
}

Sensor receiveSensorDataFromConsole(int numberOfLinesToRead) {
  Sensor sensorData;
  vector<int> integerList;
  cout<<"receiver start"<<endl;
  while(numberOfLinesToRead--) {
    string stringFromSenderConsole;
    getline(cin, stringFromSenderConsole);
    integerList = convertCsvStringToInteger(stringFromSenderConsole);
    sensorData.temperatureList.push_back(integerList[0]);
    sensorData.stateOfChargeList.push_back(integerList[1]);
    cout<<stringFromSenderConsole<<endl;
  }
  cout<<"receiver end"<<endl;
  return sensorData;
}

int findMaximumValue(vector<int> arryToFindMaxValue) {
  int maxValue = *max_element(arryToFindMaxValue.begin(), arryToFindMaxValue.end());
  return maxValue;
}

int findMinimumValue(vector<int> arryToFindMinValue) {
  int minValue = *min_element(arryToFindMinValue.begin(), arryToFindMinValue.end());
  return minValue;
}
