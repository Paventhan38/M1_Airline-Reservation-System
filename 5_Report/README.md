# REPORT GENERATION

## INTRODUCTION
The Intension of this project is to provide information of the AIRLINE TICKET BOOKING to a customer to book thier tickets.The project has developed efficiently to carry out process easily.
The system allows the user to Book Tickets,Cancel Tickets,View all booking records.

### Main File
  * Main file is the initial point of executing a program.It calls the other fucntion files to access the function over there.
  * Main file will redirect to other files,dependes upon the user choice and actions.'
  
### Other Files

  * Other files actions will be differ from main functions
  * actions of each file be unique,depends upon the user choice
  
### Header Files

  * Functions:
              All the functions required for the project is been accessed through Function file,if main file has a work with funciton file,function file can called in header portion of main file.
                * Function Used:
                            * resesrve()
                            * cancel()
                            * display()
  * emailValidation:
               This file will validate the emailId given by the user, if the format is valid the user get proceed to next step else it throws an error
              
   ![04_email validation 1](https://user-images.githubusercontent.com/66021448/161214033-ed00ec1b-6228-42e0-a45a-e03d4125e1eb.png) 
   ![05_email validation 2](https://user-images.githubusercontent.com/66021448/161214043-6d5a1f93-1a51-4e1a-89fc-5cbb29cf794a.png)
  * passportValidation:
               File validates the passport number the format get accepts,if it has required format and get proceed to further process else it throws error
     
   ![02_Passport validation 1](https://user-images.githubusercontent.com/66021448/161214063-a5628993-8cff-41cd-9a22-54bb095a40f0.png)
   ![03_Passport validation 2](https://user-images.githubusercontent.com/66021448/161214070-e5a66a3b-0a37-49ce-9f9c-92c14d8012b1.png)
     
### Test File
Since this project has all the functions in a seperate file named as "test_airlines" also the other validation files has been called through this file with use of Make file,atlast file get tested by unity.
      
   ![Tested](https://user-images.githubusercontent.com/66021448/161215672-12598d8d-3964-49c6-a4b4-78c5432c652c.png)
  
### Documentation
Documenation was done by a tool doxywiazrd as a doxy file.

![Doxygen](https://user-images.githubusercontent.com/66021448/161219300-2c1cc472-d6fb-4d7b-9f90-eaa7a427228c.png)


