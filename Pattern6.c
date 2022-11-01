  
int main()  
{  
    int n,m=1;  
    printf("Enter the value of n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
          printf("*");  
      }  
      printf("\n");  
    }  
    return 0;  
}  