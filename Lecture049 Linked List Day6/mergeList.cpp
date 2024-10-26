/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

// void solve(Node<int>* first, Node<int>* second) {
    
    
//     Node* curr1 = first;
//     Node* next1 = curr1 -> next;
    
//     Node* curr2 = second;
//     Node* next2 = curr2 -> next;
    
//     while(next1 != NULL && curr2 != NULL) {
        
//         if( (curr2 -> data >= curr1 -> data ) 
//            && ( curr2 -> data <= next1 -> data)) {
            
//             curr1 -> next = curr2;
//             curr2 -> next = next1;
//             curr1 = curr2;
//             curr2 = next2;
//         }
//         else {
            
//         }
        
        
//     }
    
    
// }


Node<int>* solve(Node<int>*f,Noed<int>*s){
    if(f==NULL){
        return s;
    }
    if(s==NULL){
        return f;
    }
    Node<int>* result = NULL;
    if(f->val <=s->val){
        result = f;
        result->next = solve(f->next,s);
    }
    else{
        result = s;
        result->next = solve(f,s->next);
    }
    return result;
}


Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    return solve(first,second);
    
    
}
