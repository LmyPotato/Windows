///*
//给你一个二叉树的根节点 root ，判断其是否是一个有效的二叉搜索树。
//
//有效 二叉搜索树定义如下：
//
//节点的左子树只包含 小于 当前节点的数。
//节点的右子树只包含 大于 当前节点的数。
//所有左子树和右子树自身必须也是二叉搜索树。
//
//
//示例 1：
//输入：root = [2,1,3]
//输出：true
//
//示例 2：
//输入：root = [5,1,4,null,null,3,6]
//输出：false
//解释：根节点的值是 5 ，但是右子节点的值是 4 。
//*/
//#include "myfunction.h"
//
////class Solution {
////public:
////    vector<int> result;
////    void traversal(TreeNode *root) {
////        if (root == nullptr) {
////            return;
////        }
////
////        traversal(root->left);
////        result.push_back(root->val);
////        traversal(root->right);
////    }
////    bool isValidBST(TreeNode* root) {
////        result.clear();
////
////        for (int i = 1; i < result.size(); i++) {
////            if (result[i] < result[i - 1]) {
////                return false;
////            }
////        }
////
////        return true;
////    }
////};
//
//class Solution {
//public:
//    bool isValidBST(TreeNode* root) {
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//        TreeNode* pre = NULL; // 记录前一个节点
//        while (cur != NULL || !st.empty()) {
//            if (cur != NULL) {
//                st.push(cur);
//                cur = cur->left;                // 左
//            } else {
//                cur = st.top();                 // 中
//                st.pop();
//                if (pre != NULL && cur->val <= pre->val)
//                return false;
//                pre = cur; //保存前一个访问的结点
//
//                cur = cur->right;               // 右
//            }
//        }
//        return true;
//    }
//};
//
////1 2 -1 -1 3 -1 -1
//int main()
//{
//    Solution s;
//
//    TreeNode *node;
//    creatBiTree(&node);
//    levelOrderTraverse(node);
//
//    cout <<s.isValidBST(node) << endl;
//
//    return 0;
//}
