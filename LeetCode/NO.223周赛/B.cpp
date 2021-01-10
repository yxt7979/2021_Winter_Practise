class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *h = head;
        int len = 0;
        while(h != NULL){
            len ++ ;
            h = h->next;
        }
        int kth,dkth;
        h = head;
        for(int i = 1;i <= len;i++){
            if(i == k) kth = h->val;
            if(i == len - k + 1) dkth = h->val;
            h = h->next;
        }
        if(kth == dkth) return head;
        h = head;
        for(int i = 1;i <= len;i++){
            if(i == k) h->val = dkth;
            if(i == len - k + 1) h->val = kth;
            h = h->next;
        }
        return head;
    }
};

