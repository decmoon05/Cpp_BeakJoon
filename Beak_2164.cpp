#include <iostream>
#include <list>

int main(){
    int N;
    std::cin >> N;
    std::list<int> card_stack;

    for(int i = 1; i <= N; i++){
        card_stack.push_back(i);
    }
    while(card_stack.size() > 1){
        card_stack.pop_front();
        int sec_front = card_stack.front();
        card_stack.pop_front();
        card_stack.push_back(sec_front);
    }
    std::cout << card_stack.front();

    return 0;
}