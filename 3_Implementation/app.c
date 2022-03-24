#include<stdio.h>
#include<string.h>
//#include<Windows.h>
#include "emailValidation.h"
#include "passportValidation.h"

struct Passenger
{
    char passport[30];
	char name[50];
    char destination[50];
	int seat_num;
	char email[30];
};

int maxNumberOfPassengers = 20;
struct Passenger listOfPassengers[20];
int seatNumber = 1;
int noOfSeatsFilled = 0;

void reserve(){

    struct Passenger passenger;

    printf("\n\n\t\tEnter your passport number : ");
    gets(passenger.passport);
    fflush(stdin);
    if(checkPassportValidation(passenger.passport) == 1){
        printf("\n\n\t\tValid Passport number");
    }
    else if(checkPassportValidation(passenger.passport) == 0){
        printf("\n\n\t\tNot a valid passport number format");
        return;
    }
    else if(checkPassportValidation(passenger.passport) == -1){
        printf("\n\n\t\tInvalid passport number");
        return;
    }


    printf("\n\n\t\tEnter your name : ");
    gets(passenger.name);
    fflush(stdin);

    printf("\n\n\t\tEnter your email address : ");
    gets(passenger.email);
    fflush(stdin);
    if(checkEmailValidation(passenger.email) == 1){
        printf("\n\n\t\tEmail Valid...");
    }
    else if(checkEmailValidation(passenger.email) == 0){
		printf("\n\n\t\tInvalid email address......please give a valid mail id");
        return;
    }
    else if(checkEmailValidation(passenger.email) == -1){
		printf("\n\n\t\tInvalid format");
        return;
    }

    printf("\n\n\t\tEnter your Destination : ");
    gets(passenger.destination);
    fflush(stdin);

    passenger.seat_num = seatNumber;

    listOfPassengers[noOfSeatsFilled] = passenger;
    noOfSeatsFilled++;
    printf("\n\n\t\tSuccessfully booked the ticket");
    printf("\n\n\t\tYour seat number is %d\n", seatNumber);
    seatNumber++;
        

}

void cancel(){

    char passport[8];
    printf("\n\n\t\tEnter passport number to cancel your ticket : ");
    gets(passport);
    fflush(stdin);                                                                   
    int deleteSuccess = 0;
    for(int i = 0; i < noOfSeatsFilled; i++){

        if(strcmp(listOfPassengers[i].passport, passport) == 0){

            for(int j = i+1; j < noOfSeatsFilled-1; j++){

                listOfPassengers[j-1] = listOfPassengers[j];

            }
            noOfSeatsFilled--;
            deleteSuccess = 1;
            break;

        }

    }

    if(deleteSuccess == 1){
        printf("\n\n\t\t Your Ticket has been cancelled\n");
    }
    else{
        printf("\n\n\t\tIncorrect passport number......failed to delete the record...\n");
    }


}

void display(){

    printf("\n\t\t-------------------------------------------");
    printf("\n\n\t\tTotal no.of seats filled : %d", noOfSeatsFilled);
    printf("\n\t\t-------------------------------------------");

    for(int i = 0; i < noOfSeatsFilled; i++){

        printf("\n\n\t\tPassenger No : %d", i+1);
        printf("\n\n\t\tName : %s", listOfPassengers[i].name);
        printf("\n\n\t\tPassport Number : %s", listOfPassengers[i].passport);
        printf("\n\n\t\tEmail ID : %s", listOfPassengers[i].email);
        printf("\n\n\t\tSeat No : %d", listOfPassengers[i].seat_num);
        printf("\n\n\t\tDestination : %s", listOfPassengers[i].destination);
        printf("\n\n\t\t-------------------------------------");
    }

}


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
