/* #include <iostream>

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

    정수 제한이 10만인 줄 알았는데 입력 N,M이 10만 이였음 인덱스 매핑으로 못 품
} */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) {
        int target;
        cin >> target;

        if (binary_search(A.begin(), A.end(), target)) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}