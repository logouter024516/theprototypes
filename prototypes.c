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
			printf("������ ��¥: 2024/06/29\n");
			printf("���� ���� ȸ��� �������̴�. ������ �����̴� �׷��� �� ���̳� �ϸ� ������ ����.\n"); 
			printf("���� Ű���� on�� �Է����ּ���: ");
			gets(inputs);
			if(strcmp(inputs,"on")==0){
				system("cls");
				printf("�޴����� ������ �״�.\n");
    			const char* file_path = "C:\\images\\phone_locked.jpg";

    			// ShellExecute �Լ��� ����Ͽ� ���� ����
    			HINSTANCE result = ShellExecute(NULL, "open", file_path, NULL, NULL, SW_SHOWNORMAL);
    
    // ���� ��� Ȯ��
    			if ((int)result > 32) {
   			     	printf("");
  			    } else {
  			      	printf("ERROR! ERROR ID: IMGLOADERROR\n");
  			      	return 0;
   				 }
   				 printf("��? ���� ���ִ�.  ����÷��� �����.\n"); 
   				 printf("��ħ �赵 ���µ� �׳� ����̳� ���Ѹ�����?\n");
   				 printf("[Y]es,[N]o\n");
				gets(inputs);
				if(strcmp(inputs,"Y")==0 || strcmp(inputs,"y")==0){
					printf("�� ���������� ��޽��Ѹ���!");
				}else{
					printf("End1: �����̴� ����� ��Ű�� �ʰ� �����丮�� �ϸ� �ð��� ���´� ������ �丮�� ����� ȸ���� ��ȭ�� ���� ���� ȸ�翡�� �ذ���ߴ�.\n");
				}
			}
			
		}		
	}


}
