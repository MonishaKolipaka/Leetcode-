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
 void preorder(struct TreeNode* root,int *returnSize){
    if(root==NULL)
    return;
    result[*returnSize]=root->val;
    (*returnSize)++;
    preorder(root->left,returnSize);
    preorder(root->right,returnSize);
 }

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    result=malloc(100*sizeof(int));
    *returnSize=0;
    preorder(root,returnSize);
    return result;
    

    
}
    
