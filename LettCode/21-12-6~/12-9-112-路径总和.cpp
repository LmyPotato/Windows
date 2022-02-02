///*
//给你二叉树的根节点 root 和一个表示目标和的整数 targetSum 。判断该树中是否存在 根节点到叶子节点 的路径，这条路径上所有节点值相加等于目标和 targetSum 。如果存在，返回 true ；否则，返回 false 。
//
//叶子节点 是指没有子节点的节点。
//
// 
//
//示例 1：
//输入：root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
//输出：true
//解释：等于目标和的根节点到叶节点路径如上图所示。
//
//示例 2：
//输入：root = [1,2,3], targetSum = 5
//输出：false
//解释：树中存在两条根节点到叶子节点的路径：
//(1 --> 2): 和为 3
//(1 --> 3): 和为 4
//不存在 sum = 5 的根节点到叶子节点的路径。
//
//示例 3：
//输入：root = [], targetSum = 0
//输出：false
//解释：由于树是空的，所以不存在根节点到叶子节点的路径。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/path-sum
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
////    bool traversal(TreeNode* cur, int count) {
////        if (!cur->left && !cur->right && count == 0) return true; // 遇到叶子节点，并且计数为0
////        if (!cur->left && !cur->right) return false; // 遇到叶子节点直接返回
////
////        if (cur->left) { // 左
////            count -= cur->left->val; // 递归，处理节点;
////            if (traversal(cur->left, count)) return true;
////            count += cur->left->val; // 回溯，撤销处理结果
////        }
////        if (cur->right) { // 右
////            count -= cur->right->val; // 递归，处理节点;
////            if (traversal(cur->right, count)) return true;
////            count += cur->right->val; // 回溯，撤销处理结果
////        }
////        return false;
////    }
////    bool hasPathSum(TreeNode* root, int sum) {
////        if (root == nullptr) return false;
////        return traversal(root, sum - root->val);
////    }
//    bool hasPathSum(TreeNode *root, int sum) {
//        if (root == nullptr) {
//            return false;
//        }
//        queue<TreeNode *> que_node;
//        queue<int> que_val;
//        que_node.push(root);
//        que_val.push(root->val);
//        while (!que_node.empty()) {
//            TreeNode *now = que_node.front();
//            int temp = que_val.front();
//            que_node.pop();
//            que_val.pop();
//            if (now->left == nullptr && now->right == nullptr) {
//                if (temp == sum) {
//                    return true;
//                }
//                continue;
//            }
//            if (now->left != nullptr) {
//                que_node.push(now->left);
//                que_val.push(now->left->val + temp);
//            }
//            if (now->right != nullptr) {
//                que_node.push(now->right);
//                que_val.push(now->right->val + temp);
//            }
//        }
//        return false;
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
////5,4,8,11,null,13,4,7,2,null,null,null,1
////1 2 -1 4 -1 -1 3 5 -1 -1 -1
//int main()
//{
//
//    Solution s;
//    TreeNode *tree;
//
//    creatBiTree(&tree);
//    PreOrderTraverse(tree);
//
//    cout<<s.hasPathSum(tree,7)<<endl;
//
//    return 0;
//}
//
//
