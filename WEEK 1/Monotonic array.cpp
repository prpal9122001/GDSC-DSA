class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increase = false, decrease = false;
        for (int i = 0; i + 1 < A.size(); ++i) {
            if (A[i] < A[i + 1]) {
                increase = true;
            } else if (A[i] > A[i + 1]) {
                decrease = true;
            }
        }
        return !increase || !decrease;
    }
};