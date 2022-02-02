///*
//给定一个 N 叉树，找到其最大深度。
//
//最大深度是指从根节点到最远叶子节点的最长路径上的节点总数。
//
//N 叉树输入按层序遍历序列化表示，每组子节点由空值分隔（请参见示例）。
//
// 
//
//示例 1：
//
//
//
//输入：root = [1,null,3,2,4,null,5,6]
//输出：3
//示例 2：
//
//
//
//输入：root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
//输出：5
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/maximum-depth-of-n-ary-tree
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//
//class Solution {
//public:
//    int maxDepth(Node* root) {
//        queue<Node*> que;
//        if (root != NULL) que.push(root);
//        int depth = 0;
//        while (!que.empty()) {
//            int size = que.size();
//            depth++; // 记录深度
//            for (int i = 0; i < size; i++) {
//                Node* node = que.front();
//                que.pop();
//                for (int j = 0; j < node->children.size(); j++) {
//                    if (node->children[j]) que.push(node->children[j]);
//                }
//            }
//        }
//        return depth;
//    }
//};
//
//class solution {
//public:
//    int maxdepth(node* root) {
//        if (root == 0) return 0;
//        int depth = 0;
//        for (int i = 0; i < root->children.size(); i++) {
//            depth = max (depth, maxdepth(root->children[i]));
//        }
//        return depth + 1;
//    }
//};
