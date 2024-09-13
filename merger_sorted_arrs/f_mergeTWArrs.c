#include <stdio.h>
#include <stdlib.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    // Start from the end of both arrays
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    // Merge nums1 and nums2 from the end to the beginning
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main(void)
{
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
    int m = 3;
    int n = 3;

    printf("Before merging:\n");
    printf("nums1: ");
    for (int i = 0; i < nums1Size; i++)
    {
        printf("[%d] ", nums1[i]);
    }
    printf("\nnums2: ");
    for (int j = 0; j < nums2Size; j++)
    {
        printf("[%d] ", nums2[j]);
    }

    printf("\n\nMerging arrays...\n");
    merge(nums1, nums1Size, m, nums2, nums2Size, n);

    printf("\nAfter merging:\n");
    printf("nums1: ");
    for (int i = 0; i < nums1Size; i++)
    {
        printf("[%d] ", nums1[i]);
    }
    printf("\n");

    return 0;
}
