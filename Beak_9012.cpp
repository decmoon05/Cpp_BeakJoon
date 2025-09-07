#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    stack<char> parentheses_stack;

    for(int i = 0; i < N; i++){
        string input;
        cin >> input;
        for(int j = 0; j < input.length(); j++){
            if(input[j] == '('){
                parentheses_stack.push('(');
            }else if (input[j] == ')'){
                if(parentheses_stack.empty()){
                    cout << "NO" << endl;
                    break;
                } else {
                    parentheses_stack.pop();
                }
            }
        }
        if(parentheses_stack.empty()){
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
        
    }


    return 0;
}