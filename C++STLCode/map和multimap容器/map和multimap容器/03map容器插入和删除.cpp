//#include<iostream>
//using namespace std;
//#include<string>
//#include<map>
////mapÈİÆ÷²åÈëºÍÉ¾³ı
//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key= " << it->first << " value= " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//	//1
//	m.insert(pair<int,int>(1,10));
//
//	//2
//	m.insert(make_pair(2,20));
//
//	//3
//	m.insert(map<int,int>::value_type(3,30));
//
//	//4
//	m[4] = 40;
//
//	//cout << m[5] << endl; 
//	printMap(m);
//
//	//É¾³ı
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);//°´ÕÕkeyÖµÀ´É¾³ı
//	printMap(m);
//
//	//Çå¿Õ
//	m.erase(m.begin(), m.end());
//	printMap(m);
//
//	//Çå¿Õ
//	m.clear();
//	printMap(m);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}