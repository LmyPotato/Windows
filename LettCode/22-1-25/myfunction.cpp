#include "myfunction.h"

//为了好看，将二叉树层数加一层
//#define frontSpace (pow(2, level - 1) - 1)
//#define underline (pow(2, level) - 1)
#define frontSpace (pow(2, level) - 1)
#define underline (pow(2, level + 1) - 1)

//获取树的深度
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
//打印一行符号
void printUnderline(char symbol, int num) {
    for (int i = 0; i < num; i++) {
        cout<<symbol;
    }
}

//打印树型结构
//第一个参数相当于传入一个二维数组
void printTree(vector<vector<int>> v, TreeNode *root) {
    //记录二叉树的层数
    //为什么要减一，因为调用了levelOrderTraverse(TreeNode *root)后，root为多加一层
    int level = getDepth(root) - 1;

    for (int i = 0; i <v.size(); i++) {
    //头结点单独处理
        if (i == 0) {
            //输出最前面的空格
            printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level - 1) -1);
            //第一行输出结束，换行
            cout<< v[0][0] <<endl;

            level--;
            //这里输出这个：|-------|
            printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level - 1) - 1);
            cout<<'|';

            printUnderline('-', underline);//printUnderline('-', pow(2, level) - 1);
            //输出|-------|结束，换行
            cout<<'|'<<endl;
            continue;
        }
        //遍历每一层
        printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level -1) -1);
        for (int j = 0; j < v[i].size(); j++) {
            cout<< v[i][j];

            printUnderline(' ', underline - getNumLen(v[i][j]) + 1);//printUnderline(' ', pow(2, level) -1 - getNumLen(v[i][j]) + 1);
        }
        //每一层结束，换行
        cout << endl;

        level--;
        //输出|-------|
        if (level != 0) {
            printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level - 1) - 1);
            for (int k = 0; k < v[i].size(); k++) {
                cout<<'|';
                printUnderline('-', underline);//printUnderline('-', pow(2, level) - 1);
                cout<<'|';
                printUnderline(' ', underline);//printUnderline(' ', pow(2, level) - 1);
            }
            cout<<endl;
        }
    }
    cout << endl;
}
//层序遍历
void levelOrderTraverse(TreeNode *root)
{
    //利用队列，先进先出，从上到下，从左到右遍历
    queue<TreeNode *> que;
    //记录全部数据
    vector<vector<int>> result;
    //保存每一层的数据
    vector<int> tmp;
    //二叉树的层数
    int level = getDepth(root);
    int depth = level;

    if (root == nullptr) {
        return;
    }

    que.push(root);
    while (!que.empty()) {
        //记录每一层的数据个数
        int size = que.size();
        //由二叉树性质可知，每一层最多有2^(k - 1)个
        tmp.resize(pow(2, depth - level));

        for (int i = 0; i < size; i++) {
            TreeNode *node = que.front();
            que.pop();

            tmp[i] = node->val;
            //把二叉树构建成满的二叉树，下面的步骤就是构建满二叉树
            //为什么构建满二叉树，因为好遍历，不用考虑太多
            //满二叉树：有2^(level) - 1 个元素
            if (node->left != nullptr) {
                que.push(node->left);
            }
            else {
                node->left = new TreeNode(0);
                que.push(node->left);
            }

            if (node->right != nullptr) {
                que.push(node->right);
            }
            else {
                node->right = new TreeNode(0);
                que.push(node->right);
            }
        }
        level--;
        //把每一层的元素放入二维数组中去
        result.push_back(tmp);
        if (level <= 0) {
            break;
        }
    }
    printTree(result, root);
}
//求val^num方
int myPow(int val, int num) {
    int sum = 1;
    for (int i = 0; i < num; i++) {
        sum *= val;
    }
    return sum;
}
//求最大值
int myMax(int a, int b) {
    return a > b ? a : b;
}
//前序创建树
void creatBiTree(TreeNode **T) {
    int ch;
    cin >> ch;
    if (ch == -1) {
        *T = NULL;
    }
    else {
        *T = new TreeNode;

        (*T)->val = ch;
        creatBiTree(&(*T)->left);
        creatBiTree(&(*T)->right);
    }
}
//获取一个数的长度
int getNumLen(int val) {
    int result = 0;

    do {
        result++;
        val = val / 10;
    }while (val != 0);

    return result;
}
//前序遍历树
void PreOrderTraverse(TreeNode *T) {
    if (T) {
        cout << T->val << " ";
        PreOrderTraverse(T->left);
        PreOrderTraverse(T->right);
    }
}
//void printTree(vector<vector<int>> v, TreeNode *root)
//{
//    int level = getDepth(root);
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        cout << setw(pow(2, level - 1));
//        for (auto it1 = it->begin(); it1 != it->end(); it1++)
//        {
//            cout << *it1 << setw(pow(2, level));
//        }
//        cout << endl;
//        level--;
//    }
//    cout << endl;
//}
