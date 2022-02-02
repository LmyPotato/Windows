///*
//给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[b], nums[c], nums[d]] （若两个四元组元素一一对应，则认为两个四元组重复）：
//
//0 <= a, b, c, d < n
//a、b、c 和 d 互不相同
//nums[a] + nums[b] + nums[c] + nums[d] == target
//你可以按 任意顺序 返回答案 。
//
// 
//
//示例 1：
//
//输入：nums = [1,0,-1,0,-2,2], target = 0
//输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
//示例 2：
//
//输入：nums = [2,2,2,2,2], target = 8
//输出：[[2,2,2,2]]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/4sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        vector<vector<int>> result = {};
//        sort(nums.begin(), nums.end());
//        int len = nums.size();
//
//        for (int k = 0; k < len; k++) {
//
//            if (k > 0 && nums[k] == nums[k - 1]) {
//                continue;
//            }
//
//            for (int i = k + 1; i < len; i++) {
//                if (i > k + 1 && nums[i] == nums[i - 1]) {
//                    continue;
//                }
//
//                int left = i + 1;
//                int right = len - 1;
//
//                while (left < right) {
//                    //不能定义成int sum =nums[k] + nums[i] + nums[left] + nums[right]
//                    //来判断，因为可能越界
//
//                    if (nums[k] + nums[i] < target - (nums[left] + nums[right])) {
//                        left++;
//                    }
//                    else if (nums[k] + nums[i] > target - (nums[left] + nums[right])) {
//                        right--;
//                    }
//                    else {
//                        result.push_back(vector<int>{nums[k], nums[i], nums[left], nums[right]});
//
//                        while (left < right && nums[right] == nums[right - 1]) {
//                            right--;
//                        }
//                        while (left < right && nums[left] == nums[left + 1]) {
//                            left++;
//                        }
//
//                        right--;
//                        left++;
//                    }
//                }
//            }
//        }
//        return result;
//    }
//};
//
//template <class T>
//void printVectorDouble(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        for (auto it1 = it->begin(); it1 != it->end(); it1++)
//        {
//            cout << *it1 <<" ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
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
//    Solution s;
//    vector<int> data = {1,0,-1,0,-2,2};
//    vector<vector<int>> output = {};
//    int target = 0;
//
//    output = s.fourSum(data, target);
//    printVectorDouble(output);
//
//    return 0;
//}
//
