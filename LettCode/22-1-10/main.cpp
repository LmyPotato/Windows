/*
给你二叉树的根节点 root ，返回它节点值的 前序 遍历。

示例 1：
输入：root = [1,null,2,3]
输出：[1,2,3]

示例 2：
输入：root = []
输出：[]

示例 3：
输入：root = [1]
输出：[1]

示例 4：
输入：root = [1,2]
输出：[1,2]

示例 5：
输入：root = [1,null,2]
输出：[1,2]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-tree-preorder-traversal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include<iostream>
#include<vector>
#include <stack>
#include "myfunction.h"

using namespace std;

//Definition for a binary tree node.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result = {};
        stack<TreeNode*>  st;

        if (root == nullptr) {
            return {};
        }

        st.push(root);

        while (!st.empty()) {
            TreeNode *tmp = st.top();
            st.pop();

            result.push_back(tmp->val);

            if (tmp->right != nullptr) {
                st.push(tmp->right);
            }
            if (tmp->left != nullptr) {
                st.push(tmp->left);
            }
        }

        return result;
    }
};

void PreOrderTraverse(TreeNode* T)
{
    if(T)
    {
        cout<<T->val<<" ";
        PreOrderTraverse(T->left);
        PreOrderTraverse(T->right);
    }
}

void creatBiTree(TreeNode **T)
{
    int ch;
    cin>>ch;
    if (ch==-1){
        *T=NULL;
    }
    else
    {
        *T=new TreeNode;

        (*T)->val=ch;
        creatBiTree(&(*T)->left);
        creatBiTree(&(*T)->right);
    }
}

//2 -1 3 -1 4 -1 5 -1 6 -1 -1
//1 2 -1 -1 3 -1 -1
//1 2 4 -1 -1 -1 3 -1 5 -1 -1
int main()
{
//    vector<int> out = {};
//    Solution s;
//
//    TreeNode *tree;
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    printf("\n-----\n");
//    out = s.preorderTraversal(tree);
//    printSomeStl(out);

    cout<<calulateMax(1,2)<<endl;

    return 0;

}

