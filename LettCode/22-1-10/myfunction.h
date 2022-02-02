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

int calulateMax(int a, int b);

#endif
