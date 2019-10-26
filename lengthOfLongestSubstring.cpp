//求字符串的最长子串
// Created by 罗咏佳 on 2019/10/26.
//
#include <string>

using namespace std;

int lengthOfLengestSubstring(string s){
    int maxLength = 0;
    int currLength = 0;
    int* position = new int[256];

    for(int i = 0; i < 256; ++i){
        position[i] = -1;
    }

    for(int i = 0; i < s.length(); ++i){
        int prevPosi = position[s[i]];
        if(prevPosi < 0 || prevPosi > i - currLength){
            currLength++;
        }else{
            if(currLength > maxLength)
                maxLength = currLength;
            currLength = i - prevPosi;
        }
        position[s[i]] = i;
    }
    if(currLength > maxLength){
        maxLength = currLength;
    }
    delete[] position;
    return maxLength;
}