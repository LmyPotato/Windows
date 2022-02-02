///*
//给定一个二叉树，找出其最小深度。
//
//最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
//
//说明：叶子节点是指没有子节点的节点。
//
//
//示例 1：
//输入：root = [3,9,20,null,null,15,7]
//输出：2
//
//示例 2：
//输入：root = [2,null,3,null,4,null,5,null,6]
//输出：5
// 
//提示：
//
//树中节点数的范围在 [0, 105] 内
//-1000 <= Node.val <= 1000
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/minimum-depth-of-binary-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<math.h>
//#include<vector>
//#include<queue>
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
//
////    int minDepth(TreeNode* root) {
////        if(root==nullptr){
////            ret  urn 0;
////        }
////        if(root->left==nullptr&&root->right==nullptr){
////            return 1;
////        }
////        int min_depth=INT_MAX;
////        if(root->left!=nullptr){
////
////            min_depth=min(minDepth(root->left),min_depth);
////        }
////        if(root->right!=nullptr){
////
////            min_depth=min(minDepth(root->right),min_depth);
////        }
////        return min_depth+1;
////    }
//        int minDepth(TreeNode *root) {
//        if (root == nullptr) {
//            return 0;
//        }
//
//        queue<pair<TreeNode *, int> > que;
//        que.emplace(root, 1);
//        while (!que.empty()) {
//            TreeNode *node = que.front().first;
//            int depth = que.front().second;
//            que.pop();
//            if (node->left == nullptr && node->right == nullptr) {
//                return depth;
//            }
//            if (node->left != nullptr) {
//                que.emplace(node->left, depth + 1);
//            }
//            if (node->right != nullptr) {
//                que.emplace(node->right, depth + 1);
//            }
//        }
//
//        return 0;
//    }
//};
//
//int Depth(TreeNode *root)
//{
//    if (root == NULL) {
//        return 0;
//    }
//    else{
//        return max(Depth(root->left), Depth(root->right)) + 1;
//    }
//}
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
////2 -1 3 -1 4 -1 5 -1 6 -1 -1
////
//int main()
//{
//
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//    cout<<endl;
//    cout<<s.minDepth(tree)<<endl;
//
//
//    return 0;
//}
//
