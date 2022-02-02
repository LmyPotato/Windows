///*
//给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
//
//如果数组中不存在目标值 target，返回 [-1, -1]。
//
//进阶：
//
//你可以设计并实现时间复杂度为 O(log n) 的算法解决此问题吗？
// 
//
//示例 1：
//
//输入：nums = [5,7,7,8,8,10], target = 8
//输出：[3,4]
//示例 2：
//
//输入：nums = [5,7,7,8,8,10], target = 6
//输出：[-1,-1]
//示例 3：
//
//输入：nums = [], target = 0
//输出：[-1,-1]
// 
//
//提示：
//
//0 <= nums.length <= 105
//-109 <= nums[i] <= 109
//nums 是一个非递减数组
//-109 <= target <= 109
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printVector(vector<int>v) {
//    for (auto it=v.begin();it!=v.end();it++) {
//       cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int leftBorder = getLeftBorder(nums, target);
//        int rightBorder = getRightBorder(nums, target);
//        // 情况一
//        if (leftBorder == -2 || rightBorder == -2) return {-1, -1};
//        // 情况三
//        if (rightBorder - leftBorder > 1) return {leftBorder + 1, rightBorder - 1};
//        // 情况二
//        return {-1, -1};
//    }
//private:
//    int getLeftBorder(vector<int>&nums,int target) {
//        int left=0;
//        int right=nums.size()-1;
//        int leftBorder=-2;
//
//        while (left<=right) {
//            int mid=(left+right)>>1;
//
//            if (target<=nums[mid]) {
//                right=mid-1;
//                leftBorder=right;
//            } else {
//                left=mid+1;
//            }
//        }
//
//        return leftBorder;
//    }
//
//    int getRightBorder(vector<int>&nums,int target) {
//        int left=0;
//        int right=nums.size()-1;
//        int rightBorder=-2;
//
//        while (left<=right) {
//            int mid=(left+right)>>1;
//
//            if (target>=nums[mid]) {
//                left=mid+1;
//                rightBorder=left;
//            } else {
//                right=mid-1;
//            }
//        }
//
//        return rightBorder;
//    }
//};
//
//
//
//int main()
//{
//    int input_target=8;
//    vector<int> output_data={};
//    vector<int> input_data={5,7,7,8,8,10};
//    Solution s;
//
//    output_data=s.searchRange(input_data,input_target);
//
//    printVector(output_data);
//
//    return 0;
//}
//
//
