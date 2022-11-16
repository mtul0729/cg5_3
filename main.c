#include <stdio.h>
int main()
{
    int a[2][20], o[20];


    int n[2];
    for (int i = 0;; i++)
    {
        scanf("%d", &a[0][i]);
        if (a[0][i] == -1)
        {
            n[0] = i;
            break;
        }
    }
    for (int i = 0;; i++)
    {
        scanf("%d", &a[1][i]);
        if (a[1][i] == -1)
        {
            n[1] = i;
            break;
        }
    }

    /*
    for(int i = 0;i < 40;i++)a[0][i]=-1;
    for(int i=0,j=0;i<2;)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]!=-1)j++;
        else i++;
    }
     */
    int k = 0;
    for (int i = 0; i < 20; i++) {
        if(a[0][i]==-1)break;
        for (int j = 0; j < 20; j++) {
            if (a[0][i] == a[1][j]) {
                o[k] = a[0][i];
                k++;
            }
            if(a[1][i]==-1)break;
        }
    }
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k - i; j++)
        {
            int t;
            if (o[j] > o[j + 1])
            {
                t = o[j];
                o[j] = o[j + 1];
                o[j + 1] = t;
            }
        }
    for(int i = 0;i < k;i++)printf("%d ",o[i]);
    return 0;
}