///*
//给定二叉搜索树（BST）的根节点 root 和一个整数值 val。
//
//你需要在 BST 中找到节点值等于 val 的节点。 返回以该节点为根的子树。 如果节点不存在，则返回 null 。
//
//示例 1:
//
//输入：root = [4,2,7,1,3], val = 2
//输出：[2,1,3]
//
//Example 2:
//输入：root = [4,2,7,1,3], val = 5
//输出：[]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/search-in-a-binary-search-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include "myfunction.h"
//
//
////class Solution {
////public:
////    TreeNode* searchBST(TreeNode* root, int val) {
////        if (root == nullptr || root->val == val) {
////            return root;
////        }
////
////        if (root->val > val) {
////            return searchBST(root->left, val);
////        }
////        if (root->val < val) {
////            return searchBST(root->right, val);
////        }
////
////        return nullptr;
////    }
////};
//
//class Solution {
//public:
//    TreeNode* searchBST(TreeNode* root, int val) {
//        while (root != nullptr) {
//            if (root->val > val) {
//                root = root->left;
//            }
//            else if (root->val < val) {
//                root = root->right;
//            }
//            else {
//                return root;
//            }
//        }
//        return nullptr;
//    }
//};
///*
//层数：4(level)          最后面的的可以不用输出
//1    -------1-------    每一行的最前面依次为 2^(4 - 1) - 1 = 7    2^(4 - 2) - 1 = 3...
//2    ---|-------|---
//2    ---2-------3---    每个元素相隔 2^(4 - 1) - 1 = 7
//3    -|---|---|---|-
//3    -4---5---6---7-    每个元素相隔 2^(4 - 2) - 1 = 3
//4    |-|-|-|-|-|-|-|
//4    1-2-3-4-5-6-7-8    每个元素相隔 2^(4 - 3) - 1 = 1
//
//       1
//   |-------|
//   2       3
// |---|   |---|
// 4   5   6   7
//|-| |-| |-| |-|
//1 2 3 4 5 6 7 8
//
//---1
//-|---|
//-2---3
//|-| |-|
//4 5 6 7
//*/
////10 20 30 40 50 -1 -1 -1 -1 -1 -1
////4 2 1 -1 -1 3 -1 -1 7 -1 -1
////1 2 -1 4 -1 -1 3 -1 5 -1 -1
//// 1 2 -1 -1 3 -1 -1
//// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
////1 2 3 -1 -1 -1 -1
////10 -1 20 -1 30 -1 -1
////1 2 3 4 5 -1 -1 -1 -1 -1 -1
////10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
//int main()
//{
//    TreeNode *node;
//    Solution s;
//
//    creatBiTree(&node);
//    levelOrderTraverse(node);
//
//
////    node = s.searchBST(node, 2);
////    levelOrderTraverse(node);
//
//    return 0;
//}
//
