#include <iostream>
#include <cmath>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    double cut_avg = n*0.15;
    int round_avg = round(cut_avg);
    
    deque<int> input_list;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        input_list.push_back(input);    
    }
    sort(input_list.begin(), input_list.end());

    for(int i = 0; i < round_avg; i++){
        input_list.pop_back();
        input_list.pop_front();
    } 

    double sum = 0;
    for(int i = 0; i < input_list.size(); i++){
        sum += input_list[i];
    }
    int avg = round(sum/input_list.size());

    cout << avg;


    return 0;
}