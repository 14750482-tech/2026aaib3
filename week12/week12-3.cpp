/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 //week12-3.cpp 學習計畫Linkde list
 //Leetcode 2. Add Two Numbers 超級大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(999);//上週交的工具1
        ListNode*now=ans;//上週交的工具2
        int carry=0;//進位 week12重點
        //新的版本
        while(l1!=nullptr||l2!=nullptr){//把&&改成||
            if(l1!=nullptr)carry+=l1->val;//如果l1還有，就把val加進去
            if(l2!=nullptr)carry+=l2->val;//如果l2還有，就把val加進去
            now->next=new ListNode(carry%10);
            carry=carry/10;//進位 week12重點
            now=now->next;
            if(l1!=nullptr)l1=l1->next;//如果還有 才能換下一筆
            if(l2!=nullptr)l2=l2->next;
        }
        if(carry)now->next=new ListNode(carry);//離開迴圈後 如果還有carry進位
        return ans->next;

        //樓下的版本 沒辦法出李 長度不同的狀況
        //while(l1!=nullptr&&l2!=nullptr){//上週交的工具2
        //    int val=l1->val+l2->val+carry;//今天要做加法
        //    now->next=new ListNode(val);//上週交的工具2
        //   carry=val/10;//進位 week12重點
        //    now=now->next;
        //  l1=l1->next;//上週交的工具2
        //l2=l2->next;//上週交的工具2
        //}
        //return ans->next;//上週教的工具2
    }
};
