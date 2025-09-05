#include <iostream>
#include <vector>
#include <algorithm>
bool appeared[2000001] = {false,};
const int OFFSET = 1000000;

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    int input;
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        appeared[input + OFFSET] = true;
    }

    
    for (int i = 0; i <= 2000000; i++) { 
        if (appeared[i]) {        
            std::cout << i - OFFSET << '\n';
        }
    }
    return 0;
}