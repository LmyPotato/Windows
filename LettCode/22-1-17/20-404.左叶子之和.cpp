///*
//计算给定二叉树的所有左叶子之和。
//
//示例：
//---01
//--/---\
//-02---03
//
//-----10
//----/---\
//---12---13
//--/-\---/-\
//-14-15-16-17
//
//    3
//   / \
//  9  20
//    /  \
//   15   7
//
//在这个二叉树中，有两个左叶子，分别是 9 和 15，所以返回 24
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/sum-of-left-leaves
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<stack>
//#include "myfunction.h"
//
//using namespace std;
//
//class Solution {
//public:
//    int sumOfLeftLeaves(TreeNode* root) {
//        if (root == nullptr) {
//            return 0;
//        }
//        int result = 0;
//        stack<TreeNode *> st;
//        st.push(root);
//
//        while (!st.empty()) {
//            TreeNode *node = st.top();
//            st.pop();
//
//            if (node->left != nullptr
//                && node->left->left == nullptr
//                && node->left->right == nullptr) {
//                result += node->left->val;
//            }
//
//            if (node->left != nullptr) {
//                st.push(node->left);
//            }
//            if (node->right != nullptr) {
//                st.push(node->right);
//            }
//        }
//        return result;
//    }
//};
//
////class Solution {
////public:
////    int sumOfLeftLeaves(TreeNode* root) {
////        if (root == nullptr) {
////            return 0;
////        }
////
////        int leftValue = sumOfLeftLeaves(root->left);
////        int rightValue = sumOfLeftLeaves(root->right);
////
////        int midValue = 0;
////
////        if (root->left != nullptr
////            && root->left->left == nullptr
////            && root->left->right == nullptr) {
////            midValue = root->left->val;
////        }
////
////        int sum = midValue + leftValue + rightValue;
////        return sum;
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
//        cout << T->val << " ";
//        PreOrderTraverse(T->left);
//        PreOrderTraverse(T->right);
//    }
//}
//
///*
//-1  2^1-1
//2-3
//
//---1
//-2---1
//4-3-2-1
//
//-------1------- 2^3 - 1
//---2-------1--- 2^2 - 1 2^3
//-4---3---2---1- 2^1 - 1
//8-7-6-5-4-3-2-1 2^0 - 1
//
//---------------1--------------- 2^4 - 1
//-------2---------------1        2^3 - 1   2^4 - 1
//---4-------3-------2-------1    2^2 - 1   2^3 - 1
//-8---7---6---5---4---3---2---1  2^1 - 1   2^2 - 1
//0-1-2-3-4-5-6-7-8-9-1-2-3-4-5-6 2^0 - 1   2^1 - 1
//*/
//// 1 2 3 -1 -1 -1 4 -1 -1
//// 1 2 4 -1 -1 -1 3 5 -1 -1 -1
//// 2 -1 3 -1 4 -1 5 -1 6 -1 -1
//// 1 2 -1 -1 3 -1 -1
//// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
///*
//1 1 1 1 -1 -1 2 -1 -1 2 3 -1 -1 4 -1 -1
//2 3 5 -1 -1 6 -1 -1 4 7 -1 -1 8 -1 -1
//*/
//int main()
//{
//    Solution s;
//    TreeNode *tree;
//    vector<vector<int>>v;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//
//    cout << s.sumOfLeftLeaves(tree)<<endl;
//    levelOrderTraverse(tree);
//
//    return 0;
//}
