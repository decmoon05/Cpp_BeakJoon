#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> circle_queue;
    for(int i = 1; i <= n; i++){
        circle_queue.push(i);
    }

    int k;
    cin >> k;
    vector<int> result;

    while(!circle_queue.empty()){
        for(int i = 1 ; i < k; i++){
            circle_queue.push(circle_queue.front());
            circle_queue.pop();
        }
        result.push_back(circle_queue.front());
        circle_queue.pop();
    }

    cout << "<";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }
    cout << ">";

    return 0;
}