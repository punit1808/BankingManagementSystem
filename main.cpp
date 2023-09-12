#include <iostream>
using namespace std;

class Node{
    public:
    string name;
    int account_No;
    int passcode;
    int balance;
    Node* next;
    
    Node(string name,int acc,int pass,int bal){
        this->name=name;
        account_No=acc;
        passcode=pass;
        balance=bal;
        next=NULL;
    }

};

    Node* CreateAccount(Node* root){
        if(root==NULL){
            Node* temp;
            string name;
            int acc,pass,bal;
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Account No. : ";
            cin>>acc;
            cout<<"Enter PassCode : ";
            cin>>pass;
            cout<<"Enter Balance : ";
            cin>>bal;
            temp=new Node(name,acc,pass,bal);
            return temp;
        }
        else{
            
        // Pending For already Existing Node
        
        }
    }
int main() {
    // Node* root=new Node("Rahul",123456789,1568,9999);

    Node* root=NULL;
    root=CreateAccount(root);
    cout<<"Name : "<<root->name<<endl;
    cout<<"Account No. "<<root->account_No<<endl;
    cout<<"Password : "<<root->passcode<<endl;
    cout<<"Balance : "<<root->balance<<endl;
    
    return 0;
}
