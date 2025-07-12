#include <iostream>
#include <deque>
using namespace std;

int N;

int main() {
    cin >> N;
    int i;
    int temp;
    deque<int> dq;
    for(i = 1; i <= N; i++){
        dq.push_back(i);
    }
    while(dq.size() != 1){
        dq.pop_front();
        temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }


    cout << dq.front() << endl;

    return 0;
}
