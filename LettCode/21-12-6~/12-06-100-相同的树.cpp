///*
//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
//
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//
//
//示例 1：
//输入：p = [1,2,3], q = [1,2,3]
//输出：true
//
//示例 2：
//输入：p = [1,2], q = [1,null,2]
//输出：false
//
//示例 3：
//输入：p = [1,2,1], q = [1,1,2]
//输出：false
// 
//提示：
//
//两棵树上的节点数目都在范围 [0, 100] 内
//-104 <= Node.val <= 104
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/same-tree
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
//class Solution {
//public:
//    bool isSameTree(TreeNode* p, TreeNode* q);
//};
//
////
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//bool isSameTree(TreeNode* p, TreeNode* q) {
//    if (p == nullptr && q == nullptr) {
//        return true;
//    } else if (p == nullptr || q == nullptr) {
//        return false;
//    } else if (p->val != q->val) {
//        return false;
//    } else {
//        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//    }
//}
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
//
//int main()
//{
//    vector<int>res;
//    Solution s;
//
//
//
//
//
//    return 0;
//}
//
