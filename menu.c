#include<stdio.h>
int main(){
    char op;
    printf("-----Welcome to our Dhaba-----\n");
    printf("select What do you want -> \n ");
    printf("1.starters\n 2. Main course\n 3. Desserts\n4. Exit");
    switch(op){
        case '1' :
        printf("Your selected Starter\n");
        printf("Non-veg Items\n");
            printf("1.Chicken 65\n2. Lemon Chicken\n3. Dragon Chicken\n");
            printf("Veg Items\n");
            printf("1.Panner");
        break;
        case '2' :
        printf("Your selected Main course");
        break;
        case '3' :
        printf("Your selected Dessert");
        break;
        case '4' :
        printf("Thank You For Coming");
        break;
        default :
        printf("Invalid");
    }
}