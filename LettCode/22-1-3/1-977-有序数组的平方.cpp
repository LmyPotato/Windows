///*
//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
//
// 
//
//示例 1：
//
//输入：nums = [-4,-1,0,3,10]
//输出：[0,1,9,16,100]
//解释：平方后，数组变为 [16,1,0,9,100]
//排序后，数组变为 [0,1,9,16,100]
//示例 2：
//
//输入：nums = [-7,-3,2,3,11]
//输出：[4,9,9,49,121]
// 
//
//提示：
//
//1 <= nums.length <= 104
//-104 <= nums[i] <= 104
//nums 已按 非递减顺序 排序
// 
//
//进阶：
//
//请你设计时间复杂度为 O(n) 的算法解决本问题
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/squares-of-a-sorted-array
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void printVector(vector<int>v)
//{
//    for (auto it=v.begin();it != v.end();it++) {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
////class Solution {
////public:
////    vector<int> sortedSquares(vector<int>& nums) {
////        vector<int>temp={0};
////        int len = nums.size();
////        for (int i = 0;i < len ;i++) {
////            temp.resize(i);
////
////            temp.push_back(nums[i]*nums[i]);
////        }
////        sort(temp.begin(),temp.end());
////        //printVector(temp);
////        return temp;
////    }
////};
//
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//
//        int j=0;
//        int len=nums.size()-1;
//        int k = len;
//        vector<int>result(len+1,0);
//
//        for (int i = 0,j=len;i <= j;) {
//            if (nums[i]*nums[i] > nums[j]*nums[j]) {
//                result[k--] = nums[i]*nums[i];
//                i++;
//            } else {
//                result[k--] = nums[j]*nums[j];
//                j--;
//            }
//        }
//
//        //printVector(result);
//        return result;
//    }
//};
//
//
//int main()
//{
//    Solution s;
////    vector<int>input_data={-4,-1,0,3,10};
//    vector<int>input_data={-7,-3,2,3,11};
//    vector<int>output={0};
//
//    output=s.sortedSquares(input_data);
//
//
//    return 0;
//}
//
