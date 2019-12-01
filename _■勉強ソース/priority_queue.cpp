#include <bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(8);
    pq.push(3);
    pq.push(5);

    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " ";
    pq.pop();
    pq.push(11);
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " " << endl;
    pq.pop();

    return 0;
}
