#include <stdio.h>

using namespace std;

struct Node {
    Node() { left_child = right_child = parent = -1; };
    int left_child, right_child, parent;
};

void preORDER(Node order[], int id) {
    printf(" %d", id);
    if (order[id].left_child != -1) preORDER(order, order[id].left_child);
    if (order[id].right_child != -1) preORDER(order, order[id].right_child);
}

void inORDER(Node order[], int id) {
    if (order[id].left_child != -1) inORDER(order, order[id].left_child);
    printf(" %d", id);
    if (order[id].right_child != -1) inORDER(order, order[id].right_child);
}

void postORDER(Node order[], int id) {
    if (order[id].left_child != -1) postORDER(order, order[id].left_child);
    if (order[id].right_child != -1) postORDER(order, order[id].right_child);
    printf(" %d", id);
}

int main() {
    int n, id, left, right, root_id;
    scanf("%d", &n);
    Node order[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &id, &left, &right);
        if (left != -1) {
            order[id].left_child = left;
            order[left].parent   = id;
        }
        if (right != -1) {
            order[id].right_child = right;
            order[right].parent   = id;
        }
    }

    for (root_id = 0; root_id < n; root_id++) {
        if (order[root_id].parent == -1) break;
    }

    printf("Preorder\n");
    preORDER(order, root_id);
    printf("\n");

    printf("Inorder\n");
    inORDER(order, root_id);
    printf("\n");

    printf("Postorder\n");
    postORDER(order, root_id);
    printf("\n");
}
