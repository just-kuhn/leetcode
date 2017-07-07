#include <iostream>

using namespace std;

struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
    ListNode res(INT32_MIN);
    ListNode *last = &res;
    while(l1 && l2)
    {
        if(l1->val < l2->val){
            last->next = l1;
            l1 = l1->next;
        }
        else
        {
            last->next = l2;
            l2 = l2->next;
        }
        last = last->next;
    }
    if(l1)
        last->next = l1;
    else
        last->next = l2;
    return res.next;
}

