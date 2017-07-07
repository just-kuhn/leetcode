//
// Created by uladzislau on 4.7.17.
//

#include <iostream>

using namespace std;

class List{
public:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

    int count(ListNode* l){
        int length = 1;
        while(l->next != NULL)
        {
            length++;
            l=l->next;
        }
    };

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry = 0, buf, value, num1, num2;
        ListNode *first = NULL, *prev = NULL;
        while(l1 || l2){
            if(l1)
                num1 = l1->val;
            else
                num1 = 0;

            if(l2)
                num2 = l2->val;
            else
                num2 = 0;

            buf = num1 + num2 + carry;
            carry = buf/10;
            value = buf % 10;

            ListNode* cur = new ListNode(value);
            if(!first)
                first = cur;
            if(prev)
                prev->next = cur;
            prev = cur;

            if(l1)
                l1 = l1->next;
            else
                l1 = NULL;

            if(l2)
                l2 = l2->next;
            else
                l2 = NULL;
        }
        if(carry > 0)
        {
            ListNode *l = new ListNode(carry);
            prev->next = l;
        }
        return first;
    }
};

