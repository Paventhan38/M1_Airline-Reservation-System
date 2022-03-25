/**
 * @file Reservation.h
 * @author Paventhan A S (paventhan.as.2018.cse@rajalakshmi.edu.in)
 * @brief Header file for Reservation System
 * @version 0.1
 * @date 2022-03-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _RESERVATION_H_
#define _RESERVATION_H_
#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Get the details from the user and validate the details given,it get proceed if it get valid.
 * 
 */
void reserve(); 


/**
 * @brief Cancel the ticket booked by the user,only with the respective passport number at the time of booking.
 * 
 */
void cancel();


/**
 * @brief display will preview the details of the tickets reserverd by the user.
 * 
 */
void display();


#endif /* _RESERVATION_H_*/