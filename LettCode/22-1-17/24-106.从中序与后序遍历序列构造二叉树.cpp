///*
//根据一棵树的中序遍历与后序遍历构造二叉树。
//
//注意:
//你可以假设树中没有重复的元素。
//
//例如，给出
//
//中序遍历 inorder = [9,3,15,20,7]
//后序遍历 postorder = [9,15,7,20,3]
//返回如下的二叉树：
//
//    3
//   / \
//  9  20
//    /  \
//   15   7
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <iostream>
//#include <vector>
//
//#include "myfunction.h"
//
//using namespace std;
//
////class Solution {
////    public:
////    TreeNode *traversal(vector<int> &inorder, vector<int> &posorder)
////    {
////        if (posorder.size() == 0)
////        {
////            return nullptr;
////        }
////
////        int rootValue = posorder[posorder.size() - 1];
////        TreeNode *root = new TreeNode(rootValue);
////
////        if (posorder.size() == 1)
////        {
////            return root;
////        }
////
////        int delimiterIndex;
////        for (delimiterIndex = 0; delimiterIndex < inorder.size(); delimiterIndex++)
////        {
////            if (inorder[delimiterIndex] == rootValue)
////            {
////                break;
////            }
////        }
////
////        vector<int> leftInorder(inorder.begin(), inorder.begin() + delimiterIndex);
////        vector<int> rightInorder(inorder.begin() + delimiterIndex + 1, inorder.end());
////
////        posorder.resize(posorder.size() - 1);
////
////        vector<int> leftPostorder(posorder.begin(), posorder.begin() + leftInorder.size());
////        vector<int> rightPostorder(posorder.begin() + leftInorder.size(), posorder.end());
////
////        root->left = traversal(leftInorder, leftPostorder);
////        root->right = traversal(rightInorder, rightPostorder);
////
////        return root;
////    }
////
////    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
////    {
////        if (inorder.size() == 0 || postorder.size() == 0)
////        {
////            return nullptr;
////        }
////        return traversal(inorder, postorder);
////    }
////};
//
//class Solution {
//private:
//    // 中序区间：[inorderBegin, inorderEnd)，后序区间[postorderBegin, postorderEnd)
//    TreeNode* traversal (vector<int>& inorder, int inorderBegin, int inorderEnd, vector<int>& postorder, int postorderBegin, int postorderEnd) {
//        if (postorderBegin == postorderEnd) return NULL;
//
//        int rootValue = postorder[postorderEnd - 1];
//        TreeNode* root = new TreeNode(rootValue);
//
//        if (postorderEnd - postorderBegin == 1) return root;
//
//        int delimiterIndex;
//        for (delimiterIndex = inorderBegin; delimiterIndex < inorderEnd; delimiterIndex++) {
//            if (inorder[delimiterIndex] == rootValue) break;
//        }
//        // 切割中序数组
//        // 左中序区间，左闭右开[leftInorderBegin, leftInorderEnd)
//        int leftInorderBegin = inorderBegin;
//        int leftInorderEnd = delimiterIndex;
//        // 右中序区间，左闭右开[rightInorderBegin, rightInorderEnd)
//        int rightInorderBegin = delimiterIndex + 1;
//        int rightInorderEnd = inorderEnd;
//
//        // 切割后序数组
//        // 左后序区间，左闭右开[leftPostorderBegin, leftPostorderEnd)
//        int leftPostorderBegin =  postorderBegin;
//        int leftPostorderEnd = postorderBegin + delimiterIndex - inorderBegin; // 终止位置是 需要加上 中序区间的大小size
//        // 右后序区间，左闭右开[rightPostorderBegin, rightPostorderEnd)
//        int rightPostorderBegin = postorderBegin + (delimiterIndex - inorderBegin);
//        int rightPostorderEnd = postorderEnd - 1; // 排除最后一个元素，已经作为节点了
//
//        root->left = traversal(inorder, leftInorderBegin, leftInorderEnd,  postorder, leftPostorderBegin, leftPostorderEnd);
//        root->right = traversal(inorder, rightInorderBegin, rightInorderEnd, postorder, rightPostorderBegin, rightPostorderEnd);
//
//        return root;
//    }
//public:
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        if (inorder.size() == 0 || postorder.size() == 0) return NULL;
//        // 左闭右开的原则
//        return traversal(inorder, 0, inorder.size(), postorder, 0, postorder.size());
//    }
//};
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
//    TreeNode *root;
//    Solution s;
//    vector<int> num1 = {9,3,15,20,7};
//    vector<int> num2 = {9,15,7,20,3};
//
//    root = s.buildTree(num1, num2);
//
//    PreOrderTraverse(root);
//    cout<<endl;
//    levelOrderTraverse(root);
//
//    return 0;
//}
