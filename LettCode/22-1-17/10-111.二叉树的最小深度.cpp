///*
//最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
//
//说明：叶子节点是指没有子节点的节点。
//
// 
//
//示例 1：
//
//
//输入：root = [3,9,20,null,null,15,7]
//输出：2
//示例 2：
//
//输入：root = [2,null,3,null,4,null,5,null,6]
//输出：5
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/minimum-depth-of-binary-tree
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
//class Solution {
//public:
//    int getDepth(TreeNode *root) {
//        if (root == nullptr) {
//            return 0;
//        }
//
//        int leftDepth = getDepth(root->left);
//        int rightDepth = getDepth(root->right);
//
//        if (root->left == nullptr && root->right != nullptr) {
//            return 1 + rightDepth;
//        }
//        if (root->right == nullptr && root->left != nullptr) {
//            return 1 + leftDepth;
//        }
//
//        int depth = 1 + min(leftDepth, rightDepth);
//        return depth;
//    }
//
//    int minDepth(TreeNode* root) {
//        return getDepth(root);
//    }
//};
//
//
////class Solution {
////public:
////    int minDepth(TreeNode* root) {
////        int depth = 0;
////        queue<TreeNode *> que;
////
////        if (root == nullptr) {
////            return depth;
////        }
////        que.push(root);
////
////        while (!que.empty()) {
////            int size = que.size();
////
////            depth++;
////            for (int i = 0; i < size; i++) {
////                TreeNode *node = que.front();
////                que.pop();
////
////                if (node->left != nullptr) {
////                    que.push(node->left);
////                }
////                if (node->right != nullptr) {
////                    que.push(node->right);
////                }
////                if (node->left == nullptr && node->right == nullptr) {
////                    return depth;
////                }
////            }
////        }
////        return depth;
////    }
////};
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
//    cout << s.minDepth(tree) <<endl;
//
//    return 0;
//}
