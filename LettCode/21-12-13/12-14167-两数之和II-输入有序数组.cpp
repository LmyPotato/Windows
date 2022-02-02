///*
//给定一个已按照 非递减顺序排列  的整数数组 numbers ，请你从数组中找出两个数满足相加之和等于目标数 target 。
//
//函数应该以长度为 2 的整数数组的形式返回这两个数的下标值。numbers 的下标 从 1 开始计数 ，所以答案数组应当满足 1 <= answer[0] < answer[1] <= numbers.length 。
//
//你可以假设每个输入 只对应唯一的答案 ，而且你 不可以 重复使用相同的元素。
//
// 
//示例 1：
//
//输入：numbers = [2,7,11,15], target = 9
//输出：[1,2]
//解释：2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。
//示例 2：
//
//输入：numbers = [2,3,4], target = 6
//输出：[1,3]
//示例 3：
//
//输入：numbers = [-1,0], target = -1
//输出：[1,2]
// 
//
//提示：
//
//2 <= numbers.length <= 3 * 104
//-1000 <= numbers[i] <= 1000
//numbers 按 非递减顺序 排列
//-1000 <= target <= 1000
//仅存在一个有效答案
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
//
//
//using namespace std;
//
////class Solution {
////public:
////    vector<int> twoSum(vector<int>& numbers, int target) {
////        vector<int>out;
////
////        for(int i=0;i<numbers.size();i++){
////            if(target<numbers[i]){
////                break;
////            }
////            else{
////                for(int j=i+1;j<numbers.size();j++){
////                    if(target<numbers[j]){
////                        break;
////                    }
////                    int ret=numbers[i]+numbers[j];
////                    if(ret==target){
////                        out.push_back(i+1);
////                        out.push_back(j+1);
////                        return out;
////                    }
////                }
////            }
////        }
////        return out;
////    }
////};
//
////class Solution {
////public:
////    vector<int> twoSum(vector<int>& numbers, int target) {
////        for(int i=0;i<numbers.size();i++){
////            int left=i+1;
////            int right=numbers.size()-1;
////            while(left<=right){
////                int mid=(left+right)>>1;
////                if(numbers[mid]+numbers[i]==target){
////                    return {i+1,mid+1};
////                }
////                else if(target<numbers[mid]+numbers[i]){
////                    right=mid-1;
////                }
////                else{
////                    left=mid+1;
////                }
////            }
////        }
////        return {-1,-1};
////    }
////};
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int low=0;
//        int high=numbers.size()-1;
//
//        while(low<high){
//            int ret=numbers[low]+numbers[high];
//
//            if(ret==target){
//                return {low+1,high+1};
//            }
//            else if(ret<target){
//                low++;
//            }
//            else{
//                high--;
//            }
//        }
//        return {-1,-1};
//    }
//};
//
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//
//int main()
//{
//    Solution s;
//    vector<int>temp;
////    vector<int>v={2,7,11,15};
////    vector<int>v={2,3,4};
//    vector<int>v={-1,0};
//
//    temp=s.twoSum(v,-1);
//
//    printVector(temp);
//
//    return 0;
//}
