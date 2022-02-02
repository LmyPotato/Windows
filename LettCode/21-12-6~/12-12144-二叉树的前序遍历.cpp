///*
//给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
//
// 
//
//示例 1：
//
//
//输入：root = [1,null,2,3]
//输出：[1,2,3]
//示例 2：
//
//输入：root = []
//输出：[]
//示例 3：
//
//输入：root = [1]
//输出：[1]
//示例 4：
//
//
//输入：root = [1,2]
//输出：[1,2]
//示例 5：
//
//
//输入：root = [1,null,2]
//输出：[1,2]
// 
//
//提示：
//
//树中节点数目在范围 [0, 100] 内
//-100 <= Node.val <= 100
// 
//
//进阶：递归算法很简单，你可以通过迭代算法完成吗？
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/binary-tree-preorder-traversal
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
///*
//给定一个二叉树，判断它是否是高度平衡的二叉树。
//
//本题中，一棵高度平衡二叉树定义为：
//
//一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 。
//
// 
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
//提示：
//
//树中的节点数在范围 [0, 5000] 内
//-104 <= Node.val <= 104
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/balanced-binary-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//
////Definition for a binary tree node.
// struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
////class Solution {
////public:
////    void preorder(TreeNode *root,vector<int>&v){
////        if(root){
////            v.push_back(root->val);
////            preorder(root->left,v);
////            preorder(root->right,v);
////        }
////
////    }
////    vector<int> preorderTraversal(TreeNode* root) {
////        vector<int>data;
////
////        preorder(root,data);
////        return data;
////    }
////};
//
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> res;
//        if (root == nullptr) {
//            return res;
//        }
//
//        stack<TreeNode*> stk;
//        TreeNode* node = root;
//        while (!stk.empty() || node != nullptr) {
//            while (node != nullptr) {
//                res.emplace_back(node->val);
//                stk.emplace(node);
//                node = node->left;
//            }
//            node = stk.top();
//            stk.pop();
//            node = node->right;
//        }
//        return res;
//    }
//};
//
//
//
//void PreOrderTraverse(TreeNode* T)
//{
//    if(T)
//    {
//        cout<<T->val<<" ";
//        PreOrderTraverse(T->left);
//
//        PreOrderTraverse(T->right);
//    }
//}
//
//void creatBiTree(TreeNode **T)
//{
//    int ch;
//    cin>>ch;
//    if(ch==-1){
//        *T=NULL;
//    }
//    else
//    {
//        *T=new TreeNode;
//
//        (*T)->val=ch;
//        creatBiTree(&(*T)->left);
//        creatBiTree(&(*T)->right);
//    }
//}
//
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
////1 -1 2 3 -1 -1 -1
//
//int main()
//{
//    vector<int>temp;
//    TreeNode *tree;
//    Solution s;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//
//    cout<<"\n-----------"<<endl;
//
//    temp=s.preorderTraversal(tree);
//    printVector(temp);
//
//    return 0;
//}
//
//
//
