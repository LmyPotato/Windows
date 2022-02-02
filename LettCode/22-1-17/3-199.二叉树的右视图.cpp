///*
//给定一个二叉树的 根节点 root，想象自己站在它的右侧，按照从顶部到底部的顺序，返回从右侧所能看到的节点值。
//
// 
//
//示例 1:
//
//
//
//输入: [1,2,3,null,5,null,4]
//输出: [1,3,4]
//示例 2:
//
//输入: [1,null,3]
//输出: [1,3]
//示例 3:
//
//输入: []
//输出: []
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/binary-tree-right-side-view
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include "myfunction.h"
//
//using namespace std;
//
//// Definition for a binary tree node.
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
//class Solution {
//public:
//    vector<int> rightSideView(TreeNode* root) {
//        vector<int> result ;
//        queue<TreeNode *> que;
//        if (root == nullptr) {
//            return {};
//        }
//
//        que.push(root);
//
//        while (!que.empty()) {
//            int size = que.size();
//
//            for (int i = 0; i < size; i++) {
//                TreeNode *node = que.front();
//                que.pop();
//
//                if (i == size - 1) {
//                    result.push_back(node->val);
//                }
//
//                if (node->left != nullptr) {
//                    que.push(node->left);
//                }
//                if (node->right != nullptr) {
//                    que.push(node->right);
//                }
//
//            }
//        }
//        return result;
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
//        PreOrderTraverse(T->left);
//        cout << T->val << " ";
//        PreOrderTraverse(T->right);
//    }
//}
//// 1 2 4 -1 -1 -1 3 5 -1 -1 -1
//// 2 -1 3 -1 4 -1 5 -1 6 -1 -1
//// 1 2 -1 -1 3 -1 -1
//// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//int main()
//{
//    vector<vector<int>> o;
//    vector<int> out = {};
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    out = s.rightSideView(tree);
//    printSomeStl(out);
//
//    return 0;
//}
//
