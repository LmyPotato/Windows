///*
//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。如果 pos 是 -1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
//
//不允许修改 链表。
//
// 
//
//示例 1：
//
//
//
//输入：head = [3,2,0,-4], pos = 1
//输出：返回索引为 1 的链表节点
//解释：链表中有一个环，其尾部连接到第二个节点。
//示例 2：
//
//
//
//输入：head = [1,2], pos = 0
//输出：返回索引为 0 的链表节点
//解释：链表中有一个环，其尾部连接到第一个节点。
//示例 3：
//
//
//
//输入：head = [1], pos = -1
//输出：返回 null
//解释：链表中没有环。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/linked-list-cycle-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
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
//    ListNode *detectCycle(ListNode *head) {
//        ListNode *fast = head;
//        ListNode *low = head;
//        ListNode *index1 = nullptr;
//        ListNode *index2 = nullptr;
//
//        while (fast != nullptr && fast->next != nullptr) {
//            fast = fast->next->next;
//            low = low->next;
//
//            if (fast == low) {
//                index1 = low;
//                index2 = head;
//
//                while (index1 != index2) {
//                    index1 = index1->next;
//                    index2 = index2->next;
//                }
//
//                return index1;
//            }
//        }
//        return nullptr;
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
//    listInit(&L);
//    createList(&L,v_data);
//    printList(&L);
//
//
//
//    return 0;
//}
