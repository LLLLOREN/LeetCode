#include <iostream>
#include "threeSum.h"
int main() {
    vector<int> nums={-1,0,1,2,-1,-4};
    threeSum test;
    vector<vector<int>> testAns;
    testAns = test.threeSumFunc(nums);
    test.showAns();
    return 0;
}