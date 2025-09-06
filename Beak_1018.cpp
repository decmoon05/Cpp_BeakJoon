#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main(){
    int N, M;
    std::cin >> N;
    std::cin >> M;
    int min_repaint =64;

    char arr[51][51];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int board_min, current_count;

    for(int i = 0; i <= N-8; i++){
        for(int j =0; j <= M-8; j++){
            int repaint_W = 0;
            int repaint_B = 0;

            for(int row = i; row < i + 8; row++){
                for(int col = j; col < j + 8; col++){
                    if((row+col) % 2 == 0){//짝
                        if(arr[row][col] != 'W') repaint_W++; //W시작
                        if(arr[row][col] != 'B') repaint_B++; //B시작
                    } else{//홀
                        if(arr[row][col] != 'B') repaint_W++; //W시작
                        if(arr[row][col] != 'W') repaint_B++; //B시작
                    }
                }
            }
            min_repaint = std::min(min_repaint, std::min(repaint_B, repaint_W));
            
        }
    }

    std::cout << min_repaint << std::endl;

    return 0;
}