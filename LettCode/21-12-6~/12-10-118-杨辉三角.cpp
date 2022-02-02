///*给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
//
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。
//
//
//
// 
//
//示例 1:
//
//输入: numRows = 5
//输出: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
//示例 2:
//
//输入: numRows = 1
//输出: [[1]]
// 
//
//提示:
//
//1 <= numRows <= 30
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/pascals-triangle
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<vector>
//#include<iomanip>
//
//using namespace std;
//
//void reverse_with_iterator(vector<vector<int>> v)
//{
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit<<" ";
//		}
//		cout <<endl;
//	}
//}
//
//void printGenerate(vector<vector<int>> v)
//{
//    int i=0;
//   	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//	    cout<<setw(v.size()-(i++));
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit<<" ";
//		}
//		cout <<endl;
//	}
//}
//
////class Solution {
////public:
//////    vector<vector<int>> generate(int numRows) {
//////        vector<vector<int>>nums;
//////        vector<int>temp;
//////        for(int i=0;i<numRows;i++){
//////            for(int j=0;j<=i;j++){
//////                if(j==0||i==j){
//////                    temp.push_back(1);
//////                }
//////                else{
//////                    temp.push_back(0);
//////                }
//////            }
//////            nums.push_back(temp);
//////            temp.clear();
//////        }
//////        reverse_with_iterator(nums);
//////        for(int i=2;i<numRows;i++){
//////            for(int j=1;j<i;j++){
//////                nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
//////            }
//////        }
//////        printGenerate(nums);
//////    }
////    vector<vector<int>> generate(int numRows) {
////        vector<vector<int>> ret(numRows);
////        for (int i = 0; i < numRows; ++i) {
////            ret[i].resize(i + 1);
////            ret[i][0] = ret[i][i] = 1;
////            for (int j = 1; j < i; ++j) {
////                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
////            }
////        }
////        printGenerate(ret);
////        return ret;
////    }
////};
//
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        if(numRows==1) return {{1}};
//        vector<vector<int>> ans;
//        vector<int> pre = {1};   //存储上一排
//        ans.push_back(pre);    //存入第一排
//        for(int i=1;i<numRows;++i)
//        {
//            vector<int> cur(i+1);  //定义当前排
//            for(int j=0;j<=i;++j)  //给当前排插入元素
//            {
//                if(j==0||j==i) cur[j] = 1;
//                else{
//                    cur[j] = pre[j-1]+pre[j];
//                }
//            }
//            ans.push_back(cur);
//            pre = cur;
//        }
//        return ans;
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    s.generate(5);
//
//
//    return 0;
//}
