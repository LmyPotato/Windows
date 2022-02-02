///*
//给你一个 m 行 n 列的矩阵 matrix ，请按照 顺时针螺旋顺序 ，返回矩阵中的所有元素。
//
// 
//
// 示例 1：
//
//
// 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
// 输出：[1,2,3,6,9,8,7,4,5]
// 示例 2：
//
//
// 输入：matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// 输出：[1,2,3,4,8,12,11,10,9,5,6,7]
//
// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/spiral-matrix
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
// */
//
//#include <iostream>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//void printVector(vector<int>v)
//{
//	for (auto it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////class Solution {
////public:
////	vector<int> spiralOrder(vector<vector<int>>& matrix) {
////		int x = matrix.size();
////		int y = matrix[0].size();
////		vector<int> result;
////		int loop = min(x, y) / 2;
////		int startx = 0, starty = 0;
////		int i = 0, j = 0;
////		int offset = 1;
////
////		while (loop--) {
////			i = startx;
////			j = starty;
////
////			for (j = starty; j < y + starty - offset; j++) {
////				result.push_back(matrix[i][j]);
////			}
////			for (i = startx; i < x + startx - offset; i++) {
////				result.push_back(matrix[i][j]);
////			}
////			for (; j > starty; j--) {
////				result.push_back(matrix[i][j]);
////			}
////			for (; i > startx; i--) {
////				result.push_back(matrix[i][j]);
////			}
////
////			startx++;
////			starty++;
////
////			offset += 2;
////		}
////
////        if (min(x, y) % 2 == 1) { //当较小的一维为奇数时，最内层会剩下一行或者一列。
////            if (x <= y) {
////                for (i = startx, j = starty; j <= starty + y - offset; ++j) {
////                    result.push_back(matrix[i][j]);
////                }
////            } else {
////                for (i = startx, j = starty; i <= startx + x - offset; ++i) {
////                    result.push_back(matrix[i][j]);
////                }
////            }
////        }
////
////		return result;
////	}
////};
//
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        vector<int> ans;
//        if (matrix.size() == 0) return ans;
//        int m = matrix.size(), n = matrix[0].size();
//        int startx = 0, starty = 0;
//        int loop = min(m / 2, n / 2);
//        int offset = 1;
//
//        int i, j;
//        while (loop--) {
//            i = startx;
//            j = starty;
//            for (j = starty; j < starty + n - offset; ++j) {
//                ans.push_back(matrix[i][j]);
//            }
//            for (i = startx; i < startx + m - offset; ++i) {
//                ans.push_back(matrix[i][j]);
//            }
//            for (; j > starty; --j) {  //for (j = starty + n - offset; j > starty; --j) {
//                ans.push_back(matrix[i][j]);
//            }
//            for (; i > startx; --i) {  //for (i = startx + m - offset; i > startx; --i) {
//                ans.push_back(matrix[i][j]);
//            }
//            ++startx;
//            ++starty;
//            offset += 2;
//        }
//
//        if (min(m, n) % 2 == 1) { //当较小的一维为奇数时，最内层会剩下一行或者一列。
//            if (m <= n) {
//                for (i = startx, j = starty; j <= starty + n - offset; ++j) {
//                    ans.push_back(matrix[i][j]);
//                }
//            } else {
//                for (i = startx, j = starty; i <= startx + m - offset; ++i) {
//                    ans.push_back(matrix[i][j]);
//                }
//            }
//        }
//        return ans;
//    }
//};
//
//
//
//int main()
//{
//	//    vector<vector<int>>input_data={{1,2,3},{4,5,6},{7,8,9}};
//	//    vector<vector<int>>input_data={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//	vector<vector<int>>input_data = { { 6, 9, 7 } };
//	vector<int> output;
//	Solution s;
//
//	output = s.spiralOrder(input_data);
//	printVector(output);
//
//	return 0;
//}
//
