///*
//给定一个二叉树，判断它是否是高度平衡的二叉树。
//
//本题中，一棵高度平衡二叉树定义为：
//
//一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 。
//
//示例 1：
//输入：root = [3,9,20,null,null,15,7]
//输出：true
//
//示例 2：
//输入：root = [1,2,2,3,3,null,null,4,4]
//输出：false
//
//示例 3：
//输入：root = []
//输出：true
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/balanced-binary-tree
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
//        int leftHeight = getDepth(root->left);
//        int rightHeight = getDepth(root->right);
//        int result = 0;
//
//        if (leftHeight == -1) {
//            return -1;
//        }
//        if (rightHeight == -1) {
//            return -1;
//        }
//
//        if (abs(leftHeight - rightHeight) > 1) {
//            return -1;
//        }
//        else {
//            result = max(leftHeight, rightHeight) + 1;
//        }
//        return result;
//    }
//    bool isBalanced(TreeNode* root) {
//        return getDepth(root) != -1;
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
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    cout << s.isBalanced(tree) <<endl;
//
//    return 0;
//}
//
