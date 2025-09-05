#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


struct Man
{
    int age;
    std::string name;
};


int main(){
    int N;
    std::cin >> N;
    std::vector<Man> Man_List(N);

    for(int i = 0; i < N; i++){
        std::cin >> Man_List[i].age;
        std::cin >> Man_List[i].name;
    }

    std::stable_sort(Man_List.begin(), Man_List.end(), [](const Man& a, const Man& b) {
        return a.age < b.age;
    });

    for (int i = 0; i < N; ++i) {
        std::cout << Man_List[i].age << " " << Man_List[i].name << "\n";
    }

    return 0;
}

