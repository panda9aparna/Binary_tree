Input Format:
The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.
Output Format:
The only line of output prints the mirrored tree in a level-wise order. 
Each level will be printed on a new line. Elements printed at each level will be separated by a single line.


Sample Input 1:
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 1:
1 
3 2 
7 6 5 4

Sample Input 2:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 2:
5 
6 10 
3 2 
9

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL)
        return;
    
    BinaryTreeNode<int>* temp;
    temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    return;
}

