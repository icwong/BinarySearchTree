#include <iostream>
#include <cstdlib>

#include "BST.cpp"

using namespace std;

int main(){
    
    int TreeKeys[5] = {5,6,1,3,9};
    int input = 0;
    BST myTree;
    
    for(int i=0; i<5; i++){
        myTree.addLeaf(TreeKeys[i]);
    }
    
    myTree.PrintInOrder();
    
   
   while (input != -1){
       cout << "Delete Node: ";
       cin >> input;
       {
           if (input != -1){
               cout << endl;
               myTree.RemoveNode(input);
               myTree.PrintInOrder();
               cout << endl;
           }
       }
   }
   
   
   
    return 0;
    
    
    
    
}
