#define CATCH_CONFIG_MAIN
#include "test/catch.hpp"

#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "receiver/receiver.h"

using namespace std;

Sensor sensorData;
int maxTemperatureValue;
int minTemperatureValue;
int maxStateOfChargeValue;
int minStateOfChargeValue;

TEST_CASE("Test 1 : Read 0 lines from console, negative test case"){
  sensorData = receiveSensorDataFromConsole(0);
  REQUIRE(sensorData.temperatureList.size() == 0);
  REQUIRE(sensorData.stateOfChargeList.size() == 0);
  maxTemperatureValue = findMaximumValue(sensorData.temperatureList);
  minTemperatureValue = findMinimumValue(sensorData.temperatureList);
  REQUIRE(maxTemperatureValue == 0);
  REQUIRE(minTemperatureValue == 0);  
  maxStateOfChargeValue = findMaximumValue(sensorData.stateOfChargeList);
  minStateOfChargeValue = findMinimumValue(sensorData.stateOfChargeList);
  REQUIRE(maxStateOfChargeValue == 0);
  REQUIRE(minStateOfChargeValue == 0);   
}

