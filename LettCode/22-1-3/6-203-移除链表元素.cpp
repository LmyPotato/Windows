///*
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
// 
//
//示例 1：
//
//
//输入：head = [1,2,6,3,4,5,6], val = 6
//输出：[1,2,3,4,5]
//示例 2：
//
//输入：head = [], val = 1
//输出：[]
//示例 3：
//
//输入：head = [7,7,7,7], val = 7
//输出：[]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/remove-linked-list-elements
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
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
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
////class Solution {
////public:
////    ListNode* removeElements(ListNode* head, int val) {
////
////        while (head != nullptr && head->val == val) {
////            ListNode *tmp = head;
////            head = head->next;
////            delete tmp;
////        }
////
////        ListNode *h = head;
////        while (head != nullptr && head->next != nullptr) {
////            if (head->next->val == val) {
////                ListNode *tmp = head->next;
////                head->next = tmp->next;
////                delete tmp;
////            } else {
////                head = head->next;
////            }
////        }
////
////        return h;
////    }
////};
//
//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        ListNode* dummyHead = new ListNode(0); // 设置一个虚拟头结点
//        dummyHead->next = head; // 将虚拟头结点指向head，这样方面后面做删除操作
//        ListNode* cur = dummyHead;
//        while (cur->next != NULL) {
//            if(cur->next->val == val) {
//                ListNode* tmp = cur->next;
//                cur->next = cur->next->next;
//                delete tmp;
//            } else {
//                cur = cur->next;
//            }
//        }
//        head = dummyHead->next;
//        delete dummyHead;
//        return head;
//    }
//};
//
//void listInit(ListNode *L)
//{
//    L=new ListNode(-1);
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
//    }
//    else{
//        L=L->next;
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
//    int target = 6;
//    ListNode L;
//    ListNode *output = new ListNode();
//    Solution s;
////    vector<int>v_data={6,1,2,6,3,6,4,5,6};
//    vector<int>v_data={1};
//
//    listInit(&L);
//    createList(&L,v_data);
//    printList(&L);
//
//
//    output = s.removeElements(&L, target);
//    printList(output);
//
//    return 0;
//}
//
