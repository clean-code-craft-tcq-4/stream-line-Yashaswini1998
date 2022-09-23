
#ifndef __RECEIVER_H_
#define __RECEIVER_H_

#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> convertCsvStringToInteger(string stringToConvert);
vector<string> receiveSensorDataFromConsole(int numberOfLinesToRead);
vector<int> extractTemperatureData(vector<string> stringFromSenderConsole);
vector<int> extractStateOfChargeData(vector<string> stringFromSenderConsole); 

#endif /*__RECEIVER_H_ */
