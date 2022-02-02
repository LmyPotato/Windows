///*
//给定一个二叉搜索树, 找到该树中两个指定节点的最近公共祖先。
//
//百度百科中最近公共祖先的定义为：“对于有根树 T 的两个结点 p、q，最近公共祖先表示为一个结点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
//
//例如，给定如下二叉搜索树:  root = [6,2,8,0,4,7,9,null,null,3,5]
//
//示例 1:
//输入: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
//输出: 6
//解释: 节点 2 和节点 8 的最近公共祖先是 6。
//
//示例 2:
//输入: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
//输出: 2
//解释: 节点 2 和节点 4 的最近公共祖先是 2, 因为根据定义最近公共祖先节点可以为节点本身。
//*/
//#include "myfunction.h"
//
////class Solution {
////public:
////    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
////        TreeNode *left = nullptr;
////        TreeNode *right = nullptr;
////
////        if (root == nullptr) {
////            return root;
////        }
////
////        if (root->val > p->val && root->val > q->val) {
////            left = lowestCommonAncestor(root->left, p, q);
////
////            if (left != nullptr) {
////                return left;
////            }
////        }
////
////        if (root->val < p->val && root->val < q->val) {
////            right = lowestCommonAncestor(root->right, p, q);
////
////            if (right != nullptr) {
////                return right;
////            }
////        }
////
////        return root;
////    }
////};
//
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        while (root != nullptr) {
//            if (root->val > p->val && root->val > q->val) {
//                root = root->left;
//            }
//            else if (root->val < p->val && root->val < q->val) {
//                root = root->right;
//            }
//            else {
//                return root;
//            }
//        }
//        return nullptr;
//    }
//};
//
////1 -1 -1
////2 -1 -1
////3 -1 -1
//int main()
//{
//    Solution s;
//
//    TreeNode *node;
//    TreeNode *tmp;
//    TreeNode *node1, *node2;
//
//    creatBiTree(&node1);
//    creatBiTree(&node2);
//    creatBiTree(&node);
//    node->left = node1;
//    node->right = node2;
//
//
//    return 0;
//}
//
//
