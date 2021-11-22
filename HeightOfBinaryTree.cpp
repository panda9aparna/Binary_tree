int height(BinaryTreeNode<int>* root) {
    // Write our code here
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 1;
    
    int hL = height(root->left);
    int hR = height(root->right);
    
    if(hL > hR)
        return hL + 1;
    else
        return hR + 1;
    
}
