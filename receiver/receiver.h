
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

vector<int> convertCsvStringToInteger(string stringToConvert);
Sensor receiveSensorDataFromConsole(int numberOfLinesToRead);
int findMaximumValue(vector<int> arryToFindMaxValue);
int findMinimumValue(vector<int> arryToFindMinValue);

#endif /*__RECEIVER_H_ */
