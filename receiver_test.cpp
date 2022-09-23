#define CATCH_CONFIG_MAIN
#include "test/catch.hpp"

#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "receiver/receiver.h"
#include "statistics/compute_statistics.h"

using namespace std;

vector<string> stringFromSenderConsole;
vector<int> temperatureList;
vector<int> stateOfChargeList;
int maxTemperatureValue;
int minTemperatureValue;
int maxStateOfChargeValue;
int minStateOfChargeValue;
Statistics temperatureStatistics;
Statistics stateOfChargeStatistics;

TEST_CASE("Test 1 : Read 0 lines from console, negative test case"){
  cout<< "Test to read 0 lines from console"<<endl;
  stringFromSenderConsole = receiveSensorDataFromConsole(0);
  REQUIRE(stringFromSenderConsole.size() == 0);
  temperatureList = extractTemperatureData(stringFromSenderConsole);
  maxTemperatureValue = temperatureStatistics.findMaximumValue(temperatureList);
  minTemperatureValue = temperatureStatistics.findMinimumValue(temperatureList);
  REQUIRE(maxTemperatureValue == 0);
  REQUIRE(minTemperatureValue == 0);  
  stateOfChargeList = extractStateOfChargeData(stringFromSenderConsole); 
  maxStateOfChargeValue = stateOfChargeStatistics.findMaximumValue(stateOfChargeList);
  minStateOfChargeValue = stateOfChargeStatistics.findMinimumValue(stateOfChargeList);
  REQUIRE(maxStateOfChargeValue == 0);
  REQUIRE(minStateOfChargeValue == 0);
}

TEST_CASE("Test 2 : Read 50 lines from console, positive test case"){
  cout<< "Test to read 50 lines from console"<<endl;
  stringFromSenderConsole = receiveSensorDataFromConsole(50);
  REQUIRE(stringFromSenderConsole.size() == 50);
  temperatureList = extractTemperatureData(stringFromSenderConsole);
  maxTemperatureValue = temperatureStatistics.findMaximumValue(temperatureList);
  minTemperatureValue = temperatureStatistics.findMinimumValue(temperatureList);
  cout<< "maxTemperatureValue = "<<maxTemperatureValue<<endl;
  cout<< "minTemperatureValue = "<<minTemperatureValue<<endl;
  stateOfChargeList = extractStateOfChargeData(stringFromSenderConsole); 
  maxStateOfChargeValue = stateOfChargeStatistics.findMaximumValue(stateOfChargeList);
  minStateOfChargeValue = stateOfChargeStatistics.findMinimumValue(stateOfChargeList);
  cout<< "maxStateOfChargeValue = "<<maxStateOfChargeValue<<endl;
  cout<< "minStateOfChargeValue = "<<minStateOfChargeValue<<endl;
  float temperatureSMA = temperatureStatistics.simpleMovingAverage(temperatureList, 45, 49);
  cout<<"temperatureSMA is : "<<temperatureSMA<<endl;
  float stateOfChargeSMA = stateOfChargeStatistics.simpleMovingAverage(stateOfChargeList, 45, 49);
  cout<<"stateOfChargeSMA is : "<<stateOfChargeSMA<<endl;  
}

