class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node*curr=head;
     unordered_set<int>s;
     while(curr!=NULL){
         if(!s.empty() && s.count(curr->data)&&curr->next==NULL){
             curr=NULL;
         }
         else if(!s.empty()&&s.count(curr->data)){
          Node*temp=curr;
          curr=curr->next;
          delete(temp);
         }
        else{
            s.insert(curr->data);
            curr=curr->next;
        }
     }
     return head;
    }
};