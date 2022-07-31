#include <iostream>
using namespace std;
class Node{
    private:
    int data;
    Node* Next;
    public:
    Node(int data){
        setdata(data);
        Next=NULL;
    }
    void setdata(int data){
        this->data=data;
    }
void setNext(Node*Next){
        this->Next=Next;
    }
    int getdata(){
        return this->data;
    }
    Node*getNext(){
        return this->Next;
    }
};
bool insertAtlast(Node* head,int val){
    if(head==NULL){
        Node* n=new Node(val);
        head=n;
        return true;
    }
    Node*temp=head;
    while(head!=NULL){
        temp=temp->getNext();
    }
     temp->setdata(val);
     return true;
}
int getfirstelement(Node* head){
    if(head==NULL) return -1;
    return head->getdata();
}
void display(Node* head){
    if(head==NULL) return;
    Node*temp=head;
    while(temp!=NULL){
       cout<<temp->getdata()<<"....";
       temp=temp->getNext();
    }
    cout<<endl;
}

int main() {
Node *head=NULL;
cout<<getfirstelement(head);
insertAtlast(head,1);
insertAtlast(head,2);
insertAtlast(head,3);
insertAtlast(head,4);
insertAtlast(head,5);
insertAtlast(head,6);
insertAtlast(head,7);
return 0;
}
