#include <stdio.h>
int main(){
	char str[100];
	int vowels=0,constants=0,digits=0,spaces=0,i;
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++){	
		if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			vowels++;
		}
		else if(str[i]>='a'&&str[i]<='z' || str[i]=='A'&&str[i]=='Z'){
			constants++;
		}
		else if(str[i]>= '0' && str[i]<= '9'){
			digits++;
		}
		else if(str[i]==' '){
			spaces++;
		}}
	printf("\n vowels :%d\n",vowels);
	printf("\n constants :%d\n",constants);
	printf("\n digits :%d\n",digits);
	printf("\n spaces :%d\n",spaces);
	return 0;
}

