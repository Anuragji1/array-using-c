**Rearrange Code MCQ**

Statement MCQ) Rearrange the following code
i = 0;
one_streak = 0;
int temp;
        temp = temp + 1;
    while (sequence[i] > 0) {
    temp = 0;
while (i < n) {
    if (one_streak < temp) {
    i = i + 1;
        i = i + 1;
        if (i == n) {
            break;
        one_streak = temp;
        }
    }
    }
}

---------------------------------
SOLUTION = i = 0;
one_streak = 0;
int temp;
while (i < n) {
    temp = 0;
    while (sequence[i] > 0) {
        temp = temp + 1;
        i = i + 1;
        if (i == n) {
            break;
        }
    }
    if (one_streak < temp) {
        one_streak = temp;
    }
    i = i + 1;
}
