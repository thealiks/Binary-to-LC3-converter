#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

int main (int argc, char *argv[]) {
	char *obj = argv[1];
	FILE *f;
	char str[MAX];
	char binary[MAX];
	char word[MAX];
	char output[MAX];
	unsigned long int code;
	char i = 0;
	char opcode[MAX];
//	int i = 0;

	if (argc < 2){
		fputs("\nyou forgot obj!\n\n", stdout);
		return 1;
	}//if

	f =  fopen(obj, "r");
	while (fgets(str, MAX, f)){
		strcpy(binary, "\0");
		strcpy(output, "\0");
		strcpy(opcode, "\0");
		for (i = 0; i < strlen(str) - 1; i++){
			str[i] = tolower(str[i]);
//			sscanf(&str[i], "%hx", &code);
			switch(str[i]){
				case('0'):
					strcat(binary,"0000"); break;
				case('1'):
					strcat(binary,"0001"); break;
				case('2'):
					strcat(binary,"0010"); break;
				case('3'):
					strcat(binary,"0011"); break;
				case('4'):
					strcat(binary,"0100"); break;
				case('5'):
					strcat(binary,"0101"); break;
				case('6'):
					strcat(binary,"0110"); break;
				case('7'):
					strcat(binary,"0111"); break;
				case('8'):
					strcat(binary,"1000"); break;
				case('9'):
					strcat(binary,"1001"); break;
				case('a'):
					strcat(binary,"1010"); break;
				case('b'):
					strcat(binary,"1011"); break;
				case('c'):
					strcat(binary,"1100"); break;
				case('d'):
					strcat(binary,"1101"); break;
				case('e'):
					strcat(binary,"1110"); break;
				case('f'):
					strcat(binary,"1111"); break;
				default:
					printf("you screwed up\n", stdout); break;
			}//switch
		}
		
		if (strncmp(binary,"0001",4)==0){
			strcat(output,"add ");
		}
		else if (strncmp(binary,"0101",4)==0){
			strcat(output,"and ");
		}
////////
		if (strncmp(&binary[4],"000",3)==0){
			strcat(output,"r0,");
		}
		else if (strncmp(&binary[4],"001",3)==0){
			strcat(output,"r1,");
		}
		else if (strncmp(&binary[4],"010",3)==0){
			strcat(output,"r2,");
		}
		else if (strncmp(&binary[4],"011",3)==0){
			strcat(output,"r3,");
		}
		else if (strncmp(&binary[4],"100",3)==0){
			strcat(output,"r4,");
		}
		else if (strncmp(&binary[4],"101",3)==0){
			strcat(output,"r5,");
		}
		else if (strncmp(&binary[4],"110",3)==0){
			strcat(output,"r6,");
		}
		else if (strncmp(&binary[4],"111",3)==0){
			strcat(output,"r7,");
		}
////////
		if (strncmp(&binary[7],"000",3)==0){
			strcat(output,"r0,");
		}
		else if (strncmp(&binary[7],"001",3)==0){
			strcat(output,"r1,");
		}
		else if (strncmp(&binary[7],"010",3)==0){
			strcat(output,"r2,");
		}
		else if (strncmp(&binary[7],"011",3)==0){
			strcat(output,"r3,");
		}
		else if (strncmp(&binary[7],"100",3)==0){
			strcat(output,"r4,");
		}
		else if (strncmp(&binary[7],"101",3)==0){
			strcat(output,"r5,");
		}
		else if (strncmp(&binary[7],"110",3)==0){
			strcat(output,"r6,");
		}
		else if (strncmp(&binary[7],"111",3)==0){
			strcat(output,"r7,");
		}
////////
		if (strncmp(&binary[13],"000",3)==0){
			strcat(output,"r0,");
		}
		else if (strncmp(&binary[13],"001",3)==0){
			strcat(output,"r1,");
		}
		else if (strncmp(&binary[13],"010",3)==0){
			strcat(output,"r2,");
		}
		else if (strncmp(&binary[13],"011",3)==0){
			strcat(output,"r3,");
		}
		else if (strncmp(&binary[13],"100",3)==0){
			strcat(output,"r4,");
		}
		else if (strncmp(&binary[13],"101",3)==0){
			strcat(output,"r5,");
		}
		else if (strncmp(&binary[13],"110",3)==0){
			strcat(output,"r6,");
		}
		else if (strncmp(&binary[13],"111",3)==0){
			strcat(output,"r7,");
		}

		printf("%s\n",output,stdout);
	}//while
	fclose(f);
	return 0;
}
