///*
//给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
//
//示例 1：
//输入：root = [1,null,2,3]
//输出：[1,2,3]
//
//示例 2：
//输入：root = []
//输出：[]
//
//示例 3：
//输入：root = [1]
//输出：[1]
//
//示例 4：
//输入：root = [1,2]
//输出：[1,2]
//
//示例 5：
//输入：root = [1,null,2]
//输出：[1,2]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/binary-tree-preorder-traversal
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<vector>
//
//#include "myfunction.h"
//
//using namespace std;
//
////Definition for a binary tree node.
// struct TreeNode {
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
//    void traversal (TreeNode *root, vector<int> &v) {
//        if (root == nullptr) {
//            return;
//        }
//        v.emplace_back(root->val);
//        traversal(root->left, v);
//        traversal(root->right, v);
//    }
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> result = {};
//
//        traversal(root, result);
//
//        return result;
//    }
//};
//
//void PreOrderTraverse(TreeNode* T)
//{
//    if(T)
//    {
//        PreOrderTraverse(T->left);
//        cout<<T->val<<" ";
//        PreOrderTraverse(T->right);
//    }
//}
//
//void creatBiTree(TreeNode **T)
//{
//    int ch;
//    cin>>ch;
//    if (ch==-1){
//        *T=NULL;
//    }
//    else
//    {
//        *T=new TreeNode;
//
//        (*T)->val=ch;
//        creatBiTree(&(*T)->left);
//        creatBiTree(&(*T)->right);
//    }
//}
//
////2 -1 3 -1 4 -1 5 -1 6 -1 -1
////1 2 -1 -1 3 -1 -1
//int main()
//{
//    vector<int> out = {};
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//
//    out = s.preorderTraversal(tree);
//    printSomeStl(out);
//
//    return 0;
//}
///*
//递归算法的三个要素
//1. 确定递归函数的参数和返回值：
//确定哪些参数是递归的过程中需要处理的，那么就在递归函数里加上这个参数，
//并且还要明确每次递归的返回值是什么进而确定递归函数的返回类型。
//
//2. 确定终止条件：
//写完了递归算法, 运行的时候，经常会遇到栈溢出的错误，就是没写终止条件或者终止条件写的不对，
//操作系统也是用一个栈的结构来保存每一层递归的信息，如果递归没有终止，操作系统的内存栈必然就会溢出。
//
//3. 确定单层递归的逻辑：
//确定每一层递归需要处理的信息。在这里也就会重复调用自己来实现递归的过程。
//
//*/
