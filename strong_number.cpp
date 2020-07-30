#include <stdio.h> 

void fact(int arr[])  
{  
    int mul=1;  
    for(int i=1;i<=9;i++)  
    {  
        mul=mul*i;  
        arr[i] = mul;
    }  
    return ;  
      
}  
int main()  
{  
    int n;  
    int sum=0;
    int arr[10] = {0};
    fact(arr);  
    printf("Enter a number:");  
    scanf("%d",&n);  
    int k=n;  
    int r;  
    while(k!=0)  
    {  
        r=k%10;  
        int f=arr[r];  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
    {  
        printf("\nstrong");  
    }  
    else  
    {  
        printf("\nnot a strong");  
    }  
    return 0;  
}  
 