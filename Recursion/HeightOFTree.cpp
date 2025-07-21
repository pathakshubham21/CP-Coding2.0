#include <iostream>
using namespace std;

int HeightOFTree(Node* root)
{
        if(root== NULL)
        {
            return 0;
        }

        int l= HeightOFTree(root->left);
        int r = HeightOFTree(root->right);
        return 1+l+r;

}