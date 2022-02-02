///*
//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
//
//说明：
//
//你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
//
//示例 1:
//
//输入: [2,2,1]
//输出: 1
//示例 2:
//
//输入: [4,1,2,1,2]
//输出: 4
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/single-number
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
////class Solution {
////public:
////    int singleNumber(vector<int>& nums) {
////        int i=0;
////        sort(nums.begin(),nums.end());
////        while(i<nums.size()-1){
////            if(i==(nums.size()-1)){
////                return nums[i];
////            }
////            else if(nums[i]==nums[i+1]){
////                i=i+2;
////            }
////            else{
////                return nums[i];
////            }
////        }
////        return nums[i];
////    }
////};
///*
//
//
//
//*/
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (auto e: nums) ret ^= e;
//        return ret;
//    }
//};
//
//
//int main()
//{
////    vector<int>v={4,1,2,1,2};
//    vector<int>v={2,2,1};
//    Solution s;
//    cout<<s.singleNumber(v);
//
//
//    return 0;
//}
//
//
//
//
