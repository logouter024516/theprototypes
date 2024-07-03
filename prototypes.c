#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int a=1;
	char inputs[250]; 
	while(a<=2){
		printf("Initializing...");
		Sleep(2000);
		system("cls");
		a++;		
	}
	printf("The prototypes\n");
	while(1){
		printf("if you want start, Enter start: ");
		gets(inputs);
		if(strcmp(inputs,"start")==0){
			system("cls");
			printf("오늘의 날짜: 2024/06/29\n");
			printf("나는 평벙한 회사원 이하인이다. 오늘은 휴일이다 그러니 걍 폰이나 하며 집에서 쉬자.\n"); 
			printf("폰을 키려면 on을 입력해주세요: ");
			gets(inputs);
			if(strcmp(inputs,"on")==0){
				system("cls");
				printf("휴대폰의 전원을 켰다.\n");
    			const char* file_path = "C:\\images\\phone_locked.jpg";

    			// ShellExecute 함수를 사용하여 파일 열기
    			HINSTANCE result = ShellExecute(NULL, "open", file_path, NULL, NULL, SW_SHOWNORMAL);
    
    // 실행 결과 확인
    			if ((int)result > 32) {
   			     	printf("");
  			    } else {
  			      	printf("ERROR! ERROR ID: IMGLOADERROR\n");
  			      	return 0;
   				 }
   				 printf("어? 광고가 와있다.  배달플랫폼 광고다.\n"); 
   				 printf("마침 배도 고픈데 그냥 배달이나 시켜먹을까?\n");
   				 printf("[Y]es,[N]o\n");
				gets(inputs);
				if(strcmp(inputs,"Y")==0 || strcmp(inputs,"y")==0){
					printf("걍 오늘저녁은 배달시켜먹자!");
				}else{
					printf("End1: 하인이는 배달을 시키지 않고 직접요리를 하며 시간을 보냈다 하지만 요리중 결려온 회사의 전화를 받지 못해 회사에서 해고당했다.\n");
				}
			}
			
		}		
	}


}
