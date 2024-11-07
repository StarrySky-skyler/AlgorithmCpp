/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/11/3 下午4:53
* @version: 1.0
* @description: 
********************************************************************************/
#include<algorithm>
#include<iostream>
#include<cstdio>
#define re register
#define ll long long
using namespace std;
ll n,m,sum,ans,a[2000001];          //硬币数组
inline ll qread()
{
    char c=getchar();ll num=0,f=1;
    for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
    for(;isdigit(c);c=getchar()) num=num*10+c-'0';
    return num*f;
}
int main()
{
    n=qread(),m=qread();
    for(re int i=1;i<=n;++i)
        a[i]=qread();
    a[n+1]=m;
    sort(a+1,a+1+n+1);             //让硬币从小到大排序，为的是下面的判断。。
    if(a[1]!=1)
    {
        printf("No answer!!!\n");   //没有面额为1的直接输出No answer！！！
        return 0;                   //直接退出程序。
    }
    for(re int i=1;i<=n;++i)
    {
        while(sum<a[i+1]-1)          //取最大值，看不懂的话上面有例子。
        {
            sum+=a[i];
            ans++;                    //计数器。
            if(sum>=m)
            {
                printf("%lld\n",ans);    //输出硬币数，直接退出程序。
                return 0;
            }
        }
    }
    cout<<ans+1<<'\n';           //不然的话输出ans+1。
    return 0;
}