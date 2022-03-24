#include<stdio.h>
#include<string.h>

int isChar(char c);

int checkEmailValidation(char email[]){
	
	int len = strlen(email);

    int validationStatus = 0;
	
	if(isChar(email[0])){
		int at_found = 0;
		for(int i=1;i<len;i++){
			if(email[i] == '@'){	
				at_found = 1;
			}
		}
		if(at_found == 1){
			//printf("valid....");
            validationStatus = 1;
		}
		else{
			//printf("@ not found......please give a valid mail id");
            validationStatus = 0;
		}
	}
	else{
		//printf("Invalid format\n");
        validationStatus = -1;
	}

	return validationStatus;
}

int isChar(char c){
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
		return 1;
	}
	else{
		return 0;
	}
}