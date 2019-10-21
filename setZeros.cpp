//给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。
// Created by 罗咏佳 on 2019/10/21.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void setZeros(vector<vector<int>>& matrix){
        if(matrix.empty()||matrix[0].empty())
            return;
        bool firstRowZero = false;
        bool firstColZero = false;
        //遍历数组，找出为0的行和列赋值给第一行第一列
        for(int row = 0; row < matrix.size(); ++row) {
            for (int col = 0; col < matrix[row].size(); ++col) {
                if (matrix[row][col] == 0) {
                    matrix[0][col] = 0;
                    matrix[row][0] = 0;

                    if (row == 0) {
                        firstRowZero = true;
                    }
                    if (col == 0) {
                        firstColZero = true;
                    }
                }
            }
        }
        //置0
        for(int row = 1; row < matrix.size(); ++row){
            if(matrix[row][0] == 0){
                for(int col = 1; col < matrix[row].size(); ++col){
                    matrix[row][col] = 0;
                }
            }
        }
        for(int col = 1; col < matrix[0].size(); ++col){
            if(matrix[0][col] == 0){
                for(int row = 1; row < matrix.size(); ++row){
                    matrix[row][col] = 0;
                }
            }
        }
        if(firstRowZero){
            for(int col = 0; col < matrix[0].size(); ++col){
                matrix[0][col] = 0;
            }
        }
        if(firstRowZero){
            for (int row = 0; row < matrix.size(); ++row) {
                matrix[row][0] = 0;
            }
        }
    }
};