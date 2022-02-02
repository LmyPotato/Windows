// -*- encoding: utf-8 -*-
/**
Filename         :myfunction.h
Description      :
Time             :2022/01/14 13:19:32
Author           :***
Version          :1.0
*/
#ifndef _MYFUNCTION_H_
#define _MYFUNCTION_H_

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <queue>
#include <stack>
#include <math.h>
#include <algorithm>

////为了好看，将二叉树层数加一层
//
////#define frontSpace (pow(2, level - 1) - 1)
////#define underline (pow(2, level) - 1)
//
//#define frontSpace (pow(2, level) - 1)
//#define underline (pow(2, level + 1) - 1)


using namespace std;

template <class T>
void printSomeStl(T v);

template <class T>
void printSomeStl(T v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

template <class T>
void printSomeStlDouble(T v);

template <class T>
void printSomeStlDouble(T v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        for (auto it1 = it->begin(); it1 != it->end(); it1++)
        {
            cout << *it1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//树的结构体定义
struct TreeNode
{
    int val;
    int height;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int getDepth(TreeNode *root);
void levelOrderTraverse(TreeNode *root);
int myPow(int val, int num);
int myMax(int a, int b);

void creatBiTree(TreeNode **T);
void PreOrderTraverse(TreeNode *T);

void printUnderline(char symbol, int num);
int getNumLen(int val);

#endif
