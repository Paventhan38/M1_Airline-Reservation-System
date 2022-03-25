#include<stdio.h>
#include<string.h>
#include "Function.h"
struct Passenger;




int main(){

    int choice;

    do{
		//system("cls");
        printf("\n\n\t\t --------------------------------------------------------------------");
		printf("\n\t\t                          Get Ready To Fly!                   ");
		printf("\n\t\t             _______________________________________________");
		printf("\n\t\t             ......      THE LAND IS READY   .......");
		printf("\n\t\t   ---------------------------------------------------------------------");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. DISPLAY RECORDS");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t feel free to contact - 9xx5xx4xx0");
		printf("\n\n\t\t Enter your choice : ");

        scanf("%d", &choice);
        fflush(stdin);
		//system("cls");

        switch (choice)
        {
        case 1:
            if(noOfSeatsFilled <= 20){
                reserve();
            }
            else{
                printf("\n\n\t\tSeats are fully booked");
            }
            break;
        
        case 2:
            if(noOfSeatsFilled > 0){
                cancel();
            }
            else{
                printf("\n\n\t\tThere are no seats booked...");
            }
            break;

        case 3:
            if(noOfSeatsFilled > 0){
                display();
            }
            else{
                printf("\n\n\t\tNo tickets were booked...\n");
            }
            break;

        case 4:
            break;
        
        default:
            printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
        }

        printf("\n\n\n\t\tpress any key to continue...");
		getch();

    }while(choice != 4);


    return 0;

}
