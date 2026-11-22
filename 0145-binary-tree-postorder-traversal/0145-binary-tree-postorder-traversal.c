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
 void postorder(struct TreeNode* root,int *returnSize){
    if(root==NULL)
    return;
    postorder(root->left,returnSize);
    postorder(root->right,returnSize);
    result[*returnSize]=root->val;
    (*returnSize)++;
 }

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    result=malloc(100*sizeof(int));
    *returnSize=0;
    postorder(root,returnSize);
    return result;
    

    
}
    

