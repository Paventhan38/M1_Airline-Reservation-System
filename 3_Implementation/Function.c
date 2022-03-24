#include<stdio.h>
#include<string.h>
#include "emailValidation.h"
#include "passportValidation.h"
#include "struct.h"


extern struct Passenger;



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

void test_airline()
{
	printf("Tested");
}