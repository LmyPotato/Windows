///*
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//
//请必须使用时间复杂度为 O(log n) 的算法。
//
//示例 1:
//输入: nums = [1,3,5,6], target = 5
//输出: 2
//
//示例 2:
//输入: nums = [1,3,5,6], target = 2
//输出: 1
//
//示例 3:
//输入: nums = [1,3,5,6], target = 7
//输出: 4
//
//示例 4:
//输入: nums = [1,3,5,6], target = 0
//输出: 0
//
//示例 5:
//输入: nums = [1], target = 0
//输出: 0
// 
//提示:
//
//1 <= nums.length <= 104
//-104 <= nums[i] <= 104
//nums 为无重复元素的升序排列数组
//-104 <= target <= 104
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/search-insert-position
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
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
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int low=0;
//        int mid;
//        int high=nums.size()-1;
//
//        while(low<=high){
//            mid=(high+low)/2;
//            cout<<"mid= "<<mid<<"\tnums[mid]= "<<nums[mid]<<endl;
//            cout<<"low= "<<low<<"\thigh= "<<high<<endl;
//            if(target>nums[mid]){
//                low=mid+1;
//            }
//            else if(target<nums[mid]){
//                high=mid-1;
//            }
//            else{
//                return mid;
//            }
//        }
//        return high+1;
//    }
//};
//
////class Solution {
////public:
////    int searchInsert(vector<int>& nums, int target) {
////int len = nums.length;
////        // 特殊判断
////        if (nums[len - 1] < target) {
////            return len;
////        }
////
////        // 程序走到这里一定有 nums[len - 1] >= target
////        int left = 0;
////        int right = len - 1;
////        // 在区间 nums[left..right] 里查找第 1 个大于等于 target 的元素的下标
////        while (left < right) {
////            int mid = left + (right - left) / 2;
////            if (nums[mid] < target){
////                // 下一轮搜索的区间是 [mid + 1..right]
////                left = mid + 1;
////            } else {
////                // 下一轮搜索的区间是 [left..mid]
////                right = mid;
////            }
////        }
////        return left;
////    }
////}
//
////class Solution {
////public:
////    int searchInsert(vector<int>& nums, int target) {
////        int n = nums.size();
////        int left = 0;
////        int right = n - 1; // 定义target在左闭右闭的区间里，[left, right]
////        while (left <= right) { // 当left==right，区间[left, right]依然有效
////            int middle = left + ((right - left) / 2);// 防止溢出 等同于(left + right)/2
////            if (nums[middle] > target) {
////                right = middle - 1; // target 在左区间，所以[left, middle - 1]
////            } else if (nums[middle] < target) {
////                left = middle + 1; // target 在右区间，所以[middle + 1, right]
////            } else { // nums[middle] == target
////                return middle;
////            }
////        }
////        // 分别处理如下四种情况
////        // 目标值在数组所有元素之前  [0, -1]
////        // 目标值等于数组中某一个元素  return middle;
////        // 目标值插入数组中的位置 [left, right]，return  right + 1
////        // 目标值在数组所有元素之后的情况 [left, right]， return right + 1
////        return right + 1;
////    }
////};
//
//int main()
//{
//    /*
//    5
//    2
//    7
//    0
//    */
//    Solution s;
//    int ret=-1;
//    vector<int>v={1,3,5,6};
////    vector<int>v={1};
////    vector<int>v={1,3};
//
//    printVector(v);
//    int target;
//
//    cin>>target;
//
//    ret=s.searchInsert(v,target);
//
//    cout<<"ret= "<<ret<<endl;
//
//    return 0;
//}
//
//
