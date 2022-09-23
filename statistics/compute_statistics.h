#ifndef __COMPUTE_STATISTICS_H_
#define __COMPUTE_STATISTICS_H_

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

class Statistics {
public:
  int findMaximumValue(vector<int> arryToFindMaxValue);
  int findMinimumValue(vector<int> arryToFindMinValue);
  float simpleMovingAverage(vector<int> listToTest, int startIndex, int endIndex);
}

#endif /*__COMPUTE_STATISTICS_H_ */
