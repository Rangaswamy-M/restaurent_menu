/*Dhaba Menu Card*/
#include<stdio.h>
int main(){
    int op;
    int repeat = 0;
    long calculator =0;
     printf("-----Welcome to our Dhaba-----\n");
    do{
    printf("1.starters\n2. Main course\n3. Desserts\n4. Exit\n");
    printf("select What do you want : ");
    scanf("%d",&op);
    switch(op){
        case 1 :
        printf("Your selected Starter\n");
        printf("1.chicken 65..........70\n2. Dragon chicken..........100\n3. lemon chicken..........120\n4.chicken  lallipops..........90\n");
        printf("Select your Item: ");
        scanf("%d",&op);
        switch(op){
            case 1 :
            printf("Your selected chicken 65\n");
            calculator+=70;
            break;
            case 2 :
            printf("Your selected Dragon Chicken\n");
            calculator+=100;
            break;
            case 3 :
            printf("Your selected Lemon Chicken\n");
            calculator+=120;
            break;
            case 4 :
            printf("Your selected Chicken lallipops\n");
            calculator+=90;
            break;
        }
        break;
        case 2 :
        printf("Your selected Main course\n");
        printf("1. Chicken Biryani..........320\n2. Mutton Biriyani..........420\n");
        printf("Select your item:");
        scanf("%d",&op);
        switch(op){
            case 1 :
            printf("Your selected Chicken Biriyani\n");
            calculator+=320;
            break;
            case 2 :
            printf("Your selected Mutton Biryani\n");
            calculator+=420;
            break;
        }
        break;
        case 3 :
        printf("Your selected Dessert\n");
        printf("1. Vennela Ice-cream..........50\n2. Chacolate Ice-cream..........70\n");
        printf("Enter your dessert:");
        scanf("%d",&op);
        switch(op){
            case 1 :
            printf("Your selectedVennela Ice-cream\n");
            calculator+=50;
            break;
            case 2 :
            printf("Your selectedChacolate Ice-Cream\n");
            calculator+=70;
            break;
        }
        break;
        case 4 :
        printf("Thank You For Coming\n");
        break;
        default :
        printf("Invalid Selection");
    }if(op>=1 && op<=4){
        repeat = 1;;
    }
   }while(op!=4);
   printf("Your bill is Rs:%ld.00",calculator);
   
}