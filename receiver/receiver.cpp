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
