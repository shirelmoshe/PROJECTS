
#include <stdio.h>
#include <string.h>

void stringg(char* s, int index, char* f, char* d);


int main()
{
	char str[] = "my name is shirel";
	char f[100];
	char d[100];
	

	stringg(str, 6, f, d);
	printf("%s\n", f);
	printf("%s\n", d);

}

void stringg(char* s, int index, char* f, char* d) {
	int length = strlen(s);
	int newindex = 0;
	if (index < length) {
		for (int i = 0; i < index; i++) {
			f[i] = s[i];
			f[index] = '\0';
		}
		for (int i = index; i < length; i++) {
			d[newindex] = s[i];
			newindex++;
		}
		d[length-index] = '\0';
	}


}

