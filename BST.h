class BST
{
    private:
    
        struct node{
            int key;
            node* left;
            node* right;
        };
        
        node* root;
        node* CreateLeaf(int key);
        void addLeafPrivate(int key, node* Ptr);
        void PrintInOrderPrivate(node* Ptr);
        node* ReturnNodePrivate(int key, node* Ptr);
        int FindPrivateSmallestKey(node* Ptr);
        void RemovePrivateNode(int key, node* parent);
        void RemoveRootMatch();
        void RemoveMatch(node* parent, node*match, bool left);
        void RemoveSubtree(node* Ptr);
        
    public:
        BST(); //Constructor
        ~BST(); // Deconstructor
        void addLeaf(int key);
        void PrintInOrder();
        node* ReturnNode(int key);
        int ReturnRootKey();
        void PrintChildren(int key);
        int FindSmallestKey();
        void RemoveNode(int key);
};