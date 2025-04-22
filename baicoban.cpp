#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& arr, int K) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == K)
            return mid + 1; // Trả về vị trí tính từ 1
        else if (arr[mid] < K)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Không tìm thấy
}

int main() {
    int T;
    cin >> T; // Số lượng test case
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        int result = binarySearch(A, K);
        if (result != -1)
            cout << result << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}