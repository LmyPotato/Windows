///*
//给定一棵二叉树的根节点 root ，请找出该二叉树中每一层的最大值。
//
// 
//
//示例1：
//
//输入: root = [1,3,2,5,3,null,9]
//输出: [1,3,9]
//解释:
//          1
//         / \
//        3   2
//       / \   \
//      5   3   9
//示例2：
//
//输入: root = [1,2,3]
//输出: [1,3]
//解释:
//          1
//         / \
//        2   3
//示例3：
//
//输入: root = [1]
//输出: [1]
//示例4：
//
//输入: root = [1,null,2]
//输出: [1,2]
//解释:
//           1
//            \
//             2
//示例5：
//
//输入: root = []
//输出: []
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/find-largest-value-in-each-tree-row
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
//    vector<int> largestValues(TreeNode* root) {
//        vector<int> result;
//        queue<TreeNode *> que;
//
//        if (root == nullptr) {
//            return {};
//        }
//        que.push(root);
//
//        while (!que.empty()) {
//            int size = que.size();
//            int maxValue = INT_MIN;
//
//            for (int i = 0; i < size; i++) {
//                TreeNode *node = que.front();
//                que.pop();
//
//                maxValue = max(maxValue, node->val);
//
//                if (node->left !=nullptr) {
//                    que.push(node->left);
//                }
//                if (node->right != nullptr) {
//                    que.push(node->right);
//                }
//            }
//            result.push_back(maxValue);
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
//    out = s.largestValues(tree);
//    printSomeStl(out);
//
//    return 0;
//}
//
