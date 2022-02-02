///*
//给定一个二叉搜索树的根节点 root 和一个值 key，删除二叉搜索树中的 key 对应的节点，并保证二叉搜索树的性质不变。返回二叉搜索树（有可能被更新）的根节点的引用。
//
//一般来说，删除节点可分为两个步骤：
//
//首先找到需要删除的节点；
//如果找到了，删除它。
// 
//
//示例 1:
//
//
//
//输入：root = [5,3,6,2,4,null,7], key = 3
//输出：[5,4,6,2,null,null,7]
//解释：给定需要删除的节点值是 3，所以我们首先找到 3 这个节点，然后删除它。
//一个正确的答案是 [5,4,6,2,null,null,7], 如下图所示。
//另一个正确答案是 [5,2,6,null,4,null,7]。
//
//
//示例 2:
//
//输入: root = [5,3,6,2,4,null,7], key = 0
//输出: [5,3,6,2,4,null,7]
//解释: 二叉树不包含值为 0 的节点
//示例 3:
//
//输入: root = [], key = 0
//输出: []
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/delete-node-in-a-bst
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
///*
//给定二叉搜索树（BST）的根节点 root 和要插入树中的值 value ，将值插入二叉搜索树。 返回插入后二叉搜索树的根节点。 输入数据 保证 ，新值和原始二叉搜索树中的任意节点值都不同。
//
//注意，可能存在多种有效的插入方式，只要树在插入后仍保持为二叉搜索树即可。 你可以返回 任意有效的结果 。
//
// 
//
//示例 1：
//
//
//输入：root = [4,2,7,1,3], val = 5
//输出：[4,2,7,1,3,5]
//解释：另一个满足题目要求可以通过的树是：
//
//示例 2：
//
//输入：root = [40,20,60,10,30,50,70], val = 25
//输出：[40,20,60,10,30,50,70,null,null,25]
//示例 3：
//
//输入：root = [4,2,7,1,3,null,null,null,null,null,null], val = 5
//输出：[4,2,7,1,3,5]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/insert-into-a-binary-search-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include "myfunction.h"
//
//
//class Solution {
//public:
//    TreeNode* deleteNode(TreeNode* root, int key) {
//        if (root == nullptr) {
//            return root;
//        }
//
//        if (root->val == key) {
//            if (root->left == nullptr && root->right == nullptr) {
//                delete root;
//                return nullptr;
//            }
//            else if (root->left == nullptr) {
//                TreeNode *retNode = root->right;
//                delete root;
//                return retNode;
//            }
//            else if (root->right == nullptr) {
//                TreeNode *retNode = root->left;
//                delete root;
//                return retNode;
//            }
//            else {
//                TreeNode *cur = root->right;
//                while (cur->left != nullptr) {
//                    cur = cur->left;
//                }
//
//                cur->left = root->left;
//                TreeNode *tmp = root;
//                root = root->right;
//
//                delete tmp;
//                return root;
//            }
//        }
//
//        if (key > root->val) {
//            root->right = deleteNode(root->right, key);
//        }
//        if (key < root->val) {
//            root->left = deleteNode(root->left, key);
//        }
//        return root;
//    }
//};
//
//int main()
//{
//    Solution s;
//
//    TreeNode *node;
//
//
//    return 0;
//}
//
//
//
