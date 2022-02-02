///*
//给你一个二叉树的根节点 root ，按 任意顺序 ，返回所有从根节点到叶子节点的路径。
//
//叶子节点 是指没有子节点的节点。
//
// 
//示例 1：
//输入：root = [1,2,3,null,5]
//输出：["1->2->5","1->3"]
//
//示例 2：
//输入：root = [1]
//输出：["1"]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/binary-tree-paths
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
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
//#include <stack>
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
//    void traversal(TreeNode *cur, vector<int> &path, vector<string> &result) {
//        path.push_back(cur->val);
//        if (cur->left == nullptr && cur->right == nullptr) {
//            string sPath = "";
//
//            for (int i = 0; i < path.size() - 1; i++) {
//                sPath += to_string(path[i]);
//                sPath += "->";
//            }
//            sPath += to_string(path[path.size() - 1]);
//            result.push_back(sPath);
//            return;
//        }
//
//        if (cur->left != nullptr) {
//            traversal(cur->left, path, result);
//            path.pop_back();
//        }
//        if (cur->right != nullptr) {
//            traversal(cur->right, path, result);
//            path.pop_back();
//        }
//    }
//    vector<string> binaryTreePaths(TreeNode* root) {
//        vector<string> result;
//        vector<int> path;
//
//        if (root == nullptr) {
//            return result;
//        }
//        traversal(root, path, result);
//        return result;
//    }
//};
//
//class Solution {
//public:
//    vector<string> binaryTreePaths(TreeNode* root) {
//        vector<string> result;
//        stack<TreeNode *> st;
//        stack<string> stPath;
//
//        if (root == nullptr) {
//            return result;
//        }
//        st.push(root);
//        stPath.push(to_string(root->val));
//        while (!st.empty()) {
//            TreeNode *node = st.top();
//            st.pop();
//
//            string path = stPath.top();
//            stPath.pop();
//
//            if (node->left == nullptr && node->right == nullptr) {
//                result.push_back(path);
//            }
//
//            if (node->right != nullptr) {
//                st.push(node->right);
//                stPath.push(path + "->" + to_string(node->right->val));
//            }
//            if (node->left != nullptr) {
//                st.push(node->left);
//                stPath.push(path + "->" + to_string(node->left->val));
//            }
//        }
//        return result;
//    }
//};
//
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
//    vector<string> str;
//    str = s.binaryTreePaths(tree);
//
//    printSomeStl(str);
//
//    return 0;
//}
//
