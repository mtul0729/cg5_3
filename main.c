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
    int count = 0;
    for (int i = 0; i < n[0]; i++) {  //取交集并记录
        for (int j = 0; j < n[1]; j++) {
            if (a[0][i] == a[1][j]) {
                o[count] = a[0][i];
                count++;              //记录得count个元素
            }
        }
    }

    for (int i = 0; i < count; i++)         //冒泡排序
        for (int j = 0; j < count - i; j++)
        {
            if (o[j] > o[j + 1])
            {
                int t;
                t = o[j];
                o[j] = o[j + 1];
                o[j + 1] = t;
            }
        }
    for(int i = 0;i < count;i++){
        printf("%d ",o[i]);
    }
    return 0;
}