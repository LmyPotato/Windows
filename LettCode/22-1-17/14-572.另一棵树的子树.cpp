///*
//给你两棵二叉树 root 和 subRoot 。检验 root 中是否包含和 subRoot 具有相同结构和节点值的子树。如果存在，返回 true ；否则，返回 false 。
//
//二叉树 tree 的一棵子树包括 tree 的某个节点和这个节点的所有后代节点。tree 也可以看做它自身的一棵子树。
//
// 
//
//示例 1：
//
//
//输入：root = [3,4,5,1,2], subRoot = [4,1,2]
//输出：true
//示例 2：
//
//
//输入：root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
//输出：false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/subtree-of-another-tree
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
//class Solution {
//public:
//   bool isSameTree(TreeNode* p, TreeNode* q) {
//       if (p == nullptr && q != nullptr) {
//           return false;
//       }
//       else if (p != nullptr && q == nullptr) {
//           return false;
//       }
//       else if (p == nullptr && q == nullptr) {
//           return true;
//       }
//       else if (p->val != q->val) {
//           return false;
//       }
//
//       bool outside = isSameTree(p->left, q->left);
//       bool inside = isSameTree(p->right, q->right);
//
//       return (outside && inside);
//   }
//    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//        queue<TreeNode *> que;
//
//        if (root == nullptr && subRoot != nullptr) {
//            return false;
//        }
//        else if (root != nullptr && subRoot == nullptr) {
//            return false;
//        }
//        else if (root == nullptr && subRoot == nullptr) {
//            return true;
//        }
//
//        que.push(root);
//
//        while (!que.empty()) {
//            int size = que.size();
//            bool ret = false;
//            int flag = -1;
//
//            for (int i = 0; i < size; i++) {
//                TreeNode *node = que.front();
//                que.pop();
//
//                ret = isSameTree(node, subRoot);
//                if (ret == true) {
//                    flag = 1;
//                    return true;
//                }
//
//                if (node->left != nullptr) {
//                    que.push(node->left);
//                }
//                if (node->right != nullptr) {
//                    que.push(node->right);
//                }
//            }
//            if (flag == 1) {
//                return true;
//            }
//        }
//        return false;
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
//
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
//
