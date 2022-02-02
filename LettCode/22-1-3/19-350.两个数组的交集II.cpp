///*
//给你两个整数数组 nums1 和 nums2 ，请你以数组形式返回两数组的交集。返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。
//
// 
//
//示例 1：
//
//输入：nums1 = [1,2,2,1], nums2 = [2,2]
//输出：[2,2]
//示例 2:
//
//输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出：[4,9]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/intersection-of-two-arrays-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//#include <set>
//
//using namespace std;
//
////class Solution {
////public:
////    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
////        sort(nums1.begin(), nums1.end());
////        sort(nums2.begin(), nums2.end());
////        int lenA = nums1.size();
////        int lenB = nums2.size();
////        int num1 = 0;
////        int num2 = 0;
////        int index1 = 0, index2 = 0;
////        vector<int> result = {};
////
////        while (index1 < lenA && index2 < lenB) {
////            num1 = nums1[index1];
////            num2 = nums2[index2];
////            if (num1 == num2) {
////                result.emplace_back(num1);
////                index1++;
////                index2++;
////            } else if (num1 < num2) {
////                index1++;
////            } else {
////                index2++;
////            }
////        }
////
////    return result;
////    }
////};
//
//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        unordered_map<int,int>um = {};
//        int lenA = nums1.size();
//        int tmp = 0;
//        vector<int>result = {};
//
//        for (int i = 0; i < lenA; i++) {
//            tmp = nums1[i];
//            um[tmp]++;
//        }
//
//        for (auto &num : nums2) {
//            if (um.count(num) >= 1) {
//                result.emplace_back(num);
//                um[num]--;
//
//                if (um[num] == 0) {
//                    um.erase(num);
//                }
//            }
//        }
//    return result;
//    }
//};
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
//
//int main()
//{
//    vector<int>output = {0};
////    vector<int>num1 = {1,2,2,1};
////    vector<int>num2 = {2,2};
//    vector<int>num1 = {9,4,9,8,4};
//    vector<int>num2 = {4,9,5};
//    Solution s;
//
//    output = s.intersect(num1,num2);
//    printVector(output);
//
//    return 0;
//}
