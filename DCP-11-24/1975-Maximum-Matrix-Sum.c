long long maxMatrixSum(int** matrix, int matrixSize, int* matrixColSize) {
    long long sum = 0;
    int minAbs = INT_MAX; 
    int negCount = 0;

    // Traverse the matrix
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            int val = matrix[i][j];
            sum += abs(val); // Add absolute value to sum
            if (val < 0) negCount++; // Count negatives
            minAbs = fmin(minAbs, abs(val)); // Track smallest absolute value
        }
    }

    // If odd negatives, subtract twice the smallest absolute value
    if (negCount % 2 != 0) {
        sum -= 2 * minAbs;
    }

    return sum;
}
