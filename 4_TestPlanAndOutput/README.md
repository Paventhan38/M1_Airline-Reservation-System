# TestPlan and Output

## High Level Test Plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|H_01| Welcome page,choice will be displayed | Enter choice | Details Displayed | Details Displayed | Scenario |
|H_02| User enter booking details,it will be verified | Passport Number and Email Id| Verified | Verfied | Techinal |
|H_03| If user's booking details verfication fail's | Passport Number and Email Id | Verfication Failed | Verification Failed | Technical |
|H_04| Display the details of the ticket booked| Enter Choice | Display Details | Display Details | Technical |
|H_05| cancel ticket, if ticket is booked in that particular user details | Passport Number | Ticket Cancelled | Ticket Cancelled |Technical |
|H_06| Exit from the process | Enter choice | Exit | Exit | Technical |


## Low Level Test Plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|L_01| Provide required details to book a ticket|Passport Number and Email Id | Successfully Validated| Successfully Validated | Technical |
|L_02| When the given passport number and email format is wrong | Passport Number and Email Id | Invalid Format | Invalid Format | Technical |
|L_03| When the given passport number and email format is valid | Passport Number and Email Id | valid Format | valid Format | Technical |
|L_04| Display the details and options available | Enter Choice | Display Details | Display Details | Technical |
|L_05| Cancel a ticket,if ticket is not booked in that particular given detail while cancellation process | Passport Number | Incorrect passport number | Incorrect passport number | Technical |
|L_06| cancel a ticket,if ticket is booked from that given detail while cancellation process | Passport Number | Ticket Cancelled | Ticket Cancelled | Technical |
|L_07| Display ticket details | Enter choice | Display Record | Display Record | Technical |
|L_08| Exit from the process | Enter choice | Exit | Exit | Technical |
