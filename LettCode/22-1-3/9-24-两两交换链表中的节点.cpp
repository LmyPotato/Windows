///*
//给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。
//
// 
//
//示例 1：
//
//
//输入：head = [1,2,3,4]
//输出：[2,1,4,3]
//示例 2：
//
//输入：head = []
//输出：[]
//示例 3：
//
//输入：head = [1]
//输出：[1]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/swap-nodes-in-pairs
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(){}
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* swapPairs(ListNode* head) {
//        ListNode *dummyHead = new ListNode(0);
//        dummyHead->next = head;
//        ListNode *cur = dummyHead;
//
//        while (cur->next != nullptr && cur->next->next != nullptr) {
//            ListNode *tmp = cur->next;
//            ListNode *tmp1 =cur->next->next->next;
//
//            cur->next = cur->next->next;
//            cur->next->next = tmp;
//            cur->next->next->next = tmp1;
//
//            cur = cur->next->next;
//        }
//
//        return dummyHead->next;
//    }
//};
//
//void listInit(ListNode *L)
//{
//    L=new ListNode(0);
//}
//
//void createList(ListNode *L,vector<int>v)//尾插
//{
//    ListNode *r=new ListNode(0);
//    r=L;
//    int len = v.size();
//    int i=0;
//
//    while(i < len){
//        ListNode *temp=new ListNode(v[i]);
//
//        r->next=temp;
//        r=temp;
//        i++;
//    }
//}
//
//void printList(ListNode *L)
//{
//    if(L==nullptr){
//        cout<<"list if null!"<<endl;
//        return;
//    }
//    else{
//        while(L != nullptr){
//            cout<<L->val<<" ";
//            L = L->next;
//        }
//        cout<<endl;
//    }
//}
//
//int main()
//{
//    ListNode L;
//    ListNode *output = new ListNode();
//    Solution s;
//    vector<int>v_data={1,2,3,4};
//
//    listInit(&L);
//    createList(&L,v_data);
//    printList(&L);
//
//    output = s.swapPairs(&L);
//    printList(output);
//
//
//    return 0;
//}
//
//
