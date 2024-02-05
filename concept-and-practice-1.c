**Rearrange Code**

Statement) Rearrange Code
Chef visited a grocery store for fresh supplies.
There are 
�
N items in the store where the 
�
�
ℎ
i 
th
  item has a freshness value 
�
�
A 
i
​
  and cost 
�
�
B 
i
​
 .

Chef has decided to purchase all the items having a freshness value greater than equal to 
�
X.
Find the total cost of the groceries Chef buys.

Assume the following

Freshness values are given as the list A
Costs are given as the list B
Rearrange the following code
int total_cost = 0;
int i = 0;
        total_cost = total_cost + B[i];
printf("%d", total_cost);
while (i < N) {
    i = i + 1;
    if (A[i] >= X) {
    }
}

--------------------------------------------------------------------------------------------------
  SOLUTION = int total_cost = 0;
int i = 0;
while (i < N) {
    if (A[i] >= X) {
        total_cost = total_cost + B[i];
    }
    i = i + 1;
}
printf("%d", total_cost);
