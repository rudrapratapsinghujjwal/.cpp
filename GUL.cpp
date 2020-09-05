#include <stdio.h>
int main()
{
    int i;
    int even, odd; 
    int array[10];

    //creat files
    FILE *fpo, *fpe;
    
    fpe=fopen("even.txt","w");
    fpo=fopen("odd.txt","w");

    fprintf(fpe, "Even numbers are:\n");
    fprintf(fpo, "Odd numbers are:\n");

    //taking input from keyboard and storing in array
    printf("enter the element of an array \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    //print numbers according odd and even in files.
    for(i=0; i<10;i++)
    {
        if(array[i] % 2 ==0)
            fprintf(fpe, "%d\n",array[i]);
        else
            fprintf(fpo, "%d\n",array[i]);
    }

    fclose(fpe);
    fclose(fpo);

//reading numbers from file

    fpe=fopen("even.txt","r");
    fpo=fopen("odd.txt","r");
    
    while((even = getw(fpe)) != EOF)
        printf("Data in EVEN FIlE: %d",even);

    while((odd = getw(fpo)) != EOF)
        printf("Data in ODD FIlE: %d",odd);

    fclose(fpe);
    fclose(fpo);

    return 0;

}