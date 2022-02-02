///*
//给定二叉搜索树（BST）的根节点 root 和要插入树中的值 value ，将值插入二叉搜索树。 返回插入后二叉搜索树的根节点。 输入数据 保证 ，新值和原始二叉搜索树中的任意节点值都不同。
//
//注意，可能存在多种有效的插入方式，只要树在插入后仍保持为二叉搜索树即可。 你可以返回 任意有效的结果 。
//
// 
//
//示例 1：
//
//
//输入：root = [4,2,7,1,3], val = 5
//输出：[4,2,7,1,3,5]
//解释：另一个满足题目要求可以通过的树是：
//
//示例 2：
//
//输入：root = [40,20,60,10,30,50,70], val = 25
//输出：[40,20,60,10,30,50,70,null,null,25]
//示例 3：
//
//输入：root = [4,2,7,1,3,null,null,null,null,null,null], val = 5
//输出：[4,2,7,1,3,5]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/insert-into-a-binary-search-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
///*
//给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
//
//百度百科中最近公共祖先的定义为：“对于有根树 T 的两个节点 p、q，最近公共祖先表示为一个节点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
//
// 
//
//示例 1：
//
//
//输入：root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
//输出：3
//解释：节点 5 和节点 1 的最近公共祖先是节点 3 。
//示例 2：
//
//
//输入：root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
//输出：5
//解释：节点 5 和节点 4 的最近公共祖先是节点 5 。因为根据定义最近公共祖先节点可以为节点本身。
//示例 3：
//
//输入：root = [1,2], p = 1, q = 2
//输出：1
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include "myfunction.h"
//
////class Solution {
////public:
////    TreeNode* insertIntoBST(TreeNode* root, int val) {
////
////        if (root == nullptr) {
////            TreeNode *node = new TreeNode(val);
////            return node;
////        }
////
////        if (root->val < val) {
////            root->right = insertIntoBST(root->right, val);
////        }
////        if (root->val > val) {
////            root->left = insertIntoBST(root->left, val);
////        }
////        return root;
////    }
////};
//
//class Solution {
//public:
//    TreeNode* insertIntoBST(TreeNode* root, int val) {
//        if (root == nullptr) {
//            TreeNode *node = new TreeNode(val);
//            return node;
//        }
//
//        TreeNode *cur = root;
//        TreeNode *parent = root;
//
//        while (cur != nullptr) {
//            parent = cur;
//
//            if (cur->val < val) {
//                cur = cur->right;
//            }
//            else {
//                cur = cur->left;
//            }
//        }
//
//        TreeNode *node = new TreeNode(val);
//
//        if (parent->val < val) {
//            parent->right = node;
//        }
//        else {
//            parent->left = node;
//        }
//        return root;
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
