///*
//给定一个二叉树的根节点 root ，返回它的 中序 遍历。
//
// 
//
//示例 1：
//
//
//输入：root = [1,null,2,3]
//输出：[1,3,2]
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
//输出：[2,1]
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
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/binary-tree-inorder-traversal
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
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
//class Solution {
//public:
//    void inorder(TreeNode* root, vector<int>& res) {
//        if (!root) {
//            return;
//        }
//        inorder(root->left, res);
//        res.push_back(root->val);
//        inorder(root->right, res);
//    }
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> res;
//        inorder(root, res);
//        return res;
//    }
//};
//
//void PreOrderTraverse(TreeNode* T)
//{
//    if(T)
//    {
//        PreOrderTraverse(T->left);
//        cout<<T->val<<" ";
//        PreOrderTraverse(T->right);
//    }
//}
//
//
//void creatBiTree(TreeNode **T)
//{
//    int ch;
//    cin>>ch;
//    if(ch==-1)
//        *T=NULL;
//    else
//    {
//        *T=new TreeNode;
//
//        (*T)->val=ch;
//        creatBiTree(&(*T)->left);
//        creatBiTree(&(*T)->right);
//    }
//}
////
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//
//int test(TreeNode* root)
//{
//    vector<int>res;
//    int ret=-1;
//    stack<TreeNode*>s;
//    TreeNode* temp=new TreeNode;
//
//    while(root!=NULL||!s.empty()){
//        if(root!=NULL){
//            s.push(root);
//            root=root->left;
//        }
//        else{
//            temp=s.top();
//            s.pop();
//            ret=temp->val;
//            res.push_back(ret);
//            root=temp->right;
//        }
//    }
//}
////1-1 2 3 -1 -1 -1
//int main()
//{
//    vector<int>res;
//    Solution s;
//    TreeNode *tree;
////    vector<int>v_tree={1,NULL,2,3};
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//
//    res=s.inorderTraversal(tree);
//
//
//    return 0;
//}
//
