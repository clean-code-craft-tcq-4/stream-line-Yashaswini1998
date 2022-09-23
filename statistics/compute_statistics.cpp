#include "compute_statistics.h"

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

float simpleMovingAverage(vector<int> listToTest, int startIndex, int endIndex) {
   int numberOfElements = (endIndex - startIndex)+1;
   float average = 0.0;
   float total = 0;
   if((listToTest.size() >= 2) && (startIndex != endIndex)){
     for(int counter = startIndex; counter<= endIndex; counter++) {
       total += listToTest[counter];
     }
     average = total/numberOfElements;
   }
   return average;
}
