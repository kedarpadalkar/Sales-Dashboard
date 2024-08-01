#include <iostream>
#include <vector>
using namespace std;
// Function to add two matrices
vector<vector<int>> addMatrices(const vector<vector<int>>& mat1, const
vector<vector<int>>& mat2) {
 int rows = mat1.size();
 int cols = mat1[0].size();
 vector<vector<int>> result(rows, vector<int>(cols));
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 result[i][j] = mat1[i][j] + mat2[i][j];
 }
 }
 return result;
}
// Function to subtract two matrices
vector<vector<int>> subtractMatrices(const vector<vector<int>>& mat1, const
vector<vector<int>>& mat2) {
 int rows = mat1.size();
 int cols = mat1[0].size();
 vector<vector<int>> result(rows, vector<int>(cols));
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 result[i][j] = mat1[i][j] - mat2[i][j];
 }
 }
 return result;
}
// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& mat1, const
vector<vector<int>>& mat2) {
 int rows1 = mat1.size();
 int cols1 = mat1[0].size();
 int cols2 = mat2[0].size();
 vector<vector<int>> result(rows1, vector<int>(cols2));
 for (int i = 0; i < rows1; i++) {
 for (int j = 0; j < cols2; j++) {
 result[i][j] = 0;
2
 for (int k = 0; k < cols1; k++) {
 result[i][j] += mat1[i][k] * mat2[k][j];
 }
 }
 }
 return result;
}