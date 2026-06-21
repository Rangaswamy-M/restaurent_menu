/*Dhaba Menu Card*/
#include<stdio.h>
int main(){
    int op,op_1,op_2; // select the switch conditions to select veg or non-veg Items
    int repeat = 0; // Use to if condition want to repeat again or not 0 - N0, 1-Yes
    long bill =0;// Use To calculate Bill Your Items
     printf("-----Welcome to our Dhaba-----\n");
    do{ //atleast one time print the items
    printf("1. starters\n2. Main course\n3. Desserts\n4. Exit\n");
    printf("select What do you want ?   ");
    scanf("%d",&op);
    switch(op){ // switch case used to select starters, Main course, Desserts, Exit the code
        case 1 :
        printf("------------------Your selected Starter-----------------\n");
        do{// Use to repeat the starter items Veg, Non-Veg, Exit the Starter
        printf("1. Veg\n2. Non-Veg\n3. Exit\n");
        printf("Select : ");
        scanf("%d",&op_1);
        switch(op_1){
            case 1: // select the veg Items
            printf("---------- Veg-Items----------\n");
            printf("1. Panner Tikka......50.00\n2. Hara Bhara Kabab......60.00\n3. Crispy Chilli Paneer......70.00\n");
            printf("Select Your Item: ");
            scanf("%d",&op_2);
            switch(op_2){
                case 1:
                printf("Panner Tikka.........................................50.00\n");
                bill+=50;
                break;
                case 2:
                printf("Hara Bhara Kabab.........................................60.00\n");
                bill+=60;
                break;
                case 3:
                printf("Crispy Chilli Panner.........................................700.00\n");
                bill+=70;
                break;
            }
            break;// Starter stop the veg items don't use the break automatically printed Non-Veg Items
            case 2 :// select the Non-Veg Items
            printf("---------- Non-Veg Items----------\n");
            printf("1. chicken 65..........70\n2. Dragon chicken..........100\n3. lemon chicken..........120\n4. chicken  lallipops..........90\n");
            printf("Select your Item: ");
            scanf("%d",&op_2);
            switch(op_2){
                case 1 :
                printf("chicken 65.........................................70.00\n");
                bill+=70;
                break;
                case 2 :
                printf("Dragon Chicken.........................................100.00\n");
                bill+=100;
                break;
                case 3 :
                printf("Lemon Chicken.........................................120.00\n");
                bill+=120;
                break;
                case 4 :
                printf("Chicken lallipops.........................................90.00\n");
                bill+=90;
                break;
            }
        break;// Starter Ends the Non-Veg Items
        case 3:
        printf("Exit Starters\n");
        break;
        }if(op_1>=1 && op_1<=3){ // If want to repeat Starters use if condition
            repeat = 1;// op_1 is between 1 and 3 repeat the starter items
        }
    }while(op_1!=3);// Exit the Starters
        case 2 :
        do{// start the Main course 
        printf("------------------Main Course-----------------\n");
        printf("1. Veg\n2. Non-Veg\n3. Exit\n");
        scanf("Select:  ");
        scanf("%d",&op_1);
        switch(op_1){// To select the Main course Veg or Veg
            case 1:// Main Course Veg Items in Case
                printf("---------- Veg Items ----------\n");
                printf("1. Palak paneer.....100.00\n2. Dal Makhani.....130.00\n3. Shahi Paneer.....150.00\n4. Veg Dum Biriyani.....200.00\n");
                scanf("%d",&op_2);
                switch(op_2){
                    case 1: 
                    printf("Palak paneer.........................................100.00\n");
                    bill+=100;
                    break;
                    case 2: 
                    printf("Dal Makhani.........................................130.00\n");
                    bill+=100;
                    break;
                    case 3: 
                    printf("Shahi Paneer.........................................150.00\n");
                    bill+=100;
                    break;
                    case 4: 
                    printf("Veg Dum Biryani.........................................200.00\n");
                    bill+=100;
                    break;
                }
                break;// End of the Veg Items 
            case 2:// Non-Veg Items In case
            printf("---------- Non-Veg Items----------\n");
            printf("1. Chicken Biryani..........320.00\n2. Mutton Biriyani..........420.00\n3. Pulas..........250.00\n4. Fried Rice..........220.00\n");
            printf("Select your item: \n");
            scanf("%d",&op_2);
            switch(op_2){
                case 1 :
                printf("Chicken Biriyani.........................................320.00\n");
                bill+=320;
                break;
                case 2 :
                printf("Mutton Biryani.........................................420.00\n");
                bill+=420;
                break;
                case 3 :
                printf("Pulas.........................................250.00\n");
                bill+=320;
                break;
                case 4 :
                printf("Fried Rice.........................................220.00\n");
                bill+=320;
                break;
            }
            break;// Ends of Non-Veg Items
            case 3:
            printf("Exit Main course\n");
            break;
        }if(op_2>=1 && op<=3)// If you want repeat the Main course
            repeat = 1;
        }while(op_1!=3);// Ends the Main Course
        case 3 :// Desserts Case
        printf("------------------Desserts-----------------\n");
        printf("1. Vennela Ice-cream..........50\n2. Chacolate Ice-cream..........70\n");
        printf("Select your dessert: ");
        scanf("%d",&op_1);
        switch(op_1){//Select the Dessert
            case 1 :
            printf("Vennela Ice-cream.........................................50.00\n");
            bill+=50;
            break;
            case 2 :
            printf("Chacolate Ice-Cream.........................................70.00\n");
            bill+=70;
            break;
        }
        break;
        case 4 ://Respect the Customer
        printf("Thank You For Coming\n");
        break;
        default :
        printf("Invalid Selection");
    }if(op>=1 && op<=4)// Repeat the Starter, Main Course, Dessert.
        repeat = 1;
   }while(op!=4);// Ends of the Full Meals
   printf("Your bill is Rs:%ld.00\n",bill);// print Bill
}