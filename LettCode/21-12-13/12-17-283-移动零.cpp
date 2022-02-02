///*
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//
//示例:
//
//输入: [0,1,0,3,12]
//输出: [1,3,12,0,0]
//说明:
//
//必须在原数组上操作，不能拷贝额外的数组。
//尽量减少操作次数。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/move-zeroes
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<vector>
//
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
//    void moveZeroes(vector<int>& nums) {
//        int low=0;
//        int len=nums.size();
//
//
//        for (int fast=0;fast<len;fast++) {
//            if (nums[fast]==0) {
//                continue;
//            } else {
//                nums[low]=nums[fast];
//                low++;
//            }
//        }
//
//        for (int i=low;i<len;i++) {
//            nums[i]=0;
//        }
//
//        printVector(nums);
//    }
//};
//
//
//int main()
//{
//    vector<int>input_data={0,1};
//    Solution s;
//
//    s.moveZeroes(input_data);
//
//    return 0;
//}
//
