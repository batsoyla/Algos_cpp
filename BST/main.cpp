#include <iostream>
using namespace std;

class TreeNode{
    public:
        //attributes
        int data;
        TreeNode *right;
        TreeNode *left;
        //Constructors
        TreeNode(){
            data=0;
            left = nullptr;
            right = nullptr;
        }
        TreeNode(int d){
            data = d;
            left = nullptr;
            right = nullptr;
        }
        
};

class BST{
    public:
        //attributes
        TreeNode *root;
    public:
    //Methods
        bool isTreeEmpty()//check if empty
        {
            if (root == nullptr)
                return true;
            else
                return false;            
        }
        //search item
        TreeNode* search(TreeNode *root,int value);
        //insert a new node
        void insert(TreeNode *new_Node){

            if (root == nullptr)
            {
                root = new_Node;
                cout<<"The new Node has been inserted successfully!"<<endl;
            }
            else
            {
                cout<<"root is not null"<<endl;
                cout<<root<<endl;
                /*TreeNode *temp = root;
                while(temp != NULL)
                {
                    if(new_Node->data == temp->data)
                    {
                        cout<<"Value already exists, duplicates are not permitted!"<<endl;
                        return;
                    }
                    else if((new_Node->data < temp->data) && (temp->left ==NULL))
                    {
                        temp->left = new_Node;
                        cout<<"Value inserted to the left !"<<endl;
                        break;
                    }
                    else if ((new_Node->data < temp->data) && (temp->right == NULL))
                    {
                        temp->right = new_Node;
                        cout<<"Value inserted to the right!"<<endl;
                        break;
                    }
                    else if(new_Node->data < temp->data)
                    {
                        temp = temp->left;
                    }*/
              // }
            }
        }
        //
        TreeNode* minValue(TreeNode *node);
        //delete Node
        TreeNode* deleteNode(TreeNode *node, int value);   
    
        //depth first traversal 
        void printPreorder(TreeNode *root);
        void printPostorder(TreeNode *root);
        void printInorder(TreeNode *root);
        //breadth first traversal
        void printLevel(TreeNode *root);
};
int main (){
    //Create a menu driven program
    BST obj;
    int choice=1;
    int newdata;
    
    while(choice != 0){
        cout<<"What BST-Operation would you like to perform?\n"
        <<"Please choose one of the following:"<<endl;
        cout <<"Press 1 to insert a Node."<<endl;
        cout <<"Press 2 to search for a Node."<<endl;
        cout <<"Press 3 to delete a Node."<<endl;
        cout <<"Press 4 to Print data of the BST."<<endl;
        cout <<"Press 5 to delete the BST."<<endl;
        cout <<"Press 0 to exit."<<endl;
        //insert value of choice
        cin>>choice;
        TreeNode *newNode = new TreeNode();
        
        switch(choice){
            case 0:
            cout<<"Exiting the Program!"<<endl;
                break;
            case 1:
                cout<<"Inserting a Node:"<<endl;
                cout<<"Insert the integer data for the Node"<<endl;
                cin>>newdata;
                newNode->data=newdata;
                obj.insert(newNode);
                cout<<"0000000000000000000"<<endl;
                cout<<endl;
                break;
            case 2:
                cout<<"Searching a Node:"<<endl;
                break;
            case 3:
                cout<<"Deleting a Node:"<<endl;
                break;
            case 4:
                cout<<"Printing BST:"<< endl;
                break;
            case 5:
                cout <<"Deleting the BST"<<endl;
            default:
                cout<<"You have isert value please try again!"<<endl;
        }
        
        
        
    }
    
    return 0;
}