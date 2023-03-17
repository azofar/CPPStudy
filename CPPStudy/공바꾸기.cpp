/*
น้มุ 10813

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, M, I, J;
    cin >> N >> M;

    vector<int> basket(N);

    for (int i = 0; i < N; i++) {
        basket[i] = i+1;
    }

    for (int i = 0; i < M; i++) {
        cin >> I >> J;
        swap(basket[I-1], basket[J-1]);
    }

    for (int i = 0; i < N; i++) {
        cout << basket[i] << " ";
    }

    return 0;
}*/