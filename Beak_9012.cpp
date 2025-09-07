#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){

        string input;
        cin >> input;
        stack<char> parentheses_stack;
        bool is_vps = true;

        for(int j = 0; j < input.length(); j++){
            if(input[j] == '('){
                parentheses_stack.push('(');

            }else if (input[j] == ')'){
                if(parentheses_stack.empty()){
                    is_vps = false;
                    break;
                } else {
                    parentheses_stack.pop();
                }
            }
        }

        if (!parentheses_stack.empty()) {
            is_vps = false;
        }

        if(is_vps){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }


    return 0;
}