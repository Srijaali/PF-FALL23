#include <stdio.h>
int main() {
	char password[1000];
	char passwordori[1000]="Secure123";
	int ret=strcmp(password, passwordori);
	
	printf("enter password: ");
	scanf("%s", password);
	
	printf("%d", strlen(password));
	
	if(strlen(password)<8){
		printf("\n invalid password");
	}	
	else {
	
	if(ret<0){
		
		printf("login failed");
}
	
	else if(ret > 0)
	{
		printf("login failed");
	}
	
	else{
		printf("\nlogin successful");
	}
}
	return 0;
}
