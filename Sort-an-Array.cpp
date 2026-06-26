1class Solution {
2public:
3    void heapify(vector<int>& arr, int n, int i){
4
5    // Initialize largest as root
6    int largest = i;
7
8    // left index = 2*i + 1
9    int l = 2 * i + 1;
10
11    // right index = 2*i + 2
12    int r = 2 * i + 2;
13
14    // If left child is larger than root
15    if (l < n && arr[l] > arr[largest])
16        largest = l;
17
18    // If right child is larger than largest so far
19    if (r < n && arr[r] > arr[largest])
20        largest = r;
21
22    // If largest is not root
23    if (largest != i) {
24        swap(arr[i], arr[largest]);
25
26        // Recursively heapify the affected sub-tree
27        heapify(arr, n, largest);
28    }
29}
30
31// Main function to do heap sort
32void heapSort(vector<int>& arr){
33    int n = arr.size();
34
35    // Build heap (rearrange vector)
36    for (int i = n / 2 - 1; i >= 0; i--)
37        heapify(arr, n, i);
38
39    // One by one extract an element from heap
40    for (int i = n - 1; i > 0; i--) {
41
42        // Move current root to end
43        swap(arr[0], arr[i]);
44
45        // Call max heapify on the reduced heap
46        heapify(arr, i, 0);
47    }
48}
49    vector<int> sortArray(vector<int>& nums) {
50        heapSort(nums);
51        return nums;
52    }
53};