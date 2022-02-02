///*
//给定一个二叉树的 根节点 root，请找出该二叉树的 最底层 最左边 节点的值。
//
//假设二叉树中至少有一个节点。
//
// 
//
//示例 1:
//
//
//
//输入: root = [2,1,3]
//输出: 1
//示例 2:
//
//
//
//输入: [1,2,3,4,null,5,6,null,null,7]
//输出: 7
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/find-bottom-left-tree-value
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <queue>
//#include "myfunction.h"
//
//using namespace std;
//
////struct TreeNode
////{
////    int val;
////    TreeNode *left;
////    TreeNode *right;
////    TreeNode() : val(0), left(nullptr), right(nullptr) {}
////    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
////    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
////};
//
////class Solution {
////public:
////    int maxLen = INT_MIN;
////    int maxLeftValue;
////    void traversal(TreeNode *root, int leftLen) {
////        if (root->left == nullptr && root->right == nullptr) {
////            if (leftLen > maxLen) {
////                maxLen = leftLen;
////                maxLeftValue = root->val;
////            }
////            return;
////        }
////        if (root->left != nullptr) {
////            leftLen++;
////            traversal(root->left, leftLen);
////            leftLen--;
////        }
////        if (root->right != nullptr) {
////            leftLen++;
////            traversal(root->right,leftLen);
////            leftLen--;
////        }
////        return;
////    }
////    int findBottomLeftValue(TreeNode* root) {
////        traversal(root, 0);
////        return maxLeftValue;
////    }
////};
//class Solution {
//public:
//    int findBottomLeftValue(TreeNode* root) {
//        queue<TreeNode *> que;
//        if (root == nullptr) {
//            return 0;
//        }
//
//        int result = 0;
//        que.push(root);
//        while (!que.empty()) {
//            int size = que.size();
//
//            for (int i = 0; i < size; i++) {
//                TreeNode *node = que.front();
//                que.pop();
//
//                if (i == 0) {
//                    result = node->val;
//                }
//
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
//void PreOrderTraverse(TreeNode *T)
//{
//    if (T)
//    {
//        PreOrderTraverse(T->left);
//        cout << T->val << " ";
//        PreOrderTraverse(T->right);
//    }
//}
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
//// 1 2 4 -1 -1 -1 3 5 -1 -1 -1
//// 2 -1 3 -1 4 -1 5 -1 6 -1 -1
//// 1 2 -1 -1 3 -1 -1
//// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//int main()
//{
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//    levelOrderTraverse(tree);
//    cout<<s.findBottomLeftValue(tree)<<endl;
//
//    return 0;
//}
//
