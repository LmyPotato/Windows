///*
//给你一个二叉搜索树的根节点 root ，返回 树中任意两不同节点值之间的最小差值 。
//
//差值是一个正数，其数值等于两值之差的绝对值。
//
// 
//
//示例 1：
//
//
//输入：root = [4,2,6,1,3]
//输出：1
//示例 2：
//
//
//输入：root = [1,0,48,null,null,12,49]
//输出：1
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include "myfunction.h"
//
////class Solution {
////public:
////    vector<int> result;
////    void traversal(TreeNode *node) {
////        if (node == nullptr) {
////            return;
////        }
////
////        traversal(node->left);
////        result.push_back(node->val);
////        traversal(node->right);
////    }
////    int getMinimumDifference(TreeNode* root) {
////        int minValue = INT_MAX;
////        result.clear();
////        traversal(root);
////        printSomeStl(result);
////        for (int i = 1; i < result.size(); i++) {
////            minValue = min(result[i] - result[i - 1], minValue);
////        }
////        return minValue;
////    }
////};
//
//class Solution {
//public:
//    int getMinimumDifference(TreeNode* root) {
//        stack<TreeNode *> st;
//        TreeNode *cur = root;
//        TreeNode *pre = nullptr;
//        int result = INT_MAX;
//
//        while (cur != nullptr || !st.empty()) {
//            if (cur != nullptr) {
//                st.push(cur);
//                cur = cur->left;
//            }
//            else {
//                cur = st.top();
//                st.pop();
//                if (pre != nullptr) {
//                    result = min(cur->val - pre->val, result);
//                }
//
//                pre = cur;
//                cur = cur->right;
//            }
//        }
//        return result;
//    }
//};
//
////2 1 -1 -1 3 -1 -1
//int main()
//{
//    Solution s;
//
//    TreeNode *node;
//    creatBiTree(&node);
//
//    cout << s.getMinimumDifference(node)<<endl;
//    levelOrderTraverse(node);
//
//    return 0;
//}
//
