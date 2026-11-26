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
 //week12-5學習計畫Linked List地4提
 //445. Add Two Numbers II

class Solution {
public:
//把上週week11-4.cpp的程式 拿來用
    ListNode* reverse(ListNode* head) {
        //中間用貼的weel11-1
        vector<int> a;//伸縮自如的陣列要把Linked list裡面的值copy到陣列
        while(head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode*ans=new ListNode(999);
        ListNode*now=ans;
        for(int i=a.size()-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     l1=reverse(l1);
     l2=reverse(l2);
     //下面用貼的weel12-3
    ListNode*ans=new ListNode(999);//上週交的工具1
    ListNode*now=ans;//上週交的工具2
        int carry=0;//進位 week12重點
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
        return reverse(ans->next);
    }
};
