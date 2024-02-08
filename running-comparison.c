**Running Comparison*

Statement) Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for 
�
N days — on the 
�
�
ℎ
i 
th
  day, Alice ran 
�
�
A 
i
​
  meters and Bob ran 
�
�
B 
i
​
  meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 
200
200 meters and Bob ran 
500
500, Alice would be unhappy but Bob would be happy.
If Alice ran 
500
500 meters and Bob ran 
240
240, Alice would be happy and Bob would be unhappy.
If Alice ran 
300
300 meters and Bob ran 
500
500, both Alice and Bob would be happy.
On how many of the 
�
N days were both Alice and Bob happy?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer 
�
N — the number of days.
The second line of each test case contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  — the distances run by Alice on the 
�
N days.
The third line of each test case contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  — the distances run by Bob on the 
�
N days.
Output Format
For each test case, output on a new line the number of days when both Alice and Bob were happy.

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
100
1≤N≤100
1
≤
�
�
,
�
�
≤
1
0
5
1≤A 
i
​
 ,B 
i
​
 ≤10 
5
 
Sample 1:
Input - 4
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200
4
800 399 1400 532
2053 2300 3400 23
5
800 850 900 950 1000
600 800 1000 1200 1400

Output - 1
3
0
5

--------------------------------------------
SOLution :- #include <stdio.h>

int main() {
    int T, N, i;
    long long A[100], B[100];

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        for (i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }

        for (i = 0; i < N; i++) {
            scanf("%lld", &B[i]);
        }

        int happy_days = 0;

        for (i = 0; i < N; i++) {
            if (A[i] * 2 > B[i] && B[i] >= A[i]) {
                happy_days++;
            } else if (B[i] * 2 > A[i] && A[i] >= B[i]) {
                happy_days++;
            }
        }

        printf("%d\n", happy_days);
    }

    return 0;
}

-----------------------------
