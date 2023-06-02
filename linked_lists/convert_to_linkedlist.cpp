    unordered_set<int> s;
    vector<int> vec;
    Node* cur=head;
    while(cur)
    {
        
        //IMP
        if(s.insert(cur->data).second) //insert success means not a duplicate 
        vec.push_back(cur->data);
        
        cur=cur->next;
    }
    
    //VECTOR -> LL
    //2 nodes method

    Node* h=NULL;
    Node* t=NULL;
    
    for(int i=0;i<vec.size();i++)
    {
        Node* tt = new Node(vec[i]);
        if(h==NULL)
        {
            h=tt;
            t=tt;
        }
        else
        {
            t->next=tt;
            t=tt;
        }
    }

    return h;


    //SOLO NODE

    Node* curr = new Node(1);
    Node* newhead = curr;

    for(auto i: vec)
    {
        Node* tt = new Node(i);
        curr->next = tt;
        curr=tt;
    }

    return newhead->next; //IMP