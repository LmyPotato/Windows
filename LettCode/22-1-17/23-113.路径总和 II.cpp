/*
给你二叉树的根节点 root 和一个整数目标和 targetSum ，找出所有 从根节点到叶子节点 路径总和等于给定目标和的路径。

叶子节点 是指没有子节点的节点。

 

示例 1：


输入：root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
输出：[[5,4,11,2],[5,8,4,5]]
示例 2：


输入：root = [1,2,3], targetSum = 5
输出：[]
示例 3：

输入：root = [1,2], targetSum = 0
输出：[]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/path-sum-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include "myfunction.h"

using namespace std;


class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void traversal(TreeNode *cur, int sum) {
        if (!cur->left && !cur->right && sum == 0) {
            result.push_back(path);
            return;
        }
        if (cur->left == nullptr && cur->right == nullptr) {
            return;
        }

        if (cur->left != nullptr) {
            sum -= cur->left->val;
            path.push_back(cur->left->val);

            traversal(cur->left, sum);

            sum += cur->left->val;
            path.pop_back();
        }
        if (cur->right != nullptr) {
            sum -= cur->right->val;
            path.push_back(cur->right->val);

            traversal(cur->right, sum);

            sum += cur->right->val;
            path.pop_back();
        }
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        path.clear();
        result.clear();

        if (root == nullptr) {
            return result;
        }

        path.push_back(root->val);
        traversal(root, targetSum - root->val);

        return result;
    }
};


void creatBiTree(TreeNode **T)
{
    int ch;
    cin >> ch;
    if (ch == -1)
    {
        *T = NULL;
    }
    else
    {
        *T = new TreeNode;

        (*T)->val = ch;
        creatBiTree(&(*T)->left);
        creatBiTree(&(*T)->right);
    }
}

// 1 2 4 -1 -1 -1 3 5 -1 -1 -1
// 2 -1 3 -1 4 -1 5 -1 6 -1 -1
// 1 2 -1 -1 3 -1 -1
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// 1 2 -1 2 -1 -1 3 1 -1 -1 4 -1 -1
int main()
{
    vector<vector<int>> out;
    Solution s;
    TreeNode *tree;

    creatBiTree(&tree);
    cout<<endl;
    levelOrderTraverse(tree);
    cout<<endl;

//    out = s.pathSum(tree,5);
//    printSomeStlDouble(out);

    return 0;
}
