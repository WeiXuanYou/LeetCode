/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    struct TreeNode* node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    if(numsSize == 0)
        return NULL;
    
    node->left = sortedArrayToBST(nums,numsSize/2);
    node->val = nums[numsSize/2];
    node->right = sortedArrayToBST(nums+numsSize/2 + 1,numsSize - (numsSize/2) - 1 );

    return node;
}
