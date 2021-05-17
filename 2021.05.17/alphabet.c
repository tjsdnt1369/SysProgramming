#include <stdio.h>

int main(){
	char alp;
	for (char i=alp;i!='0';){
		scanf("%c", &alp);
		if(alp >= 'A' && alp <= 'Z'){
			printf("입력한 %c 의 소문자는 %c 입니다.\n",alp ,alp+32);
		}
		if(alp >= 'a' && alp <= 'z') {
			printf("입력한 %c의 대문자는 %c 입니다.\n",alp ,alp-32);
		}
		if(alp == '0') break;
	}

}

