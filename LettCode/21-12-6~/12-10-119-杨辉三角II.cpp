///*给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。
//
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。
//
//
//
// 
//
//示例 1:
//
//输入: rowIndex = 3
//输出: [1,3,3,1]
//示例 2:
//
//输入: rowIndex = 0
//输出: [1]
//示例 3:
//
//输入: rowIndex = 1
//输出: [1,1]
// 
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/pascals-triangle-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<vector>
//#include<iomanip>
//
//using namespace std;
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
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//class Solution {
//public:
//    vector<int> getRow(int rowIndex) {
//        vector<vector<int>>nums(rowIndex);
//
//        for(int i=0;i<rowIndex;i++){
//            nums[i].resize(i+1);
//            nums[i][0]=nums[i][i]=1;
//            for(int j=1;j<i;j++){
//                nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
//            }
//        }
//        printGenerate(nums);
//        printVector(nums[rowIndex-1]);
//        return nums[rowIndex-1];
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    s.getRow(3);
//
//
//    return 0;
//}
//
