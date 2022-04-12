#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way
struct node{
    int data, key;
    node* next;
    node* prev;
    node( int k, int x){
        key = k;
        data=x;
        next=NULL;
        prev=NULL;
    }
}*head=NULL,*tail=NULL;

class LRUCache
{
    private:

    public:
    int capacity;
    int count;
    unordered_map<int,node*>Map;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
       head = tail = NULL;
        capacity=cap;
        count=0;
    }

    //Function to return value corresponding to the key.
    int get(int key)
    {
        if( Map.find(key) == Map.end() )
        {
            return -1;
        }
        set( key, Map[key]->data );
        return  Map[key]->data;
    }

    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if( Map.find(key) == Map.end() ){
            if( head == NULL){
               head=new node( key, value);
               Map[key]=head;
               tail=head;

             }
             else{
                node* temp=new node(key, value);
                temp->next=head;
                head->prev=temp;
                head=temp;
                Map[key]=temp;
             }
             count++;
             if( count > capacity ){
               count--;

               Map.erase( tail->key );
               node* temp = tail;
               tail=tail->prev;

               delete (temp);
               if( tail )
                   tail->next=NULL;

               if( capacity == 1 )
                 tail=head;
             }
        }
        else{

            if( Map[key] == head ){
               head->data=value;
            }
            else{

                if( tail == Map[key] )
                    tail = tail->prev;

                Map[key]->prev->next=Map[key]->next;
                if( Map[key]->next )
                    Map[key]->next->prev=Map[key]->prev;

                Map[key]->prev=NULL;
                head->prev = Map[key];
                Map[key]->next=head;

                head=Map[key];

                head->data = value;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
