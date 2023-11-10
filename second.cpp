#include <stdio.h>
int waitingtimerobin(int *job, int *run, int n, int tq)
{
    int j, count, time, remain, flag = 0;
    int wait_time = 0, turnaround_time = 0, rt[10];
    remain = n;
    for (count = 0; count < n; c++)
    {
        rt[count] = run[count];
    }
    for (time = 0, count = 0; remain != 0;)
    {
        if (rt[count] <= tq && rt[count] > 0)
        {
            time += rt[count];
            rt[count] = 0;
            flag = 1;
        }
        else if (rt[count] > 0)
        {
            rt[count] -= time_quantum;
            time += time_quantum;
        }
        if (rt[count] == 0 && flag == 1)
        {
            remain--;
            wait_time += time - job[count] - run[count];
            flag = 0;
        }
        if (count == n - 1)
            count = 0;
        else if (job[count + 1] <= time)
            count++;
        else
            count = 0;
    }
    printf("waiting time %f", wait_time * 1.0 / n);
    return 0;
}

int main()
{
    int ja[], at[];
    int n, tq;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &ja[i], &at[i]);
    }
    scanf("%d", &tq);
    int *cellsptr = ja;
    int *cellsptr1 = at;
    waitingtimerobin(cellsptr, cellsptr1, n, tq);
    return 0;
}