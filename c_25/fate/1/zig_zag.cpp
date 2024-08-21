#include <iostream>
#include <vector>

using namespace std;

vector<int> zigZagTraversal(vector<vector<int>>& mat, int N, int M) {
    vector<int> result;

    if (mat.empty()) return result;

    for (int i = 0; i < N + M - 1; i++) {
        if (i % 2 == 0) {
            // Traverse in the up direction
            int x = min(i, N - 1);
            int y = i - x;

            while (x >= 0 && y < M) {
                result.push_back(mat[x][y]);
                x--;
                y++;
            }
        } else {
            // Traverse in the down direction
            int y = min(i, M - 1);
            int x = i - y;

            while (y >= 0 && x < N) {
                result.push_back(mat[x][y]);
                x++;
                y--;
            }
        }
    }

    return result;
}

int main() {
    int N = 5, M = 5;
    vector<vector<int>> mat = {
        { 1,  2,  3,  4,  5 },
        { 6,  7,  8,  9, 10 },
        {11, 12, 13, 14, 15 },
        {16, 17, 18, 19, 20 },
        {21, 22, 23, 24, 25 }
    };

    vector<int> result = zigZagTraversal(mat, N, M);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
