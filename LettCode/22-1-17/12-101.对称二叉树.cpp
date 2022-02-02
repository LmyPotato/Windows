///*
//给你一个二叉树的根节点 root ， 检查它是否轴对称。
//
//示例 1：
//输入：root = [1,2,2,3,4,4,3]
//输出：true
//
//示例 2：
//输入：root = [1,2,2,null,3,null,3]
//输出：false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/symmetric-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
////    bool compare(TreeNode *left, TreeNode *right) {
////        if (left == nullptr && right !=nullptr) {
////            return false;
////        }
////        else if (left != nullptr && right == nullptr) {
////            return false;
////        }
////        else if (left == nullptr && right == nullptr) {
////            return true;
////        }
////        else if (left->val != right->val) {
////            return false;
////        }
////
////        bool outside = compare(left->left, right->right);
////        bool inside = compare(left->right, right->left);
////        bool isSame = (outside && inside);
////
////        return isSame;
////    }
////    bool isSymmetric(TreeNode* root) {
////        if (root == nullptr) {
////            return true;
////        }
////        return compare(root->left, root->right);
////    }
////};
//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        queue<TreeNode *> que;
//
//        if (root == nullptr) {
//            return true;
//        }
//        que.push(root->left);
//        que.push(root->right);
//        while (!que.empty()) {
//            TreeNode *leftNode = que.front();
//            que.pop();
//            TreeNode *rightNode = que.front();
//            que.pop();
//
//            if (leftNode == nullptr && rightNode == nullptr) {
//                continue;
//            }
//
//            if (leftNode == nullptr
//              || rightNode == nullptr
//              || leftNode->val != rightNode->val) {
//                return false;
//            }
//
//            que.push(leftNode->left);
//            que.push(rightNode->right);
//            que.push(leftNode->right);
//            que.push(rightNode->left);
//        }
//        return true;
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
//// 1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1
//int main()
//{
//    vector<vector<int>> o;
//    vector<double> out = {};
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    cout<< s.isSymmetric(tree)<<endl;
//
//    return 0;
//}
//
