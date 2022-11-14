#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input;
	scanf("%c", &input);
	if(input >= 65 && input <= 93){
		int tenst = input / 16;
		int geweishu = input % 16;
		printf("%c", (tenst + 2) * 16 + geweishu);
	}
	if(input >= 97 && input <= 122){
		int tenst = input / 16;
		int geweishu = input % 16;
		printf("%c", (tenst - 2) * 16 + geweishu);
	}
	return 0;
}
