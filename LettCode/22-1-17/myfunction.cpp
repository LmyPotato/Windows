#include "myfunction.h"

int getDepth(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }

    int depth = 0;
    int leftDepth = getDepth(root->left);
    int rightDepth = getDepth(root->right);

    depth = myMax(leftDepth, rightDepth) + 1;

    return depth;
}
//1 2 -1 2 -1 -1 3 -1 4 -1 -1
//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
void levelOrderTraverse(TreeNode *root) {
    queue<TreeNode *> que;
    vector<char>result;
    int tmp;

    int level = getDepth(root);

    if (root == nullptr) {
        return ;
    }
    que.push(root);

    while (!que.empty()) {
        int size = que.size();
        cout<<setw(myPow(2,level - 1));
        if (result.size() != 0){
            char tmp = result.front();
            result.pop_back();
            cout << tmp << setw(myPow(2, level));
        }
        for (int i = 0; i < size; i++) {
            TreeNode *node = que.front();
            que.pop();

            cout<<node->val<<setw(myPow(2,level));
            if (node->left != nullptr) {
                que.push(node->left);
            }
            else {
                result.push_back('#');
            }

            if (node->right != nullptr) {
                que.push(node->right);
            }
        }
        level--;
        cout<<endl;
    }
}

int myPow(int val, int num) {
    int sum = 1;
    for (int i = 0; i < num; i++) {
        sum *= val;
    }
    return sum;
}

int myMax(int a, int b) {
    return a > b ? a : b;
}
