#include "receiver.h"

using namespace std;

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

Sensor receiveAndSplitDataFromConsole(int numberOfLinesToRead) {
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
  int maxValue = 0;
  if(arryToFindMaxValue.size() > 0) {
    maxValue = *max_element(arryToFindMaxValue.begin(), arryToFindMaxValue.end());
  }
  return maxValue;
}

int findMinimumValue(vector<int> arryToFindMinValue) {
  int minValue = 0;
  if(arryToFindMinValue.size() > 0) {
    minValue = *min_element(arryToFindMinValue.begin(), arryToFindMinValue.end());
  }
  return minValue;
}
