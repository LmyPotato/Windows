///*
//给定一棵树的前序遍历 preorder 与中序遍历  inorder。请构造二叉树并返回其根节点。
//
// 
//
//示例 1:
//
//
//Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
//Output: [3,9,20,null,null,15,7]
//示例 2:
//
//Input: preorder = [-1], inorder = [-1]
//Output: [-1]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//
//#include "myfunction.h"
//
//using namespace std;
//
//class Solution {
//public:
//    TreeNode *traversal(
//        vector<int> &preorder,int preorderBegin, int preorderEnd,
//        vector<int> &inorder, int inorderBegin, int inorderEnd) {
//
//        if (preorderBegin == preorderEnd) {
//            return nullptr;
//        }
//
//        int rootValue = preorder[preorderBegin];
//        TreeNode *root = new TreeNode(rootValue);
//
//        if (preorderBegin - preorderEnd == 0) {
//            return root;
//        }
//
//        int delimiter;
//        for (delimiter = 0; delimiter < inorderEnd; delimiter++) {
//            if (inorder[delimiter] == rootValue) {
//                break;
//            }
//        }
//
//        int leftInorderBegin = inorderBegin;
//        int leftInorderEnd = delimiter;
//
//        int rightInorderBegin = leftInorderEnd + 1;
//        int rightInorderEnd = inorderEnd;
//
//        int leftPreorderBegin = preorderBegin + 1;
//        int leftPreorderEnd = preorderBegin + 1 + delimiter - inorderBegin;
//
//        int righPreorderBegin = preorderBegin + 1 + delimiter - inorderBegin;
//        int righPreorderEnd = preorderEnd;
//
//        root->left = traversal(
//            preorder, leftPreorderBegin, leftPreorderEnd,
//            inorder, leftInorderBegin, leftInorderEnd);
//
//        root->right = traversal(
//            preorder, righPreorderBegin, righPreorderEnd,
//            inorder, rightInorderBegin, rightInorderEnd
//            );
//
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        if (preorder.size() == 0 || inorder.size() == 0) {
//            return nullptr;
//        }
//        return traversal(preorder,0, preorder.size(), inorder, 0, inorder.size());
//    }
//};
//
////class Solution {
////private:
////        TreeNode* traversal (vector<int>& inorder, int inorderBegin, int inorderEnd, vector<int>& preorder, int preorderBegin, int preorderEnd) {
////        if (preorderBegin == preorderEnd) return NULL;
////
////        int rootValue = preorder[preorderBegin]; // 注意用preorderBegin 不要用0
////        TreeNode* root = new TreeNode(rootValue);
////
////        if (preorderEnd - preorderBegin == 1) return root;
////
////        int delimiterIndex;
////        for (delimiterIndex = inorderBegin; delimiterIndex < inorderEnd; delimiterIndex++) {
////            if (inorder[delimiterIndex] == rootValue) break;
////        }
////        // 切割中序数组
////        // 中序左区间，左闭右开[leftInorderBegin, leftInorderEnd)
////        int leftInorderBegin = inorderBegin;
////        int leftInorderEnd = delimiterIndex;
////        // 中序右区间，左闭右开[rightInorderBegin, rightInorderEnd)
////        int rightInorderBegin = delimiterIndex + 1;
////        int rightInorderEnd = inorderEnd;
////
////        // 切割前序数组
////        // 前序左区间，左闭右开[leftPreorderBegin, leftPreorderEnd)
////        int leftPreorderBegin =  preorderBegin + 1;
////        int leftPreorderEnd = preorderBegin + 1 + delimiterIndex - inorderBegin; // 终止位置是起始位置加上中序左区间的大小size
////        // 前序右区间, 左闭右开[rightPreorderBegin, rightPreorderEnd)
////        int rightPreorderBegin = preorderBegin + 1 + (delimiterIndex - inorderBegin);
////        int rightPreorderEnd = preorderEnd;
////
////        cout << "----------" << endl;
////        cout << "leftInorder :";
////        for (int i = leftInorderBegin; i < leftInorderEnd; i++) {
////            cout << inorder[i] << " ";
////        }
////        cout << endl;
////
////        cout << "rightInorder :";
////        for (int i = rightInorderBegin; i < rightInorderEnd; i++) {
////            cout << inorder[i] << " ";
////        }
////        cout << endl;
////
////        cout << "leftPreorder :";
////        for (int i = leftPreorderBegin; i < leftPreorderEnd; i++) {
////            cout << preorder[i] << " ";
////        }
////        cout << endl;
////
////        cout << "rightPreorder :";
////        for (int i = rightPreorderBegin; i < rightPreorderEnd; i++) {
////            cout << preorder[i] << " ";
////        }
////        cout << endl;
////
////
////        root->left = traversal(inorder, leftInorderBegin, leftInorderEnd,  preorder, leftPreorderBegin, leftPreorderEnd);
////        root->right = traversal(inorder, rightInorderBegin, rightInorderEnd, preorder, rightPreorderBegin, rightPreorderEnd);
////
////        return root;
////    }
////
////public:
////    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
////        if (inorder.size() == 0 || preorder.size() == 0) return NULL;
////        return traversal(inorder, 0, inorder.size(), preorder, 0, preorder.size());
////
////    }
////};
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
//    vector<int> num1 = {3,9,20,15,7};
//    vector<int> num2 = {9,3,15,20,7};
//
//    root = s.buildTree(num1, num2);
//
//    PreOrderTraverse(root);
//    cout<<endl;
//    levelOrderTraverse(root);
//
//    return 0;
//}
