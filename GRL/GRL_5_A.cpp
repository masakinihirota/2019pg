#include <stdio.h>
#include <time.h>
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
typedef long long int          ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;

struct Edge {
    Edge(int arg_to, int arg_cost) {
        to   = arg_to;
        cost = arg_cost;
    }
    int to, cost;
};

struct Info {
    Info(int arg_node_id, int arg_depth) {
        node_id = arg_node_id;
        depth   = arg_depth;
    }
    bool operator<(const struct Info &arg) const { return depth < arg.depth; }

    int node_id, depth;
};

int *        depth_table, *parent, *max_dist;
vector<Edge> G[100000];

void calcDepth(int node_id, int depth, int parent_id) {
    depth_table[node_id] = depth;
    parent[node_id]      = parent_id;
    for (int i = 0; i < G[node_id].size(); i++) {
        if (G[node_id][i].to == parent_id) continue;
        calcDepth(G[node_id][i].to, depth + 1, node_id);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    depth_table = new int[N];
    parent      = new int[N];
    max_dist    = new int[N];

    for (int i = 0; i < N; i++) max_dist[i] = -1;

    int from, to, cost;
    for (int loop = 0; loop < N - 1; loop++) {
        scanf("%d %d %d", &from, &to, &cost);
        G[from].push_back(Edge(to, cost));
        G[to].push_back(Edge(from, cost));
    }

    calcDepth(0, 0, -1);

    priority_queue<Info> Q;

    for (int i = 0; i < N; i++) {
        Q.push(Info(i, depth_table[i]));
    }

    int ans = 0;
    int max1, max2;

    while (!Q.empty()) {
        max1 = 0, max2 = 0;

        for (int i = 0; i < G[Q.top().node_id].size(); i++) {
            if (G[Q.top().node_id][i].to == parent[Q.top().node_id]) continue;

            if (max1 < max_dist[G[Q.top().node_id][i].to] +
                           G[Q.top().node_id][i].cost) {
                max2 = max1;
                max1 = max_dist[G[Q.top().node_id][i].to] +
                       G[Q.top().node_id][i].cost;
            } else if (max2 < max_dist[G[Q.top().node_id][i].to] +
                                  G[Q.top().node_id][i].cost) {
                max2 = max_dist[G[Q.top().node_id][i].to] +
                       G[Q.top().node_id][i].cost;
            }
        }
        ans                       = max(ans, max1 + max2);
        max_dist[Q.top().node_id] = max1;
        Q.pop();
    }

    printf("%d\n", ans);

    return 0;
}
