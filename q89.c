#include <stdio.h>
#include <string.h>

int main() {
	char s[1000];
	char ch;
	int count = 0;

	scanf("%s", s);
	scanf(" %c", &ch);

	for(int i = 0; s[i] !='\0'; i++) {
		if(s[i] == ch) {
			count++;
		}
	}

	printf("%d", count);
	return 0;
}
