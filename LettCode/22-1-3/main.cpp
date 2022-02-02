#include <iostream>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(){}
    ListNode(int num):val(num),next(nullptr){}
};

void listInit(ListNode *L)
{
    L = new ListNode(-1);
}

void createList(ListNode *head, int n)
{
    ListNode *r = head;
    int val = 0;
    int t = n;

    while (n--) {
        printf("请输入第%d个数:\n",t - n);
        cin>>val;
        ListNode *tmp = new ListNode(val);
        r->next = tmp;
        r = tmp;
    }
}

void delList(ListNode *L, int index)
{
    while (index--) {
        L = L->next;
    }

    ListNode *tmp = L->next;
    L->next = tmp->next;

    delete tmp;
}

void insertList(ListNode *L, int index, int val)
{
    while (index--) {
        L = L->next;
    }

    ListNode *tmp = new ListNode(val);
    tmp->next = L->next;
    L->next = tmp;
}

void printList(ListNode *L)
{
    L = L->next;
    while (L != nullptr) {
        cout<<L->val<<" ";
        L = L->next;
    }
    cout<<endl;
}

ListNode* reverseList(ListNode *L)
{
    ListNode *pre = nullptr;
    ListNode *cur = L->next;

    while (cur != nullptr) {
        ListNode *tmp = cur->next;

        cur->next = pre;

        pre = cur;
        cur = tmp;
    }
    return pre;
}

ListNode* mergeList(ListNode *pa, ListNode *pb)
{
    ListNode *pc = new ListNode();
    ListNode *LC = pc;

    pa = pa->next;
    pb = pb->next;

    while (pa != nullptr && pb != nullptr) {
        if (pa->val <= pb->val) {
            pc->next = new ListNode(pa->val);
            pa = pa->next;
        }
        else {
            pc->next = new ListNode(pb->val);
            pb = pb->next;
        }
        pc = pc->next;
    }
    pc ->next = pa ? pa : pb;
    return LC;
}

ListNode* joinTwoList(ListNode *pa, ListNode *pb)
{
    ListNode *pc = new ListNode();
    ListNode *LC = pc;

    pa = pa->next;
    pb = pb->next;
    while (pa != nullptr && pb != nullptr) {
        if (pa->val < pb->val) {
            pa = pa->next;
        }
        else if (pa->val > pb->val) {
            pb = pb->next;
        }
        else {
            pc->next = new ListNode(pa->val);

            pc = pc->next;
            pa = pa->next;
            pb = pb->next;
        }
    }
    delete pa;
    delete pb;
    return LC;
}

int main()
{
    ListNode LA;
    ListNode LB;
    ListNode *LC = nullptr;

    listInit(&LA);
    listInit(&LB);

    createList(&LA, 1);
    createList(&LB, 1);

    for (int i = 0; i < 5; i++) {
        insertList(&LA,i + 1,i + 1);
    }
    for (int i = 0; i < 3; i++) {
        insertList(&LB,i + 1,i + 2);
    }

    printList(&LA);
    printList(&LB);

    LC = mergeList(&LA, &LB);
    printList(LC);

//    LC = reverseList(LC);
//    printList(LC);

    LC = joinTwoList(&LA,&LB);
    printList(LC);

    return 0;
}

