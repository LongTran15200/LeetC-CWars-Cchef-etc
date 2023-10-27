// Time: O(M + N)
// Space: O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int M = A.size(), N = B.size(), a = 0, b = 0;
        auto getMin = [&]() {
            int ans;
            if (b >= N || (a < M && A[a] <= B[b])) ans = A[a++];
            else ans = B[b++];
            return ans;
        };
        for (int i = 0; i < (M + N - 1) / 2; ++i) getMin();
        if ((M + N) % 2) return getMin();
        return (getMin() + getMin()) / 2.;
    }
};
