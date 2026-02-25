// binary search
#include <stdio.h>

int main ()

{ int a[50], i, n , key , loc=-1, beg , mid,end;
printf("Enter the no of element : " );
scanf("%d",&n);

for(i=0 ; i<n ; i++ )
{
    printf("Enter a [%d]" , i);
    scanf("%d",&a[i]);
}
printf("Enter searching element");
 scanf("%d",&key);
beg=0 , end = n-1;
while(beg<=end)
{
    mid=(beg+end)/2;
    if(a[mid]==key)
    {
        loc =  mid ;
        printf("%d element is found at %d" , key , mid);
        break;
    }
    else if(a[mid]>key)
    {
        end = mid - 1 ;
    }
    else
    {
        beg = mid + 1;
    }

}


if(loc==-1)
{
    printf("Elements is not found");

    return 0  ;
}



}