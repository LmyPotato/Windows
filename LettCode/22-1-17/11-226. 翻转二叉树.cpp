///*
//翻转一棵二叉树。
//
//示例：
//
//输入：
//
//     4
//   /   \
//  2     7
// / \   / \
//1   3 6   9
//输出：
//
//     4
//   /   \
//  7     2
// / \   / \
//9   6 3   1
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/invert-binary-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <stack>
//#include "myfunction.h"
//
//using namespace std;
//
//struct TreeNode
//{
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
////class Solution {
////public:
////    TreeNode* invertTree(TreeNode* root) {
////        if (root == nullptr) {
////            return root;
////        }
////        swap(root->left, root->right);
////        invertTree(root->left);
////        invertTree(root->right);
////
////        return root;
////    }
////};
//
////class Solution {
////public:
////    TreeNode* invertTree(TreeNode* root) {
////        if (root == nullptr) {
////            return root;
////        }
////
////        stack<TreeNode *>st;
////        st.push(root);
////
////        while (!st.empty()) {
////            TreeNode *node = st.top();
////            st.pop();
////
////            swap(node->left, node->right);
////            if (node->left != nullptr) {
////                st.push(node->left);
////            }
////            if (node->right != nullptr) {
////                st.push(node->right);
////            }
////        }
////
////        return root;
////    }
////};
//
//class Solution {
//public:
//    TreeNode* invertTree(TreeNode* root) {
//        queue<TreeNode *> que;
//
//        if (root == nullptr) {
//            return root;
//        }
//        que.push(root);
//
//        while (!que.empty()) {
//            int size = que.size();
//
//            for (int i = 0; i < size; i++) {
//                TreeNode *node = que.front();
//                que.pop();
//
//                swap(node->left, node->right);
//
//                if (node->left != nullptr) {
//                    que.push(node->left);
//                }
//                if (node->right != nullptr) {
//                    que.push(node->right);
//                }
//            }
//        }
//        return root;
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
////1 2 3 -1 -1 -1 4 -1 -1
//// 1 2 4 -1 -1 -1 3 5 -1 -1 -1
//// 2 -1 3 -1 4 -1 5 -1 6 -1 -1
//// 1 2 -1 -1 3 -1 -1
//// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//int main()
//{
//    vector<vector<int>> o;
//    vector<double> out = {};
//    Solution s;
//    TreeNode *tree;
//    TreeNode *tmp;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    tmp = s.invertTree(tree);
//    PreOrderTraverse(tmp);
//
//    return 0;
//}
