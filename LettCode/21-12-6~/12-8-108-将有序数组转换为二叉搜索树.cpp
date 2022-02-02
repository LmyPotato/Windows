///*
//给你一个整数数组 nums ，其中元素已经按 升序 排列，请你将其转换为一棵 高度平衡 二叉搜索树。
//
//高度平衡 二叉树是一棵满足「每个节点的左右两个子树的高度差的绝对值不超过 1 」的二叉树。
//
// 
//
//示例 1：
//
//输入：nums = [-10,-3,0,5,9]
//输出：[0,-3,9,-10,null,5]
//解释：[0,-10,5,null,-3,null,9] 也将被视为正确答案：
//
//示例 2：
//输入：nums = [1,3]
//输出：[3,1]
//解释：[1,3] 和 [3,1] 都是高度平衡二叉搜索树。
// 
//
//提示：
//1 <= nums.length <= 104
//-104 <= nums[i] <= 104
//nums 按 严格递增 顺序排列
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
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
//    TreeNode* helper(vector<int>&nums,int left,int right)
//    {
//        if(left>right){
//            return NULL;
//        }
//
//        int mid=(left+right)>>1;
//
//        TreeNode* root=new TreeNode(nums[mid]);
//
//        root->left=helper(nums,left,mid-1);
//        root->right=helper(nums,mid+1,right);
//
//        return root;
//    }
//
//    TreeNode* sortedArrayToBST(vector<int>& nums) {
//        TreeNode* root=new TreeNode();
//
//        root=helper(nums,0,nums.size()-1);
//
//        return root;
//    }
//};
//
//void PreOrderTraverse(TreeNode* T)
//{
//    if(T)
//    {
//        cout<<T->val<<" ";
//        PreOrderTraverse(T->left);
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
//
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
////1-1 2 3 -1 -1 -1
//int main()
//{
//    Solution s;
//    TreeNode *tree;
//    vector<int>nums={-10,-3,0,5,9};
//
//    tree=s.sortedArrayToBST(nums);
//
//    PreOrderTraverse(tree);
//
//    return 0;
//}
//
