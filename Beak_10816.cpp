#include <iostream>

using namespace std;
int arr_index[20000001];
const int OFFSET = 10000000;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N;

    for(int i = 0; i < N; i++){
        int input;
        cin >> input;
        arr_index[input + OFFSET]++;
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        int input;
        cin >> input;
        cout << arr_index[input + OFFSET] << " "; 
    }
    return 0;
}