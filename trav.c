#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* createNode(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
}
void inorder(struct Node* r) {
    if (r == NULL) return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
}
void preorder(struct Node* r) {
    if (r == NULL) return;
    printf("%d ", r->data);
    preorder(r->left);
    preorder(r->right);
}
void postorder(struct Node* r) {
    if (r == NULL) return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->data);
}
int main() {
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}
    
