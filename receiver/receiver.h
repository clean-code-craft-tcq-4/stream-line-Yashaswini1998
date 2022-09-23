
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
Sensor receiveAndSplitDataFromConsole(int numberOfLinesToRead);

#endif /*__RECEIVER_H_ */
