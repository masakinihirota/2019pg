#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)

struct Node {
    int   key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

Node *find(Node *u, int k) {
    while (u != NIL && k != u->key) {
        if (k < u->key)
            u = u->left;
        else
            u = u->right;
    }
    return u;
}

void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z        = (Node *)malloc(sizeof(Node));
    z->key   = k;
    z->left  = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    z->parent = y;
    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void inorder(Node *u) {
    if (u == NIL) return;
    if (u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main() {
    int    n, i, x;
    string com;
    cin >> n;

    rep(i, n) {
        cin >> com;
        if (com == "find") {
            cin >> x;
            Node *t = find(root, x);
            if (t != NIL) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else if (com == "insert") {
            cin >> x;
            insert(x);
        } else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}
