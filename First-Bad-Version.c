// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
int binarysearch(int low, int high) {
    if (low == high) return low; // Base case: when low meets high, we found the first bad version

    int mid = low + (high - low) / 2; // Correct calculation of mid to avoid overflow

    if (isBadVersion(mid)) {
        return binarysearch(low, mid); // Search in the left half, including mid
    } else {
        return binarysearch(mid + 1, high); // Search in the right half
    }
}

int firstBadVersion(int n) {
   return binarysearch(1,n);
} 