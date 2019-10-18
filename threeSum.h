//
// Created by 罗咏佳 on 2019/10/18.
//

#ifndef LEETCODE_THREESUM_H
#define LEETCODE_THREESUM_H

#include <vector>
#include <iostream>
using namespace std;

class threeSum {
public:
    vector<vector<int>> threeSumFunc(vector<int>& nums);
    void showAns();

private:
    vector<vector<int>> ansVec;
};


#endif //LEETCODE_THREESUM_H
