//
// Created by 罗咏佳 on 2019/10/30.
//
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(nullptr){}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    if(l1 == nullptr && l2 == nullptr)
        return nullptr;
    if(l1 == nullptr && l2 != nullptr)
        return l2;
    if(l1 != nullptr && l2 == nullptr)
        return l1;

    ListNode *ret = new ListNode(0);
    ListNode *cur = ret;
    int carry = 0;
    while(l1 ||  l2){
        int val1 = l1 ? l1->val : 0;
        int val2 = l2 ? l2->val : 0;
        int sum = val1 = val2 + carry;
        carry = sum/10;
        cur->next = new ListNode(sum%10);
        cur = cur->next;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }
    if(carry){
        cur->next = new ListNode(1);
    }
    return ret->next;
}