/*
给定一个二叉树，返回它的 后序 遍历。

示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [3,2,1]
进阶: 递归算法很简单，你可以通过迭代算法完成吗？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-tree-postorder-traversal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

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
 

提示：

树中节点数目在范围 [0, 100] 内
-100 <= Node.val <= 100
 

进阶：递归算法很简单，你可以通过迭代算法完成吗？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-tree-preorder-traversal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
/*
给定一个二叉树，判断它是否是高度平衡的二叉树。

本题中，一棵高度平衡二叉树定义为：

一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 。

 

示例 1：
输入：root = [3,9,20,null,null,15,7]
输出：true

示例 2：
输入：root = [1,2,2,3,3,null,null,4,4]
输出：false

示例 3：
输入：root = []
输出：true
 
提示：

树中的节点数在范围 [0, 5000] 内
-104 <= Node.val <= 104

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/balanced-binary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include<iostream>
#include<vector>
#include<stack>

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
    void postorder(TreeNode *root,vector<int>&v){
        if(root){
            postorder(root->left,v);
            postorder(root->right,v);
            v.push_back(root->val);
        }

    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>data;

        postorder(root,data);
        return data;
    }
};


void PreOrderTraverse(TreeNode* T)
{
    if(T)
    {

        PreOrderTraverse(T->left);

        PreOrderTraverse(T->right);
        cout<<T->val<<" ";
    }
}

void creatBiTree(TreeNode **T)
{
    int ch;
    cin>>ch;
    if(ch==-1){
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

void printVector(vector<int>v)
{
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//1 -1 2 3 -1 -1 -1

int main()
{
    vector<int>temp;
    TreeNode *tree;
    Solution s;

    creatBiTree(&tree);
    PreOrderTraverse(tree);

    cout<<"\n-----------"<<endl;

    temp=s.postorderTraversal(tree);
    printVector(temp);

    return 0;
}



