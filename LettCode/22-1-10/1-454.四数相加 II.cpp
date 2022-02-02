///*
//给你四个整数数组 nums1、nums2、nums3 和 nums4 ，数组长度都是 n ，请你计算有多少个元组 (i, j, k, l) 能满足：
//
//0 <= i, j, k, l < n
//nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
// 
//
//示例 1：
//
//输入：nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
//输出：2
//解释：
//两个元组如下：
//1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
//2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0
//示例 2：
//
//输入：nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
//输出：1
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/4sum-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution
//{
//public:
//    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
//    {
//        unordered_map<int, int> um;
//
//        for (auto A : nums1)
//        {
//            for (auto B : nums2)
//            {
//                um[A + B]++;
//            }
//        }
//
//        int count = 0;
//
//        for (auto C : nums3)
//        {
//            for (auto D : nums4)
//            {
//                if (um.find(0 - (C + D)) != um.end())
//                {
//                    count += um[0 - (C + D)];
//                }
//            }
//        }
//        return count;
//    }
//};
//
//template <class T>
//void printVector(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    vector<int> a = {1, 2};
//    vector<int> b = {-2, -1};
//    vector<int> c = {-1, 2};
//    vector<int> d = {0, 2};
//
//    Solution s;
//    cout << s.fourSumCount(a, b, c, d) << endl;
//
//    system("pause");
//    return 0;
//}
