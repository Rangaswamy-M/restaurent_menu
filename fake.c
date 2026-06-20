#include<stdio.h>
int main(){
    int op,op1;
    printf("-----Welcome to our Dhaba-----\n");
    printf("1.starters\n2. Main course\n3. Desserts\n4. Exit\n");
    printf("select What do you want : ");
    scanf("%d",&op);
    switch(op){
        case 1 :
        printf("Your selected Starter\n");
        printf("1. Dragon chicken\n2. Chicken rolls\n3. Chiclen lallipops\n4. chicken 65\n");
        printf("Select your item: ");
        scanf("%d",&op1);
        switch (op1){
            case 1:
            printf("Dragon chicken");
            break;
            case 2:
            printf("Chicken rolls");
            break;
            case 3:
            printf("chicken lallipops");
            break;
            case 4:
            printf("chicken 65");
            break;
            default :
            printf("Invalid item");
        }
    }
        break;
        case 2:
        printf("Your selected Main course\n");
        printf("1.Veg Items\n2. Non-veg Items\n");
        break;
        case 3:
        printf("Desserts");
        break;
        case 4:
        printf("Thank You");
        default :
        printf("Invalid option");
    }
}
