/*************************************************
 STL CHEAT SHEET FOR DSA (INTERVIEW + CP READY)
 Author: You 😎
**************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <utility>
#include <cmath>
#include <numeric>
using namespace std;

/* =========================
   1️⃣ VECTOR
   ========================= */
void vector_demo() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);          // add element
    v.pop_back();            // remove last
    v.insert(v.begin(), 10); // insert at index
    v.erase(v.begin());      // erase at index

    int size = v.size();
    bool empty = v.empty();

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    for (int x : v) cout << x << " ";
    cout << endl;
}

/* =========================
   2️⃣ PAIR
   ========================= */
void pair_demo() {
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;
}

/* =========================
   3️⃣ STACK (LIFO)
   ========================= */
void stack_demo() {
    stack<int> st;
    st.push(10);
    st.push(20);

    cout << st.top() << endl;
    st.pop();
}

/* =========================
   4️⃣ QUEUE (FIFO)
   ========================= */
void queue_demo() {
    queue<int> q;
    q.push(1);
    q.push(2);

    cout << q.front() << endl;
    q.pop();
}

/* =========================
   5️⃣ PRIORITY QUEUE (Heap)
   ========================= */
void priority_queue_demo() {
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    maxHeap.push(10);
    maxHeap.push(5);

    cout << maxHeap.top() << endl;
}

/* =========================
   6️⃣ SET (Sorted + Unique)
   ========================= */
void set_demo() {
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(5); // ignored

    s.erase(1);

    if (s.find(5) != s.end()) cout << "Found\n";

    for (int x : s) cout << x << " ";
    cout << endl;
}

/* =========================
   7️⃣ UNORDERED SET
   ========================= */
void unordered_set_demo() {
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
}

/* =========================
   8️⃣ MAP (Key → Value, Sorted)
   ========================= */
void map_demo() {
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";

    mp.erase(1);

    for (auto p : mp)
        cout << p.first << " " << p.second << endl;
}

/* =========================
   9️⃣ UNORDERED MAP
   ========================= */
void unordered_map_demo() {
    unordered_map<int, int> ump;
    ump[1]++;
    ump[2]++;
}

/* =========================
   🔟 DEQUE
   ========================= */
void deque_demo() {
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.pop_front();
}

/* =========================
   1️⃣1️⃣ ALGORITHMS
   ========================= */
void algorithm_demo() {
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    bool found = binary_search(v.begin(), v.end(), 3);

    int idx = lower_bound(v.begin(), v.end(), 3) - v.begin();
}

/* =========================
   1️⃣2️⃣ STRING FUNCTIONS
   ========================= */
void string_demo() {
    string s = "hello";

    s.push_back('!');
    s.pop_back();

    reverse(s.begin(), s.end());
    sort(s.begin(), s.end());

    cout << s << endl;
}

/* =========================
   MAIN
   ========================= */
int main() {

    vector_demo();
    pair_demo();
    stack_demo();
    queue_demo();
    priority_queue_demo();
    set_demo();
    unordered_set_demo();
    map_demo();
    unordered_map_demo();
    deque_demo();
    algorithm_demo();
    string_demo();

    return 0;
}
