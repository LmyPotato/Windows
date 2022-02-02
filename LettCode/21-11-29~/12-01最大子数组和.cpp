///*
//给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//
//子数组 是数组中的一个连续部分。
//
// 
//
//示例 1：
//
//输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
//输出：6
//解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
//示例 2：
//
//输入：nums = [1]
//输出：1
//示例 3：
//
//输入：nums = [5,4,-1,7,8]
//输出：23
// 
//
//提示：
//
//1 <= nums.length <= 105
//-104 <= nums[i] <= 104
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/maximum-subarray
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums);
//};
//
////int Solution::maxSubArray(vector<int>&nums)
////{
////    int size = nums.size();
////    int res = INT32_MIN;
////    for (int i = 0; i < size; ++i) {
////        int sum = 0;
////        for (int j = i; j < size; ++j) {
////            cout<<"i= "<<i<<"\tj= "<<j<<endl;
////            cout<<"sum= "<<sum<<endl;
////            sum += nums[j];
////            res = max(res, sum);
////        }
////        cout<<"--------------------------"<<endl;
////    }
////    return res;
////}
//
//int Solution::maxSubArray(vector<int>&nums)
//{
//    int len = nums.size();
//    if (len == 0) {
//        return 0;
//    }
//    int dp[len];
//    dp[0] = nums[0];
//    for (int i = 1; i < len; i++) {
//        if (dp[i - 1] >= 0){
//            dp[i] = dp[i - 1] + nums[i];
//        }
//        else{
//            dp[i] = nums[i];
//        }
//    }
//    // 最后不要忘记全部看一遍求最大值
//    int res = dp[0];
//    for (int i = 1; i < len; i++) {
//        res = max(res, dp[i]);
//    }
//    return res;
//}
//
//int main()
//{
//    int ret=-1;
//    Solution s;
//    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
//
//
//
//
//    ret=s.maxSubArray(nums);
//
//    cout<<"ret= "<<ret<<endl;
//
//    return 0;
//}
