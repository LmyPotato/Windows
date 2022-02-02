///*
//给你一棵 完全二叉树 的根节点 root ，求出该树的节点个数。
//
//完全二叉树 的定义如下：在完全二叉树中，除了最底层节点可能没填满外，其余每层节点数都达到最大值，并且最下面一层的节点都集中在该层最左边的若干位置。若最底层为第 h 层，则该层包含 1~ 2h 个节点。
//
// 
//
//示例 1：
//
//
//输入：root = [1,2,3,4,5,6]
//输出：6
//示例 2：
//
//输入：root = []
//输出：0
//示例 3：
//
//输入：root = [1]
//输出：1
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/count-complete-tree-nodes
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
////    int getNodes(TreeNode *root) {
////        if (root == nullptr) {
////            return 0;
////        }
////        int leftNode = getNodes(root->left);
////        int rightNode = getNodes(root->right);
////
////        return leftNode + rightNode + 1;
////    }
////    int countNodes(TreeNode* root) {
////        return getNodes(root);
////    }
////};
//
//class Solution {
//public:
//    int countNodes(TreeNode* root) {
//        if (root == nullptr) return 0;
//        TreeNode* left = root->left;
//        TreeNode* right = root->right;
//        int leftHeight = 0, rightHeight = 0; // 这里初始为0是有目的的，为了下面求指数方便
//        while (left) {  // 求左子树深度
//            left = left->left;
//            leftHeight++;
//        }
//        while (right) { // 求右子树深度
//            right = right->right;
//            rightHeight++;
//        }
//        if (leftHeight == rightHeight) {
//            return (2 << leftHeight) - 1; // 注意(2<<1) 相当于2^2，所以leftHeight初始为0
//        }
//        return countNodes(root->left) + countNodes(root->right) + 1;
//    }
//};
//
//class Solution {
//public:
//    int countNodes(TreeNode* root) {
//        queue<TreeNode *> que;
//        int result = 0;
//        if (root == nullptr) {
//            return 0;
//        }
//        que.push(root);
//
//        while (!que.empty()) {
//            int size = que.size();
//
//
//            for (int i = 0; i < size; i++) {
//                TreeNode *node = que.front();
//                que.pop();
//                result++;
//                if (node->left != nullptr) {
//                    que.push(node->left);
//                }
//                if (node->right != nullptr) {
//                    que.push(node->right);
//                }
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
//// 1 2 3 -1 -1 -1 4 -1 -1
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
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    cout << s.countNodes(tree)<<endl;
//
//    return 0;
//}
