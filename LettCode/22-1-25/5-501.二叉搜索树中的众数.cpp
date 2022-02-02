///*
//给你一个含重复值的二叉搜索树（BST）的根节点 root ，找出并返回 BST 中的所有 众数（即，出现频率最高的元素）。
//
//如果树中有不止一个众数，可以按 任意顺序 返回。
//
//假定 BST 满足如下定义：
//
//结点左子树中所含节点的值 小于等于 当前节点的值
//结点右子树中所含节点的值 大于等于 当前节点的值
//左子树和右子树都是二叉搜索树
// 
//
//示例 1：
//
//
//输入：root = [1,null,2,2]
//输出：[2]
//示例 2：
//
//输入：root = [0]
//输出：[0]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/find-mode-in-binary-search-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <map>
//#include "myfunction.h"
//#include <unordered_map>
//
////class Solution
////{
////private:
////    void searchBST(TreeNode *root, unordered_map<int, int> &m)
////    {
////        if (root == nullptr)
////        {
////            return;
////        }
////        m[root->val]++;
////        searchBST(root->left, m);
////        searchBST(root->right, m);
////        return;
////    }
////    bool static cmp(const pair<int, int> &m1, const pair<int, int> &m2)
////    {
////        return m1.second > m2.second;
////    }
////public:
////    vector<int> findMode(TreeNode *root)
////    {
////        unordered_map<int, int> m;
////        vector<int> result;
////
////        if (root == nullptr) {
////            return {};
////        }
////
////        searchBST(root, m);
////        vector<pair<int, int>> vec(m.begin(), m.end());
////
////        sort(vec.begin(), vec.end(), cmp);
////        result.push_back(vec[0].first);
////
////        for (int i = 1; i < vec.size(); i++)
////        {
////            if (vec[i].second == vec[0].second)
////            {
////                result.push_back(vec[i].first);
////            }
////            else {
////                break;
////            }
////        }
////
////        return result;
////    }
////};
//
//class Solution
//{
//public:
//    int countMax;
//    TreeNode *pre;
//    int count;
//    vector<int> result;
//    void searchBST(TreeNode *cur) {
//        if (cur == nullptr) {
//            return;
//        }
//
//        searchBST(cur->left);
//
//        if (pre == nullptr) {
//            count = 1;
//        }
//        else if (pre->val == cur->val) {
//            count++;
//        }
//        else {
//            count = 1;
//        }
//
//        pre = cur;
//
//        if (count == countMax) {
//            result.push_back(cur->val);
//        }
//        if (count > countMax) {
//            countMax = count;
//            result.clear();
//            result.push_back(cur->val);
//        }
//
//        searchBST(cur->right);
//        return;
//    }
//    vector<int> findMode(TreeNode *root) {
//        count = 0;
//        countMax = 0;
//        result.clear();
//        pre = nullptr;
//
//        if (root == nullptr) {
//            return {};
//        }
//
//        searchBST(root);
//
//        return result;
//    }
//};
//
////1 -1 2 2 -1 -1 -1
////2 1 -1 -1 3 -1 -1
//int main()
//{
//    Solution s;
//    vector<int> tmp;
//
//    TreeNode *node;
//    creatBiTree(&node);
//
//    tmp = s.findMode(node);
//    printSomeStl(tmp);
//    levelOrderTraverse(node);
//
//    return 0;
//}
