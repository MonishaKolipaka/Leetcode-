/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int leftHt(struct TreeNode* root) {
    int height = 0;
    while (root != NULL) {
        height++;
        root = root->left;
    }
    return height;
}
int rightHt(struct TreeNode* root) {
    int height = 0;
    while (root != NULL) {
        height++;
        root = root->right;
    }
    return height;
}
int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int lh = leftHt(root);
    int rh = rightHt(root);
    if (lh == rh) {
        return (1 << lh) - 1;
    }
    return 1 + countNodes(root->left)
             + countNodes(root->right);
}
