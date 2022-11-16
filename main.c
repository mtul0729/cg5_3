#include <stdio.h>

int main()
{
    int a[10001];
    int b[10001];
    int c[101];
    //int n; scanf("%d",&n);
    int i,j;
    for( i=1;i<=n;i++) scanf("%d",&a[i]);
    //int m;scanf("%d",&m);
    for( i=1;i<=m;i++) scanf("%d",&b[i]);
    int cnt=0;

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i]==b[j]) { // 有相同的记录
                cnt++;
                c[cnt]=a[i];
                break;
            }
        }
    }
    int t;

    for(i=1;i<=cnt-1;i++)   //非优化的冒泡排序
    {
        for(j=1;j<=cnt-1;j++)
        {
            if(c[j]<c[j+1])
            {
                t=c[j+1];
                c[j+1]=c[j];
                c[j]=t;
            }
        }
    }

    for(i=1;i<=cnt;i++) printf("%d ",c[i]);  //输出
    return 0;
}