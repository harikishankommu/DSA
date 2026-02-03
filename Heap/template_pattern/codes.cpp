//If you see “top / max / min / k frequent / k largest” → THINK HEAP

#include <bits/stdc++.h>
using namespace std;

/*-------------------------------------------------
  1. MAX HEAP (Basic)
--------------------------------------------------*/
void maxHeapDemo() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Max Heap elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

/*-------------------------------------------------
  2. MIN HEAP (Basic)
--------------------------------------------------*/
void minHeapDemo() {
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Min Heap elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

/*-------------------------------------------------
  3. MAX HEAP with PAIR
--------------------------------------------------*/
void maxHeapPairDemo() {
    priority_queue<pair<int,int>> pq;

    pq.push({3, 1});
    pq.push({5, 2});
    pq.push({1, 3});

    cout << "Max Heap Pair (freq, value): ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << endl;
}

/*-------------------------------------------------
  4. MIN HEAP with PAIR
--------------------------------------------------*/
void minHeapPairDemo() {
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    pq.push({3, 1});
    pq.push({5, 2});
    pq.push({1, 3});

    cout << "Min Heap Pair (freq, value): ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << endl;
}

/*-------------------------------------------------
  5. TOP K FREQUENT ELEMENTS (Min Heap Optimized)
--------------------------------------------------*/
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;

    for (int num : nums)
        freq[num]++;

    priority_queue<pair<int,int>>pq;

        for(auto it:freq){
            pq.push({it.second,it.first});
        }

        vector<int>result;
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
}

/*-------------------------------------------------
  MAIN FUNCTION
--------------------------------------------------*/
int main() {

    maxHeapDemo();
    minHeapDemo();
    maxHeapPairDemo();
    minHeapPairDemo();

    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    vector<int> ans = topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}
