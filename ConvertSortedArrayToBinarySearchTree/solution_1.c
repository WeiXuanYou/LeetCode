/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode TNode;
TNode* BST(int* nums,int start,int end){
    TNode* bst = (TNode*)malloc(sizeof(TNode));
    if(start >= end)
        return NULL;
    int mid = (start + end)/2; 
    bst->left = BST(nums,start,mid);
    bst->val = nums[mid];
    bst->right = BST(nums,mid+1,end);
    return bst;
}
TNode* sortedArrayToBST(int* nums, int numsSize){
    return BST(nums,0,numsSize);
}
