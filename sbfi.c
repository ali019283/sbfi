#include<stdio.h>
#include<string.h>
#include<stdlib.h>
unsigned char i[30000] = {0};
unsigned char *a = i;
void sbfi(char *b){
	char c;
	int l[277];
	int k = -1;
	for (int z = 0; b[z] != 0; z++){
		char ok = b[z];
		switch(ok){
			case '>': ++a; break;
			case '<': --a; break;
			case '+': ++*a; break;
			case '-': --*a; break;
			case '.': putchar(*a); break;
			case ',': *a = getchar(); break;
			case '[': ++k; l[k] = z; continue;
			case ']': 
				if(*a){
					z = l[k];
					continue;
				}else{
					--k;
					break;
				}
			case '(': ++k; l[k] = z; continue;
			case ')':
				  if (*a){
				  	z = l[k];
					z++;
					break;
				  }else{
				  	while(b[z] == '}'){
						z++;
					}
					break;
				  }
			case '}': break;

		}
	}
}
int main(int argc, char const *argv[]){
	FILE *fptr; 
	fptr = fopen(argv[1], "r");
	fseek(fptr, 0L, SEEK_END);
	long len = ftell(fptr);
	rewind(fptr);
	char *str = malloc(len + 1);
	fgets(str, len + 1, fptr); sbfi(str); 
	fclose(fptr);
	free(str);
	return 0; 
}
