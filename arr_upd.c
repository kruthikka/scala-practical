# include<stdio.h>
int main()
{
    int change,new;
    int arr[]={1,4,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int x=0;x<size;x++)
    { printf("%d ",arr[x]);}

    printf("\nEnter element to be updated : ");
    scanf("%d",&change);

    printf("Enter new element : ");
    scanf("%d",&new);

    for(int x=0;x<size;x++)
    {if(arr[x]==change)
    {arr[x]=new;}
    break;}

    for(int x=0;x<size;x++)
    {printf("%d ",arr[x]);}

    return 0;

}