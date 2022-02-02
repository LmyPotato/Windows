///*
//给你一个正整数 n ，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。
//
// 
//
//示例 1：
//
//
//输入：n = 3
//输出：[[1,2,3],[8,9,4],[7,6,5]]
//示例 2：
//
//输入：n = 1
//输出：[[1]]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/spiral-matrix-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//void printVector(vector<vector<int>> v)
//{
//    for (auto it1 = v.begin();it1 != v.end();it1++) {
//        for (auto it2 = (*it1).begin();it2 != (*it1).end();it2++) {
//            cout<<*it2<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//}
//
//class Solution {
//public:
//    vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> res(n, vector<int>(n, 0));
//        int mid = n / 2;
//        int startx = 0,starty = 0;
//        int loop = n / 2;
//        int count = 1;
//        int offset = 1;
//        int i= 0 ,j = 0;
//
//        while (loop--) {
//            i = startx;
//            j = starty;
//
//            for (j = starty;j < starty + n - offset;j++) {
//                res[i][j] = count++;
//            }
//            for (i = startx;i < startx + n - offset;i++) {
//                res[i][j] = count++;
//            }
//            for (;j > starty ;j--) {
//                res[i][j] = count++;
//            }
//            for (;i > startx;i--) {
//                res[i][j] = count++;
//            }
//
//            startx++;
//            starty++;
//
//            offset += 2;
//        }
//
//        if (n % 2 == 1) {
//            res[mid][mid] = count;
//        }
//
//        return res;
//    }
//};
//
//
//int main()
//{
//    vector<vector<int>> temp={{0}};
//
//    Solution s;
//
//    temp = s.generateMatrix(2);
//
//    printVector(temp);
//
//    return 0;
//}
//
//
