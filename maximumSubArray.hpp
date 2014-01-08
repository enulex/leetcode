class MaxSubArraySolution {
    public:
        int maxSubArray(int A[], int n) {
            int max = A[0];
            int sum = A[0];

            for (int i = 1; i < n; i++) {
                if (sum <= 0) {
                    sum = A[i];
                } else {
                    sum += A[i];
                }
                if (sum > max) {
                    max = sum;
                }
            }
            return max;
        }
};
