///*
//给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。
//
//注意：答案中不可以包含重复的三元组。
//
// 
//
//示例 1：
//
//输入：nums = [-1,0,1,2,-1,-4]
//输出：[[-1,-1,2],[-1,0,1]]
//示例 2：
//
//输入：nums = []
//输出：[]
//示例 3：
//
//输入：nums = [0]
//输出：[]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/3sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//
//using namespace std;
//
//class Solution
//{
//public:
//    vector<vector<int>> threeSum(vector<int> &nums)
//    {
//        vector<vector<int>> result = {};
//        sort(nums.begin(), nums.end());
//        int len = nums.size();
//
//        for (int i = 0; i < len; i++) {
//            if (nums[0] > 0) {
//                return {};
//            }
//
//            if (i > 0 && nums[i] == nums[i-1]) {
//                continue;
//            }
//
//            int left = i + 1;
//            int right = len - 1;
//
//            while (left < right) {
//                if (nums[i] + nums[left] + nums[right] > 0) {
//                    right--;
//                }
//                else if (nums[i] + nums[left] + nums[right] < 0) {
//                    left++;
//                }
//                else {
//                    result.emplace_back(vector<int>{nums[i],nums[left],nums[right]});
//
//                    while (left < right && nums[right] == nums[right - 1]) {
//                        right--;
//                    }
//
//                    while (left < right && nums[left] == nums[left + 1]) {
//                        left++;
//                    }
//
//                    right--;
//                    left++;
//                }
//            }
//        }
//
//        return result;
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
//int main()
//{
//    vector<vector<int>> result = {};
//    Solution s;
//    vector<int> data = {-1,0,1,2,-1,-4};
//    result = s.threeSum(data);
//
//    printVectorDouble(result);
//
//    return 0;
//}
