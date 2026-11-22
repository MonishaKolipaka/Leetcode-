/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int  *result;
 void inorder(struct TreeNode* root,int *returnSize){
    if(root==NULL)
    return;
    inorder(root->left,returnSize);
    result[*returnSize]=root->val;
    (*returnSize)++;
    inorder(root->right,returnSize);
 }

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    result=malloc(100*sizeof(int));
    *returnSize=0;
    inorder(root,returnSize);
    return result;
    

    
}