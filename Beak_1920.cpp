#include <iostream>

using namespace std;

int main(){
    int N, M;
    int arr_input;
    cin >> N;

    bool N_exist[100001] = {false, };
    

    for(int i = 0; i < N; i++){
        cin >> arr_input;
        N_exist[arr_input] = true;
    }
    cin >> M;

    for(int i = 0; i < M; i++){
        cin >> arr_input;
        cout << N_exist[arr_input] << endl;
    }

    return 0;
}