#include <stdio.h>
#include<algorithm>
#define M 100

using namespace std;
struct program
{
    int Ti_s;
    int Ti_e;
}arr[M];

bool compare(program a,program b)
{
    if(a.Ti_e<b.Ti_e)return true;
    else return false;
}
int main()
{
    int n;
    while(scanf("%d",&n)&&(n!=0))
    {

    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&(arr[i].Ti_s),&(arr[i].Ti_e));
    }
    sort(arr,arr+n,compare);
    int time = arr[0].Ti_e;
    int result = 1;
    for(j=1;j<n;j++)
    {
        if(arr[j].Ti_s>=time)
        {
            result++;
             time = arr[j].Ti_e;
        }
    }
    printf("%d\n",result);

    }
    return 0;
}
