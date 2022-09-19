
#ifndef __RECEIVER_H_
#define __RECEIVER_H_

#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct Sensor{
  vector<int> temperatureList;
  vector<int> stateOfChargeList;
};

Sensor receiveSensorDataFromConsole(int numberOfLinesToRead);
vector<int> convertCsvStringToInteger(string stringToConvert);
int findMaximumValue(vector<int> arryToFindMaxValue);
int findMinimumValue(vector<int> arryToFindMinValue);

#endif /*__RECEIVER_H_ */
