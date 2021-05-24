ListNode* Solution::partition(ListNode* A, int B) {
    
    ListNode* curr=A;
    vector<int> x;
    vector<int> y;
    while(curr!=NULL)
    {
        if(curr->val>=B)
        {
            x.push_back(curr->val);
        }
        else
        {
            y.push_back(curr->val);
        }
        curr=curr->next;
        
    }
    curr=A;
    for(int i=0;i<y.size();i++)
    {
            curr->val=y[i];
            curr=curr->next;
    }
    for(int i=0;i<x.size();i++)
    {
            curr->val=x[i];
            curr=curr->next;
    }
    return A;
}
