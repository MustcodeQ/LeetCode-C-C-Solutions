#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *sortedarrHelper(int *nums, int left, int right)
{
    if (left > right)
    { // Correct base case
        return NULL;
    }

    int mid = left + (right - left) / 2;
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = sortedarrHelper(nums, left, mid - 1);   // Correctly pass `nums`
    root->right = sortedarrHelper(nums, mid + 1, right); // Correctly pass `nums`
    return root;
}

struct TreeNode *sortedArrayToBST(int *nums, int numsSize)
{
    return sortedarrHelper(nums, 0, numsSize - 1);
}

int main(void)
{
}