#include <stdio.h>
#include <locale.h>
const int n = 5;
int main()
{
    setlocale(LC_CTYPE, "");

    float a[n];
    float negatives[n];
    int i,n1=0,n2=0;
    int negativesCount = 0;
    for (i=0; i<n; i++)
        scanf("%f", &(a[i]));

    for (i=0; i<n; i++)
    {
        if (i%2 == 0)
        {
            if (a[i]>=0) n1++;
            else
            {
                n2++;
                negatives[negativesCount++] = a[i];
            }
        }
        if (i%2 == 1)
        {
            if (a[i]<0)
            {
                n1++;
                negatives[negativesCount++] = a[i];
            }
            else n2++;
        }
        if (n == n1 || n == n2)
        {
            printf("Отрицательные и положительные элементы чередуются. Выводим массив целиком.\n");
            for (i=0; i<n; i++)
                printf("\n%f", a[i]);
            return 0;
        }
    }
    printf("Отрицательные и положительные элементы не чередуются. Новый массив с отрицательными элементами:\n");
    for (int i = 0; i < negativesCount; i++)
    {
        printf("%f\n", negatives[i]);
    }

    return 0;
}
