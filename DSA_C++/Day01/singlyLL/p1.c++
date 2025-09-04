#include<iostream>
using namespace std;

class Node{
   public:
  int data;
  Node *next;

  public:
  //constru
  Node(int val){
    this->data =val;
    this->next =nullptr;
  }

  //destruc
  ~Node(){
      int val =this->data;
      if(this->next!=nullptr){
        delete next;
        next =nullptr;
      }
      cout<<"memory is free for node with data"<<" "<<val<<endl;
  }
};


//  //insertAthead
  void InsertAtHead(Node* &head,Node* &tail,int d){
     Node*temp =new Node(d);

      if(head==nullptr){
        head =temp;
        tail =temp;
        return;
      }
      else{
        temp->next =head;
        head =temp; 
      
      }

  }

  //insert at tail
  void InsertAtTail(Node*head,Node*&tail,int d){
     
      Node*newNode = new Node(d);
      if(head==nullptr){
         head =newNode;
         tail =newNode;
         return;
      } 
      tail->next =newNode;
      tail =newNode;
  }

 void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
       
  Node*newNode = new Node(d);

  if (pos <= 0) {
    cout << "Invalid position: " << pos << endl;
    delete newNode;
    return;
}

  //empty case
  if(head==nullptr){
    head = tail=newNode;
     return;
  }

  //start case 
 if(pos==1){ 
    newNode->next = head;
    head =newNode;
    return;
  }

    //middle or last
     Node*temp =head;
     int i=1;
     while(temp!=nullptr&&i<pos-1){
        temp =temp->next;
        i++;
     }
    
      newNode->next =temp->next;
      temp->next =newNode;

      if(newNode->next ==nullptr){
        tail =newNode;
      }
  }

  int getlen(Node*head){
      Node*temp =head;
      int count =0;
      while(temp!=0){
        count++;
        temp=temp->next;
      }
      return count;
  }

//delete operations
  void DeleteNode(Node* &head,Node* &tail,int pos){
    if(pos==0){
      cout<<"invalid position"<<endl;
      return;
    }
    int len =getlen(head);
    if(pos>len){
      cout<<"out of bound plaese enter the currect position to delete node"<<endl;
    }
   
    if(head==nullptr){
      cout<<"list is empty"<<endl;
       return;
    }

    Node*temp =head;
    if(pos==1){
       head =head->next;

     if(head==nullptr){
        tail=nullptr;
      }
    
       temp =nullptr;
       delete temp;
       return;
    } 
    if(head!=nullptr&& pos>1){
           Node*prev =nullptr;
           Node*curr =head;
           int index =1;

           while(index<pos){
               prev =curr;
               curr =curr->next;
               index++;
           }
           if(curr->next ==nullptr){
               tail = prev;
           }
          prev->next =curr->next;
          curr->next =nullptr;
          delete curr;
          return;
    }
    

  }
  //print
  void print(Node*head){
    Node*temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
  }

int main(){

  Node*head = nullptr;
  Node*tail =nullptr;
  // Node*temp = new Node(5);
  // head = temp;
  // tail =temp;

  // print (head);
  // cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;


  InsertAtHead(head,tail,10);
  print(head);
 cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;
   InsertAtHead(head,tail,20);
  print(head);
 cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;  
 InsertAtHead(head,tail,30);
  print(head);
 cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

 InsertAtTail(head,tail,40);
  print(head);
 cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;
  InsertAtTail(head,tail,50);
  print(head);
 cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;
  InsertAtTail(head,tail,60);
  print(head);
 cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;
 
   
//    insertAtPosition(head,tail,3,15);
//   print(head);
//  cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

//  insertAtPosition(head,tail,1,100);
//   print(head);
//  cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

//  insertAtPosition(head,tail,8,200);
//   print(head);
//  cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

//  insertAtPosition(head,tail,9,400);
//   print(head);
//  cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

 
//  insertAtPosition(head,tail,0,1000);
//   print(head);
//  cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

  DeleteNode(head,tail,6);
  print(head);
  cout<<"head ="<<head->data<<" "<<"tail="<<tail->data<<endl;

  return 0;
   
}

