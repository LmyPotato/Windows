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
//#include<math.h>
//#include<vector>
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
//    int height(TreeNode* root) {
//        if (root == NULL) {
//            return 0;
//        }
//        else{
//            return max(height(root->left), height(root->right)) + 1;
//        }
//    }
//
//    bool isBalanced(TreeNode* root) {
//        if (root == NULL) {
//            return true;
//        }
//        else{
//            return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//        }
//    }
//};
//
//void PreOrderTraverse(TreeNode* T)
//{
//    if(T)
//    {
//
//        PreOrderTraverse(T->left);
//        cout<<T->val<<" ";
//        PreOrderTraverse(T->right);
//    }
//}
//
//int i=0;
//void creatBiTree(TreeNode **T)
//{
////    int ch;
////    cin>>ch;
//    int ch[]={3,9,-1,-1,20,15,-1,-1,7,-1,-1};
//    if(ch[i]==-1){
//        *T=NULL;
//    }
//    else
//    {
//        *T=new TreeNode;
//
//        (*T)->val=ch[i];
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
////1 2 3 4 -1 -1 4 -1 -1 3 -1 -1 2 -1 -1
////3 9 -1 -1 20 15 -1 -1 7 -1 -1
//int main()
//{
//    int ret=-1;
//    Solution s;
//    TreeNode *tree;
////    vector<int>v={3,9,-1,-1,20,15,-1,-1,7,-1,-1};
//
////    for(auto it=v.begin();it!=v.end();it++){
////        creatBiTree(&tree,*it);
////    }
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//
//    ret=s.isBalanced(tree);
//
//    cout<<"\nret= "<<ret<<endl;
//
//
//    return 0;
//}
//
