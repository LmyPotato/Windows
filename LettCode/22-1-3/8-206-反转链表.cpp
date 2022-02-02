///*
//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
// 
//
//示例 1：
//
//
//输入：head = [1,2,3,4,5]
//输出：[5,4,3,2,1]
//示例 2：
//
//
//输入：head = [1,2]
//输出：[2,1]
//示例 3：
//
//输入：head = []
//输出：[]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/reverse-linked-list
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<unordered_set>
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
//    ListNode* reverseList(ListNode* head) {
//        ListNode *cur = head;
//        ListNode *pre = nullptr;
//        ListNode *tmp;
//
//        while (cur != nullptr) {
//            tmp = cur->next;
//            cur->next = pre;
//
//            pre = cur;
//            cur = tmp;
//        }
//        return pre;
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
//    //L = L->next;
//}
//
//void printList(ListNode *L)
//{
//    if(L==nullptr){
//        cout<<"list if null!"<<endl;
//        return;
//    }
//    else{
//        while(L!=nullptr){
//            cout<<L->val<<" ";
//            L=L->next;
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
//    vector<int>v_data={1,2,3,4,5,6};
//
//
//    //listInit(&L);
//    createList(&L,v_data);
//    printList(&L);
//
//    output = s.reverseList(&L);
//    printList(output);
//
//    return 0;
//}

