#include<bits/stdc++.h>
using namespace std ; 

class Node{
    public: 
    int data ; 
    Node *next ; 

    Node(int val ){         // constructor 
        data = val ; 
        next = NULL ; 
    }
};

class List {
    Node* head ; 
    Node* tail ; 

public : 
    List(){             // non perameterised constructor 
        head = tail = NULL ; // cause starting linked list is always null, there is no node ; 
    }

    // case : 
    // 1) creat a new node ;
    // 2) head and tain -----> newNode ;// it works when exist at least one node ;
    // 3) head = newNode ; 

    void push_front(int val ){
        Node* newNode = new Node(val) ;// dynamic (new), which helps us creat a dynamic object 
        // Node newNode(val) ; // its is not used caluse , static; delete after function call 

        if(head == NULL ){ // means linked list is void 
            head = tail = newNode ; // assiging same value 
            return ; 
        }
        else {
            newNode-> next = head ; 
            //(*newNode).next = head ;
            // newNOde er vetore duke next pinter er maddome head pointer e store kora ; 

            head = newNode ; 
        }

    }
        void push_back(int val ){
        Node *newNode = new Node(val) ;

        if(head == NULL ){
            head = tail = newNode ; 

        }
        else {
            tail->next = newNode ; 
            tail = newNode ; 
        }
    }

    // node delete means --> connection delete and head note pointer transfer 
    // first step to transfer head node
    //1) for the target node value store another temporarily means point add in another place ;
    //steps : cheek(!void )
    // i) head = head->next ; 
    //ii) temp->next= next ; 
    //iii) delete temp ;
    void pop_front (){
        if(head == NULL ){
            cout << "LL is empty\n" ; 
            return ; 
        }
        Node* temp = head ; 
        head = head->next ; 
        temp->next= NULL ;

        delete temp ;
    }
    //we have to find previous node of tail
    //first to track ( temp->next==tail) ;
    // or , temp-next->next == NULL ;

    void pop_back(){
        if(head == NULL ){
            cout << "LL is empty \n" ;
            return ; 
        }

        Node * temp = head ; 
        while (temp->next != tail){
            temp =temp->next ; 
        }

        temp->next = NULL ; 
        tail = temp ;
    }

    //insert in middle of ll
    // first to create newNode ; 
    void insert( int val , int pos ){
        if(pos<0) {
            cout << "Invlid Position.\n" ;
            return ; 
        } 
        if(pos==0) {
            push_front(val) ;
            return ; 
        }
        Node* temp = head ; // pointing the head note to find pos-1 th node ; 
        for ( int i = 0 ; i<pos-1 ; i++){
            if(temp == NULL ) {
                cout << "Invalid Position.\n" ;   // recheek if we point the temp with null(invalid)
                return ; 
            }
            temp = temp->next ; // too find the position -1 th node ;
        }
        Node* newNode = new Node(val) ;
        newNode->next= temp->next ;
        temp->next = newNode;
    }



    void printLL(){
        Node *temp = head ; 

        while(temp !=NULL){
            cout << temp->data  << "->" ; 
            temp = temp->next ; 
        }
        cout <<"Null" << endl ; 
    }


    int search(int key ){
        Node* temp = head ; 
        
        int idx = 0 ; 

        while(temp !=NULL ){
            if(temp->data == key ) {
                return idx ; 
            }

            temp = temp ->next ; 
            idx++;
        }
        return -1 ; // means the ans dosen'n exist .
    }


};

int main (){
    List ll ;
    ll.push_front(1) ;
    ll.push_front(2) ;
    ll.push_front(3) ;

    // ll.push_back(4);
    // ll.pop_front() ;
    // ll.pop_back() ;

    ll.insert(4,0) ;

    ll.printLL();
    cout << ll.search(2) << endl ; 


    return 0 ; 
}