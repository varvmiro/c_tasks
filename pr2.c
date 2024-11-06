#include <stdio.h>
#include <locale.h>

typedef struct
{
    int sum;
} sum_int;

void func1(sum_int *p)
{
    p->sum = p->sum * 2;
}

sum_int func2(sum_int si)
{
    si.sum = si.sum*2;
    return si;
}

void main()
{
    sum_int sums[5];
    setlocale(LC_ALL, "ru_RU.UTF-8");
    for (int i = 0; i < 5; i++)
    {
        printf("Введите %d число: ", i + 1);
        int user_number;
        scanf("%d", &user_number);
        sums[i].sum = user_number;
        printf("ur num: %d \n", sums[i].sum);
    }
    for (int i = 0; i < 5; i++)
    {
        sum_int *p = &sums[i];
        sums[i] = func2(sums[i]);
        printf("ur new num: %d \n", sums[i].sum);
    }
}