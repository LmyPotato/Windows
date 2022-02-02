///*
//给定两个数组，编写一个函数来计算它们的交集。
//
// 
//
//示例 1：
//
//输入：nums1 = [1,2,2,1], nums2 = [2,2]
//输出：[2]
//示例 2：
//
//输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出：[9,4]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/intersection-of-two-arrays
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//
//using namespace std;
//
////class Solution {
////public:
////    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
////        unordered_set<int>result_set;
////        unordered_set<int>nums_set(nums1.begin(), nums1.end());
////
////        for (auto &num : nums2) {
////            if (nums_set.find(num) != nums_set.end()) {
////                result_set.insert(num);
////            }
////        }
////
////        return vector<int>(result_set.begin(), result_set.end());
////    }
////};
//
//class Solution {
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        sort(nums1.begin(), nums1.end());
//        sort(nums2.begin(), nums2.end());
//
//        int index1 = 0;
//        int index2 = 0;
//        int len_nums1 = nums1.size();
//        int len_nums2 = nums2.size();
//        vector<int>result = {-999};
//
//        while (index1 < len_nums1 && index2 < len_nums2) {
//            int num1 = nums1[index1];
//            int num2 = nums2[index2];
//
//            if (num1 == num2) {
//
//                //在这里当两者的位置调换就会有影响
//                /*
//                    例如初始化 vector<int>result；
//                    然后这里的顺序是这样的
//                    num1!= result.back() || !result.size()
//                    就会报错！！！
//                    报错的原因是：
//                    你没有给result赋初值
//                */
//                if (!result.size() || num1!= result.back()) {
//                    result.emplace_back(nums1[index1]);
//                }
//
//                index1++;
//                index2++;
//            } else if (num1 < num2){
//                index1++;
//            } else {
//                index2++;
//            }
//        }
//
//        return vector<int>(result.begin() + 1, result.end());
//    }
//};
//
////class Solution {
////public:
////    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
////        sort(nums1.begin(), nums1.end());
////        sort(nums2.begin(), nums2.end());
////        int length1 = nums1.size(), length2 = nums2.size();
////        int index1 = 0, index2 = 0;
////        vector<int> intersection;
////        while (index1 < length1 && index2 < length2) {
////            int num1 = nums1[index1], num2 = nums2[index2];
////            if (num1 == num2) {
////                // 保证加入元素的唯一性
////                if (!intersection.size() || num1 != intersection.back()) {
////                    intersection.push_back(num1);
////                }
////                index1++;
////                index2++;
////            } else if (num1 < num2) {
////                index1++;
////            } else {
////                index2++;
////            }
////        }
////        return intersection;
////    }
////};
//
//
//template<class T>
//void printVector(T v)
//{
//    for (auto it=v.begin();it != v.end();it++) {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//int main()
//{
//    vector<int>num1 = {9,4,9,8,4};
//    vector<int>num2 = {4,9,5};
//    vector<int>output = {};
//    Solution s;
//
//    output = s.intersection(num1, num2);
//    printVector(output);
//
//    return 0;
//}
//
