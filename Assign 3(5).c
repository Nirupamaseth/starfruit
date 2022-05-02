#include <stdio.h>

int Large(int[],int);

int main()

{

    int a[100],size,Largest,i;

    printf("Enter size of array: ");

    scanf("%d",&size);

    printf("Enter the elements into array:\n");
    
    for(i=0;i<size;i++)        
       
        scanf("%d",&a[i]);    
    
    Largest=Large(a,size);     
    
    printf("Largest number is: %d\n",Largest);
      return 0;

}

    int Large(int a[],int size)

{

    int i,max;

    max=a[0];

    for(i=1;i<size;i++)
    
    {

        if(max<a[i])

            max=a[i];

    }

    return max;
}