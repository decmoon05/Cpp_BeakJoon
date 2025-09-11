#include <iostream>
#include <string>

using namespace std;

int stack_arr[10000];
int top_index = -1;

void push(int x) {
    stack_arr[++top_index] = x;
}

int empty() {
    if (top_index == -1) {
        return 1;
    } else {
        return 0;
    }
}

int pop() {
    if (empty()) {
        return -1;
    }
    int value = stack_arr[top_index];
    top_index--;
    return value;
}

int size() {
    return top_index + 1;
}

int top() {
    if (empty()) {
        return -1;
    }
    return stack_arr[top_index];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string input_str;
        cin >> input_str;

        if (input_str == "push") {
            int input_num;
            cin >> input_num;
            push(input_num);
        } else if (input_str == "pop") {
            cout << pop() << "\n";
        } else if (input_str == "size") {
            cout << size() << "\n";
        } else if (input_str == "empty") {
            cout << empty() << "\n";
        } else if (input_str == "top") {
            cout << top() << "\n";
        }
    }

    return 0;
}