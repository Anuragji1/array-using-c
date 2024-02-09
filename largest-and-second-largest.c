**Largest and Second Largest**

Statement) Largest and Second Largest
You are given an array �

A of �

N integers.
Find the maximum sum of two distinct integers in the array.
Note: It is guaranteed that there exist at least two distinct integers in the array.
Input Format
The first line of input will contain a single integer �
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains single integer �

N — the size of the array.
The next line contains �

N space-separated integers, denoting the array �

A.
Output Format
For each test case, output on a new line, the maximum sum of two distinct integers in the array.

Constraints
1≤�≤1000

1≤T≤1000
2≤�≤105
2≤N≤105
1≤��≤1000
1≤Ai
​≤1000
The sum of �

N over all test cases does not exceed 2⋅105

2⋅105
.
Sample 1:
Input - 4
3
4 1 6
7
3 7 2 1 1 5 3
5
8 2 9 4 9
2
1 2;  Output - 10
12
17
3. 

-------------------------------------------------------------------------------------------
SOLUTION = #include <stdio.h>

int main() {
    int T, N, i;
    long long A[100000], largest, secondLargest, sum;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        for (i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }

        largest = secondLargest = -1; // Initialize them to be smaller than any possible input

        for (i = 0; i < N; i++) {
            // If current element is greater than largest, update both
            if (A[i] > largest) {
                secondLargest = largest;
                largest = A[i];
            } else if (A[i] > secondLargest && A[i] != largest) {
                // If current element is greater than second largest and not equal to largest, update secondLargest
                secondLargest = A[i];
            }
        }

        if (secondLargest == -1) { // If there are no distinct elements, print 0
            printf("0\n");
        } else {
            sum = largest + secondLargest;
            printf("%lld\n", sum);
        }
    }

    return 0;
}
