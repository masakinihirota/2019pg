#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

struct Node {
    bool operator<(const struct Node &arg) const {
        return weight < arg.weight;
    };
    int from, to, weight;
};

int parent[10000], height[10000];

int getParent(int id) {
    if (parent[id] == id)
        return id;
    else {
        return parent[id] = getParent(parent[id]);
    }
}

bool isSame(int a, int b) { return getParent(a) == getParent(b); }

void unite(int a, int b) {
    int a_parent = getParent(a);
    int b_parent = getParent(b);

    if (a_parent == b_parent) return;

    if (height[a_parent] > height[b_parent]) {
        parent[b_parent] = a_parent;
    } else {
        if (height[a_parent] == height[b_parent]) height[b_parent]++;
        parent[a_parent] = b_parent;
    }
}

int main() {
    int V, E;

    scanf("%d %d", &V, &E);
    Node nodes[E];

    for (int i = 0; i < V; i++) {
        parent[i] = i;
        height[i] = 0;
    }

    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &nodes[i].from, &nodes[i].to, &nodes[i].weight);
    }

    sort(nodes, nodes + E);

    int sum = 0;

    for (int i = 0; i < E; i++) {
        if (!isSame(nodes[i].from, nodes[i].to)) {
            sum += nodes[i].weight;
            unite(nodes[i].from, nodes[i].to);
        }
    }

    printf("%d\n", sum);

    return 0;
}
