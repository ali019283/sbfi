#include<stdio.h>
#include<string.h>
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
		}
	}
}
int main(){sbfi(",[.[-],]"); return 0;}
