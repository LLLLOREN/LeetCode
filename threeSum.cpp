//
// Created by 罗咏佳 on 2019/10/18.
//

#include "threeSum.h"
#include <algorithm>

vector<vector<int>> threeSum::threeSumFunc(vector<int>& nums){
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for(int k = 0; k < nums.size(); k++){
        if(nums[k] > 0) break;
        if(k > 0 && nums[k] == nums[k - 1]) continue;

        int target = 0 - nums[k];
        int i = k + 1, j = nums.size() - 1;
        while(i < j){
            if(nums[i] + nums[j] == target){
                res.push_back({nums[k], nums[i], nums[j]});
                while(i < j && nums[i] == nums[i + 1]) ++i;
                while(i < j && nums[j] == nums[j - 1]) --j;
                i++; j--;
            }else if(nums[i] + nums[j] < target) ++i;
            else --j;
        }
    }
    ansVec = res;
    return res;
};
void threeSum::showAns() {
    int row, col;
    cout<<ansVec.size();
    cout << "Use index : " << endl;
    for (vector<vector<int>>::iterator it = ansVec.begin(); it != ansVec.end(); ++it) {
        for (int i = 0; i < (*it).size(); ++i){
            cout << (*it)[i] << " " ;
        }
        cout<<endl;
    }
};