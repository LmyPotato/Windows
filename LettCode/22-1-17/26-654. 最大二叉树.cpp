///*
//给定一个不含重复元素的整数数组 nums 。一个以此数组直接递归构建的 最大二叉树 定义如下：
//
//二叉树的根是数组 nums 中的最大元素。
//左子树是通过数组中 最大值左边部分 递归构造出的最大二叉树。
//右子树是通过数组中 最大值右边部分 递归构造出的最大二叉树。
//返回有给定数组 nums 构建的 最大二叉树 。
//
// 
//
//示例 1：
//
//
//输入：nums = [3,2,1,6,0,5]
//输出：[6,3,5,null,2,0,null,null,1]
//解释：递归调用如下所示：
//- [3,2,1,6,0,5] 中的最大值是 6 ，左边部分是 [3,2,1] ，右边部分是 [0,5] 。
//    - [3,2,1] 中的最大值是 3 ，左边部分是 [] ，右边部分是 [2,1] 。
//        - 空数组，无子节点。
//        - [2,1] 中的最大值是 2 ，左边部分是 [] ，右边部分是 [1] 。
//            - 空数组，无子节点。
//            - 只有一个元素，所以子节点是一个值为 1 的节点。
//    - [0,5] 中的最大值是 5 ，左边部分是 [0] ，右边部分是 [] 。
//        - 只有一个元素，所以子节点是一个值为 0 的节点。
//        - 空数组，无子节点。
//示例 2：
//
//
//输入：nums = [3,2,1]
//输出：[3,null,2,null,1]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/maximum-binary-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//
//#include "myfunction.h"
//
//using namespace std;
//
////class Solution {
////public:
////    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
////        TreeNode *node = new TreeNode(0);
////        if (nums.size() == 1) {
////            node->val = nums[0];
////            return node;
////        }
////
////        int maxValue = 0;
////        int maxValueIndex = 0;
////        for (int i = 0; i < nums.size(); i++) {
////            if (nums[i] > maxValue) {
////                maxValue = nums[i];
////                maxValueIndex = i;
////            }
////        }
////
////        node->val = maxValue;
////
////        if (maxValueIndex > 0) {
////            vector<int>newVec(nums.begin(), nums.begin() +maxValueIndex);
////            node->left = constructMaximumBinaryTree(newVec);
////        }
////        if (maxValueIndex < nums.size() - 1) {
////            vector<int>newVec(nums.begin() + maxValueIndex + 1, nums.end());
////            node->right = constructMaximumBinaryTree(newVec);
////        }
////        return node;
////    }
////};
//
//class Solution {
//private:
//    // 在左闭右开区间[left, right)，构造二叉树
//    TreeNode* traversal(vector<int>& nums, int left, int right) {
//        if (left >= right) return nullptr;
//
//        // 分割点下标：maxValueIndex
//        int maxValueIndex = left;
//        for (int i = left + 1; i < right; ++i) {
//            if (nums[i] > nums[maxValueIndex]) maxValueIndex = i;
//        }
//
//        TreeNode* root = new TreeNode(nums[maxValueIndex]);
//
//        // 左闭右开：[left, maxValueIndex)
//        root->left = traversal(nums, left, maxValueIndex);
//
//        // 左闭右开：[maxValueIndex + 1, right)
//        root->right = traversal(nums, maxValueIndex + 1, right);
//
//        return root;
//    }
//public:
//    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//        return traversal(nums, 0, nums.size());
//    }
//};
//
////void PreOrderTraverse(TreeNode *T)
////{
////    if (T)
////    {
////        cout << T->val << " ";
////        PreOrderTraverse(T->left);
////        PreOrderTraverse(T->right);
////    }
////}
//
//
//
//int main()
//{
//    TreeNode *root;
//    Solution s;
//    vector<int> nums = {3,2,1,6,0,5};
//
//    root = s.constructMaximumBinaryTree(nums);
//
//    PreOrderTraverse(root);
//    cout<<endl;
//    levelOrderTraverse(root);
//
//    return 0;
//}
