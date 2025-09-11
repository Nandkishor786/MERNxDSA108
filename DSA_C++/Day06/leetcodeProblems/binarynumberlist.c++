// Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10
// Example 2:

// Input: head = [0]
// Output: 0
  
#include<iostream>
using namespace std;
#include<cmath>
 
class Node{
  public:
int data;
Node*next;

public:
Node(int val){
  this->data =val;
  this->next =nullptr;
}

~Node(){
  cout<<"memory free of node with data"<<" "<<data<<endl;
}
};


void printList(Node*&head){
   
  if(head==nullptr){
      cout<<" list is empty"<<endl;
      return;
  }

  Node*temp =head;
  while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp =temp->next;
  }
  cout<<"Null"<<endl;
}

int getlength(Node*head){
   if(head==nullptr)return 0;
   Node*temp =head;
   int count =0;
   while(temp!=nullptr){
       ++count;
       temp =temp->next;
   }
   return count;
}

 
int getDecimalValue(Node* head) {
     
      Node*temp =head;
      int DecimalValue=0;
      int length = getlength(head)-1;
      
      while(temp!=nullptr){
           if(temp->data==1){
             DecimalValue =DecimalValue+pow(2,length--);
             temp =temp->next;
           }else{
            length--;
            temp =temp->next;
           }
      }
        return DecimalValue;
    }


int main(){

 

  Node*head =nullptr;
  Node*tail =nullptr;

 
  Node*newNode =new Node(1);
  head =newNode;
  tail =newNode;
  newNode->next =new Node(0);
  tail =newNode->next;
  newNode->next->next =new Node(1);
  tail =newNode->next->next;
  // newNode->next->next->next =new Node(40);
  // tail =newNode->next->next->next;
  // newNode->next->next->next->next =new Node(50);
  // tail =newNode->next->next->next->next;

   printList(head);
   cout<<"head is "<<" "<<head->data<<" "<<"tail is "<<" "<<tail->data<<endl;
   int DecimalValue =getDecimalValue(head);
   cout<<"decimal value is "<<DecimalValue<<endl;
   int n =getlength(head);
   cout<<"length is "<<n<<endl;
   
   return 0;
}