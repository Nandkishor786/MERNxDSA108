#include<iostream>
using namespace std;
#include <unordered_map>

class ListNode{

  public:
  int data;
  ListNode*next;
  public:
  ListNode(int val){
    this->data =val;
    this->next =nullptr;
  }

  ~ListNode(){
    cout<<"node is memory free with data "<<data<<endl;
  }
};

void printList(ListNode*head){
  if(head==nullptr){
    cout<<"list is empty"<<endl;
    return;
  }
    ListNode*temp =head;
   while(temp!=nullptr){
    cout<<temp->data<<"->";
     temp =temp->next;
    }
    cout<<"null"<<endl;

}
  
ListNode*getMid(ListNode*head)
{   
    if(head==nullptr&&head->next==nullptr)return head;

   ListNode*slow =head;
   ListNode*fast =head->next;
   while(fast!=nullptr&&fast->next!=nullptr){
     slow =slow->next;
     fast =fast->next;
     if(fast!=nullptr){
      fast =fast->next;
     }

   }
   return slow;
}
ListNode*reverse(ListNode*head){

      if(head==nullptr||head->next==nullptr){
        return head;
      }

      ListNode*newHead =reverse(head->next);
      head->next->next =head;
      head->next=nullptr;
      
      return newHead;
}

      
    bool isPalindrome(ListNode* head) {    
        ListNode*Mid =getMid(head);
         cout<<"mid is "<<Mid->data<<endl;
        ListNode*MidNext =Mid->next;
        ListNode*halfhead =reverse(MidNext);
      
          ListNode*first =head;
          ListNode*second =halfhead;

          while(second){

            if(first->data!=second->data)return false;
              second =second->next;
              first =first->next; 
        }
        MidNext =reverse(halfhead);
        return true;
      }
    int main(){

      ListNode*head =nullptr;
      head = new ListNode(1);
      head->next =new ListNode(2);
      // ListNode*Intersect =new ListNode(2);
      //  head->next->next= Intersect;
      // Intersect->next=new ListNode(1);
      // Intersect->next->next=new ListNode(4);
    //  Intersect->next->next->next=new ListNode(5);
    // Intersect->next->next->next->next=new ListNode(6);

    int val  =6;
      
            printList(head);
           if (isPalindrome(head)){
            cout<<"yes it is palindrom "<<endl;
           }else{
            cout<<"not a palindrom "<<endl;
           }
            
          
           // memoryfreecode
          if(head!=nullptr){
               ListNode*temp =head;
               while(temp!=nullptr){
                 ListNode*next =temp->next;
                 delete temp;
                 temp =next;
               } 
          }

      return 0;
    }