#include "myfunction.h"

//Ϊ�˺ÿ�����������������һ��
//#define frontSpace (pow(2, level - 1) - 1)
//#define underline (pow(2, level) - 1)
#define frontSpace (pow(2, level) - 1)
#define underline (pow(2, level + 1) - 1)

//��ȡ�������
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
//��ӡһ�з���
void printUnderline(char symbol, int num) {
    for (int i = 0; i < num; i++) {
        cout<<symbol;
    }
}

//��ӡ���ͽṹ
//��һ�������൱�ڴ���һ����ά����
void printTree(vector<vector<int>> v, TreeNode *root) {
    //��¼�������Ĳ���
    //ΪʲôҪ��һ����Ϊ������levelOrderTraverse(TreeNode *root)��rootΪ���һ��
    int level = getDepth(root) - 1;

    for (int i = 0; i <v.size(); i++) {
    //ͷ��㵥������
        if (i == 0) {
            //�����ǰ��Ŀո�
            printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level - 1) -1);
            //��һ���������������
            cout<< v[0][0] <<endl;

            level--;
            //������������|-------|
            printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level - 1) - 1);
            cout<<'|';

            printUnderline('-', underline);//printUnderline('-', pow(2, level) - 1);
            //���|-------|����������
            cout<<'|'<<endl;
            continue;
        }
        //����ÿһ��
        printUnderline(' ', frontSpace);//printUnderline('*', pow(2, level -1) -1);
        for (int j = 0; j < v[i].size(); j++) {
            cout<< v[i][j];

            printUnderline(' ', underline - getNumLen(v[i][j]) + 1);//printUnderline(' ', pow(2, level) -1 - getNumLen(v[i][j]) + 1);
        }
        //ÿһ�����������
        cout << endl;

        level--;
        //���|-------|
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
//�������
void levelOrderTraverse(TreeNode *root)
{
    //���ö��У��Ƚ��ȳ������ϵ��£������ұ���
    queue<TreeNode *> que;
    //��¼ȫ������
    vector<vector<int>> result;
    //����ÿһ�������
    vector<int> tmp;
    //�������Ĳ���
    int level = getDepth(root);
    int depth = level;

    if (root == nullptr) {
        return;
    }

    que.push(root);
    while (!que.empty()) {
        //��¼ÿһ������ݸ���
        int size = que.size();
        //�ɶ��������ʿ�֪��ÿһ�������2^(k - 1)��
        tmp.resize(pow(2, depth - level));

        for (int i = 0; i < size; i++) {
            TreeNode *node = que.front();
            que.pop();

            tmp[i] = node->val;
            //�Ѷ��������������Ķ�����������Ĳ�����ǹ�����������
            //Ϊʲô����������������Ϊ�ñ��������ÿ���̫��
            //������������2^(level) - 1 ��Ԫ��
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
        //��ÿһ���Ԫ�ط����ά������ȥ
        result.push_back(tmp);
        if (level <= 0) {
            break;
        }
    }
    printTree(result, root);
}
//��val^num��
int myPow(int val, int num) {
    int sum = 1;
    for (int i = 0; i < num; i++) {
        sum *= val;
    }
    return sum;
}
//�����ֵ
int myMax(int a, int b) {
    return a > b ? a : b;
}
//ǰ�򴴽���
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
//��ȡһ�����ĳ���
int getNumLen(int val) {
    int result = 0;

    do {
        result++;
        val = val / 10;
    }while (val != 0);

    return result;
}
//ǰ�������
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
