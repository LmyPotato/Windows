///*
//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
//
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//
// 
//
//示例 1：
//
//
//输入：p = [1,2,3], q = [1,2,3]
//输出：true
//示例 2：
//
//
//输入：p = [1,2], q = [1,null,2]
//输出：false
//示例 3：
//
//
//输入：p = [1,2,1], q = [1,1,2]
//输出：false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/same-tree
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
////    bool isSameTree(TreeNode* p, TreeNode* q) {
////        if (p == nullptr && q != nullptr) {
////            return false;
////        }
////        else if (p != nullptr && q == nullptr) {
////            return false;
////        }
////        else if (p == nullptr && q == nullptr) {
////            return true;
////        }
////        else if (p->val != q->val) {
////            return false;
////        }
////
////        bool outside = isSameTree(p->left, q->left);
////        bool inside = isSameTree(p->right, q->right);
////
////        return (outside && inside);
////    }
////};
//
////class Solution {
////public:
////    bool isSameTree(TreeNode *p, TreeNode *q)
////    {
////        queue<TreeNode *> que;
////
////        if (p == nullptr && q == nullptr){
////            return true;
////        }
////        if (p != nullptr && q == nullptr){
////            return false;
////        }
////        else if (p == nullptr && q != nullptr){
////            return false;
////        }
////        que.push(p);
////        que.push(q);
////
////        while (!que.empty()){
////            TreeNode *leftNode = que.front();
////            que.pop();
////            TreeNode *rightNode = que.front();
////            que.pop();
////
////            if (leftNode == nullptr && rightNode == nullptr){
////                continue;
////            }
////
////            if (!leftNode || !rightNode || (leftNode->val != rightNode->val)){
////                return false;
////            }
////
////            que.push(leftNode->left);
////            que.push(rightNode->left);
////            que.push(leftNode->right);
////            que.push(rightNode->right);
////        }
////        return true;
////    }
////};
//
//class Solution {
//public:
//    bool isSameTree(TreeNode *p, TreeNode *q)
//    {
//        queue<TreeNode *> que;
//
//        if (p == nullptr && q == nullptr){
//            return true;
//        }
//        if (p != nullptr && q == nullptr){
//            return false;
//        }
//        else if (p == nullptr && q != nullptr){
//            return false;
//        }
//        que.push(p);
//        que.push(q);
//
//        while (!que.empty()){
//            TreeNode *leftNode = que.front();
//            que.pop();
//            TreeNode *rightNode = que.front();
//            que.pop();
//
//            if (leftNode == nullptr && rightNode == nullptr){
//                continue;
//            }
//
//            if (leftNode != nullptr && rightNode == nullptr){
//                return false;
//            }
//            else if ((leftNode != nullptr && rightNode != nullptr)
//                    && (leftNode->val != rightNode->val)){
//                return false;
//            }
//            else if (leftNode == nullptr && rightNode != nullptr){
//                return false;
//            }
//
//            que.push(leftNode->left);
//            que.push(rightNode->left);
//            que.push(leftNode->right);
//            que.push(rightNode->right);
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
//    TreeNode *p, *q;
//
//    creatBiTree(&p);
//    PreOrderTraverse(p);
//    cout<<endl;
//    creatBiTree(&q);
//    PreOrderTraverse(q);
//    cout<<endl;
//
//    cout << s.isSameTree(p, q) <<endl;
//
//    return 0;
//}
//
