///*
//给你二叉树的根节点 root 和一个表示目标和的整数 targetSum 。判断该树中是否存在 根节点到叶子节点 的路径，这条路径上所有节点值相加等于目标和 targetSum 。如果存在，返回 true ；否则，返回 false 。
//
//叶子节点 是指没有子节点的节点。
//
// 
//
//示例 1：
//
//
//输入：root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
//输出：true
//解释：等于目标和的根节点到叶节点路径如上图所示。
//示例 2：
//
//
//输入：root = [1,2,3], targetSum = 5
//输出：false
//解释：树中存在两条根节点到叶子节点的路径：
//(1 --> 2): 和为 3
//(1 --> 3): 和为 4
//不存在 sum = 5 的根节点到叶子节点的路径。
//示例 3：
//
//输入：root = [], targetSum = 0
//输出：false
//解释：由于树是空的，所以不存在根节点到叶子节点的路径。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/path-sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<stack>
//#include "myfunction.h"
//
//using namespace std;
//
////class Solution {
////public:
////    bool traversal(TreeNode *root, int count) {
////        if (root->left == nullptr
////            && root->right == nullptr && count == 0) {
////            return true;
////        }
////        if (root->left == nullptr && root->right == nullptr) {
////            return false;
////        }
////
////        if (root->left != nullptr) {
////            count = count - root->left->val;
////            if (traversal(root->left, count)) {
////                return true;
////            }
////            count = count + root->left->val;
////        }
////        if (root->right != nullptr) {
////            count = count - root->right->val;
////            if (traversal(root->right,count)) {
////                return true;
////            }
////            count = count + root->right->val;
////        }
////        return false;
////    }
////    bool hasPathSum(TreeNode* root, int targetSum) {
////        if (root == nullptr) {
////            return false;
////        }
////        return traversal(root, targetSum - root->val);
////    }
////};
//
//class Solution
//{
//public:
//    bool hasPathSum(TreeNode* root, int sum)
//    {
//        if (root == nullptr) return false;
//        // 此时栈里要放的是pair<节点指针，路径数值>
//        stack<pair<TreeNode*, int>> st;
//        st.push(pair<TreeNode*, int>(root, root->val));
//        while (!st.empty())
//        {
//            pair<TreeNode*, int> node = st.top();
//            st.pop();
//            // 如果该节点是叶子节点了，同时该节点的路径数值等于sum，那么就返回true
//            if (!node.first->left && !node.first->right && sum == node.second) return true;
//
//            // 右节点，压进去一个节点的时候，将该节点的路径数值也记录下来
//            if (node.first->right)
//            {
//                st.push(pair<TreeNode*, int>(node.first->right, node.second + node.first->right->val));
//            }
//
//            // 左节点，压进去一个节点的时候，将该节点的路径数值也记录下来
//            if (node.first->left)
//            {
//                st.push(pair<TreeNode*, int>(node.first->left, node.second + node.first->left->val));
//            }
//        }
//        return false;
//    }
//};
//
//void creatBiTree(TreeNode **T)
//{
//    int ch;
//    cin >> ch;
//    if (ch == -1)
//    {
//        *T = NULL;
//    }
//    else
//    {
//        *T = new TreeNode;
//
//        (*T)->val = ch;
//        creatBiTree(&(*T)->left);
//        creatBiTree(&(*T)->right);
//    }
//}
//
//void PreOrderTraverse(TreeNode *T)
//{
//    if (T)
//    {
//        cout << T->val << " ";
//        PreOrderTraverse(T->left);
//        PreOrderTraverse(T->right);
//    }
//}
//
//// 1 2 3 -1 -1 -1 4 -1 -1
//// 1 2 4 -1 -1 -1 3 5 -1 -1 -1
//// 2 -1 3 -1 4 -1 5 -1 6 -1 -1
//// 1 2 -1 -1 3 -1 -1
//// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//
//int main()
//{
//    Solution s;
//    TreeNode *tree;
//    vector<vector<int>>v;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    levelOrderTraverse(tree);
//    cout << s.hasPathSum(tree, 3)<<endl;
//
//    return 0;
//}
//
