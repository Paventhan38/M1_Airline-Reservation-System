# TestPlan and Output

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**PASS/FAIL**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| T_01|H_01| Provide required details to book a ticket|Passport Number and Email Id | Successfully Validated| Successfully Validated | PASS |
| T_02|H_01| When the given passport number and email format is wrong | Passport Number and Email Id | Invalid Format | Invalid Format | PASS |
| T_03|H_02| When the given passport number and email format is valid | Passport Number and Email Id | valid Format | valid Format | PASS |
| T_04 |H_02| Display the details and options available | Enter Choice | Display Details | Display Details | PASS |
| T_05 |H_04| Cancel a ticket,if ticket is not booked in that particular given detail while cancellation process | Passport Number | Incorrect passport number | Incorrect passport number | PASS |
| T_06 |H_04| cancel a ticket,if ticket is booked from that given detail while cancellation process | Passport Number | Ticket Cancelled | Ticket Cancelled | PASS |
| T_07 |H_05| Display ticket details | Enter choice | Display Record | Display Record | PASS |
| T_08 |H_01| Exit from the process | Enter choice | Exit | Exit | PASS |
