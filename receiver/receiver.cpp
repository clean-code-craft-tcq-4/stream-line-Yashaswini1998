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

vector<string> receiveSensorDataFromConsole(int numberOfLinesToRead) {
  vector<string> stringFromSenderConsole;
  cout<<"receiver start"<<endl;
  while(numberOfLinesToRead--) {
    string tmp;
    getline(cin, tmp);
    stringFromSenderConsole.push_back(tmp);
    cout<<tmp<<endl;
  }
  cout<<"receiver end"<<endl;
  return stringFromSenderConsole;
}

vector<int> extractTemperatureData(vector<string> stringFromSenderConsole) {
    vector<int> integerList;
    vector<int> temperatureList;
    for(int counter = 0; counter < stringFromSenderConsole.size(); counter++) {
        integerList = convertCsvStringToInteger(stringFromSenderConsole[counter]);
        temperatureList.push_back(integerList[0]);
    }
    return temperatureList;
}

vector<int> extractStateOfChargeData(vector<string> stringFromSenderConsole) {
    vector<int> integerList;
    vector<int> stateOfChargeList;
    for(int counter = 0; counter < stringFromSenderConsole.size(); counter++) {
        integerList = convertCsvStringToInteger(stringFromSenderConsole[counter]);
        stateOfChargeList.push_back(integerList[1]);
    }
    return stateOfChargeList;
}
