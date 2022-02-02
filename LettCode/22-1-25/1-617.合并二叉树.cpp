///*
//给你两棵二叉树： root1 和 root2 。
//
//想象一下，当你将其中一棵覆盖到另一棵之上时，两棵树上的一些节点将会重叠（而另一些不会）。你需要将这两棵树合并成一棵新二叉树。合并的规则是：如果两个节点重叠，那么将这两个节点的值相加作为合并后节点的新值；否则，不为 null 的节点将直接作为新二叉树的节点。
//
//返回合并后的二叉树。
//
//注意: 合并过程必须从两个树的根节点开始。
//
// 
//
//示例 1：
//
//
//输入：root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
//输出：[3,4,5,5,4,null,7]
//示例 2：
//
//输入：root1 = [1], root2 = [1,2]
//输出：[2,2]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/merge-two-binary-trees
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include "myfunction.h"
//
//
////class Solution {
////public:
////
////    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
////        if (root1 == nullptr) {
////            return root2;
////        }
////        if (root2 == nullptr) {
////            return root1;
////        }
////
////        root1->val = root1->val + root2->val;
////        root1->left = mergeTrees(root1->left, root2->left);
////        root1->right = mergeTrees(root1->right, root2->right);
////
////        return root1;
////    }
////};
//
//class Solution {
//public:
//
//    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//        queue<TreeNode *> que;
//
//        if (root1 == nullptr) {
//            return root1;
//        }
//        if (root2 == nullptr) {
//            return root2;
//        }
//
//        que.push(root1);
//        que.push(root2);
//
//        while (!que.empty()) {
//            TreeNode *node1 = que.front();
//            que.pop();
//
//            TreeNode *node2 = que.front();
//            que.pop();
//
//            node1->val = node1->val + node2->val;
//
//            if (node1->left != nullptr && node2->left != nullptr) {
//                que.push(node1->left);
//                que.push(node2->left);
//            }
//            if (node1->right != nullptr && node2->right != nullptr) {
//                que.push(node1->right);
//                que.push(node2->right);
//            }
//
//            if (node1->left == nullptr && node2->left !=nullptr) {
//                node1->left = node2->left;
//            }
//            if (node1->right == nullptr && node2->right != nullptr) {
//                node1->right = node2->right;
//            }
//        }
//        return root1;
//    }
//};
//
////1 2 -1 -1 3 -1 -1
//int main()
//{
//    TreeNode *root1, *root2;
//    TreeNode *node;
//
//    creatBiTree(&root1);
//    levelOrderTraverse(root1);
//    creatBiTree(&root2);
//    levelOrderTraverse(root2);
//
//    Solution s;
//
//    node = s.mergeTrees(root1, root2);
//    levelOrderTraverse(node);
//
//    return 0;
//}
