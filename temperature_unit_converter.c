#include <stdio.h>
#include <stdlib.h>

int celToFah(int c);
int fahToCel(int f);

int main()
{
    int choice;
    do{

    printf("1. Celsius -> Fahrenheit\n");
    printf("2. Fahrenheit -> Celsius\n");
    printf("3. Exit\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        int tempC;
        printf("Enter a temperature:");
        scanf("%d",&tempC);
        printf("The temperature is %d F.\n",celToFah(tempC));
        break;
    case 2:
        int tempF;
        printf("Enter a temperature:");
        scanf("%d",&tempF);
        printf("The temperature is %d C.\n",fahToCel(tempF));
        break;
    case 3:
        break;
    }
    }while(choice!=3);
    return 0;
}

int celToFah(int c){
    int F;
    F = (c*(1.8))+32;
    return F;
}


int fahToCel(int f){
    int C;
    C = ((f-32)/1.8);
    return C;
}
