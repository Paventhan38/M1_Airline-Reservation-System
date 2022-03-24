#include<stdio.h>
#include<string.h>

int checkPassportValidation(char passport_number[]){
	
	
	int passport_number_length = strlen(passport_number);
	
    int validationStatus = 0;
	
	if(passport_number_length != 8){
		//printf("Invalid Passport number");
        validationStatus = -1;
	}
	else{
		if(passport_number[0] >= 'A' && passport_number[0] <= 'Z'){
			if(passport_number[1] >= '1' && passport_number[1] <= '9'){
					for(int i=2;i<=6;i++){
						if(!(passport_number[i] >= '0' && passport_number[i] <= '9')){
							break;
						}
						else{
							continue;
						}
					}
					if(passport_number[7] >= '1' && passport_number[7] <= '9'){
						//printf("Valid!!!!!!!!!!!!!!");
                        validationStatus = 1;
						
					}
					else{
						//printf("Not a valid passport number format......!!!");
                        validationStatus = 0;
					}

			}
		}
	}
	

	
	return validationStatus;
	
}


