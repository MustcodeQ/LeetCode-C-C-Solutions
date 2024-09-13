#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *root = NULL;
struct Node *GetNewNode(int data)
{
    struct Node *temp = (struct Node *)(malloc(sizeof(struct Node)));
    (*temp).data = data;
    (*temp).left = NULL;
    (*temp).right = NULL;
    return temp;
}

struct Node *insert(struct Node *root, int data)
{
    struct Node *Newode = GetNewNode(data);

    if (root == NULL)
    {
        return Newode;
    }
    if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

struct Node *output(struct Node *current)
{
    if (current != NULL)
    {
        output(current->left);
        printf(" [%d] ", current->data);
        output(current->right);
    }

    return current;
}

struct Node *search(struct Node *current, int keyValue)
{
    if (current != NULL && current->data == keyValue)
    {
        return current;
    }
    else if (current->data < keyValue)
    {
        return search(current->right, keyValue);
    }
    else if (current->data > keyValue)
    {
        return search(current->left, keyValue);
    }
}
int main(void)
{
    printf("exe\n");
    root = insert(root, 21);
    insert(root, 33);
    insert(root, 12);
    insert(root, 90);
    output(root);
    printf("\n");
    return 0;
}