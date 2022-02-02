///*
//给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
//
//你可以假设数组是非空的，并且给定的数组总是存在多数元素。
//
// 
//
//示例 1：
//
//输入：[3,2,3]
//输出：3
//示例 2：
//
//输入：[2,2,1,1,1,2,2]
//输出：2
// 
//
//进阶：
//
//尝试设计时间复杂度为 O(n)、空间复杂度为 O(1) 的算法解决此问题。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/majority-element
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//
//using namespace std;
//
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
////class Solution {
////public:
////    int majorityElement(vector<int>& nums) {
////        int n=nums.size()/2;
////
////        sort(nums.begin(),nums.end());
////        printVector(nums);
////        int max_num=INT_MIN;
////        int num=1;
////
////        for(int i=0;i<nums.size()-1;i++){
////            if(nums[i]!=nums[i+1]){
////                num=1;
////            }
////            else{
////                num++;
////                max_num=max(max_num,num);
////            }
////
////            if(max_num>n){
////                return nums[i];
////            }
////        }
////        return nums[0];
////    }
////};
//
////class Solution {
////public:
////    int majorityElement(vector<int>& nums) {
////        sort(nums.begin(), nums.end());
////        return nums[nums.size() / 2];
////    }
////};
//
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        unordered_map<int, int> counts;
//        int majority = 0, cnt = 0;
//        for (int num: nums) {
//            ++counts[num];
//            if (counts[num] > cnt) {
//                majority = num;
//                cnt = counts[num];
//            }
//        }
//        return majority;
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    vector<int>v={2,2,1,1,1,2,2};
////    vector<int>v={3,2,3};
////    vector<int>v={1,2,3,4,5,5,5,5,5,5};
//
//
//    int ret=s.majorityElement(v);
//
//    cout<<ret<<endl;
//
//    return 0;
//}
