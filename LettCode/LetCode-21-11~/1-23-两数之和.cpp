/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。


示例 1：

输入：nums = [2, 7, 11, 15], target = 9
输出：[0, 1]
解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
示例 2：

输入：nums = [3, 2, 4], target = 6
输出：[1, 2]
示例 3：

输入：nums = [3, 3], target = 6
输出：[0, 1]


提示：

2 <= nums.length <= 104
- 109 <= nums[i] <= 109
- 109 <= target <= 109
只会存在一个有效答案
进阶：你可以想出一个时间复杂度小于 O(n2) 的算法吗？

来源：力扣（LeetCode）
链接：https ://leetcode-cn.com/problems/two-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/*测试集
    4 2 7 11 15 9
3 3 2 4 6
    2 3 3 6
3 3 2 3 6
*/
#include<iostream>
#include<vector>
#include<map>

using namespace std;
void printMap(map<int, int>&m);

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target);

};
//---------------------第一种方法--------------------------耗时大，内存消耗比第三种小
//vector<int> Solution::twoSum(vector<int>& nums, int target)
//{
//    int i=-1,j=0;
//    vector<int>ret;
//    for(vector<int>::iterator it1=nums.begin();it1!=nums.end();it1++){
//        i++;
//        for(vector<int>::iterator it2=it1+1;it2!=nums.end();it2++){
//            j++;
//            if((*it1)+(*it2)==target){
//                ret.push_back(i);
//                ret.push_back(j);
//                //如果找到该值就应该是直接退出
//                return ret;
//            }
//        }
//        //第二次for循环结束后j的值应该i+1
//        //即执行下一次for循环的时候j的值应该是vector【i】的下一个元素开始
//        j=i+1;
//    }
//    //找不到该值也应该要返回
//    return ret;
//}
//----------------------------第二种方法--------------------------------和第二种差不多
//vector<int> Solution::twoSum(vector<int>& nums, int target)
//{
//    vector<int>ret;
//    for(int i=0;i<nums.size();i++){
//        for(int j=i+1;j<nums.size();j++){
//            if(nums[i]+nums[j]==target){
//                ret.push_back(i);
//                ret.push_back(j);
//                return ret;
//            }
//        }
//    }
//
//    return ret;
//}
//----------------------------第三种方法--------------------------------：时间块，但耗内存
//numsMap.find-----在容器中寻找值为k的元素，返回该元素的迭代器。否则，返回map.end()。
vector<int> Solution::twoSum(vector<int>& nums, int target) {
	map<int, int> numsMap;
	for (int i = 0; i < nums.size(); i++) {
		numsMap.insert(pair<int, int>(nums[i], i));
	}
	vector<int>res;
	for (int i = 0; i < nums.size(); i++) {
		auto iter = numsMap.find(target - nums[i]);
		printf("iter:%d\n",*iter);
		if (iter != numsMap.end() && iter->second != i) {
			res.push_back(i);
			res.push_back(iter->second);
			return res;
		}
	}

	return res;
}


//-------------------输出vector--------------------
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}
//-------------------输出map--------------------
void printMap(map<int, int>&m)
{
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << it->first << " value= " << it->second << endl;
	}
	cout << endl;
}

int main()
{
	vector<int>nums;
	vector<int>temp;//用来接受返回的vector：输出
	Solution s;
	int target;//输出目标值
	int data;
	int n;//用来记录有多少个元素-vector<int>nums里面的个数

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> data;
		nums.push_back(data);
	}
	cin >> target;
	printVector(nums);
	//s.twoSum(nums, target);

    temp=s.twoSum(nums,target);
    printf("--------------------\n");
    printVector(temp);

	//system("pause");
	return 0;
}




