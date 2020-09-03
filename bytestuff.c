#include <stdio.h>
#include <string.h>

int main() {
	char head[10];
	char tail[10];
	char ch[100];
	char add[10];
	char out[100];
	char esc[] = "esc";
	int k = 0;
	printf("Enter the characters :");
	scanf("%s", ch);
	printf("Enter a charcter that represents starting delimiter:");
	scanf("%s", head);
	printf("Enter a character that represents ending delimiter:");
	scanf("%s", tail);
	printf("Enter a character that is to be stuffed:");
	scanf("%s", add);

	for (int i = 0; i <strlen(head); i++) {
		out[k] = head[i];
		k++;
	}

	for (int i = 0; i < strlen(ch); i++) {
		int count = 0;
		for (int j = i, l = 0; j < (i + strlen(head)); j++,l++) {
			if (ch[j] == head[l]) {
				count++;
			} else {
				break;
			}
		}
		if (count == strlen(head)) {
			for (int m = 0; m < strlen(add); m++) {
				out[k] = add[m];
				k++;
			}
		}
		count = 0;
		for (int j = i, l = 0; j < (i + strlen(tail)); j++,l++) {
                        if (ch[j] == tail[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(tail)) {
                        for (int m = 0; m < strlen(add); m++) {
                                out[k] = add[m];
                                k++;
                        }
                }
		count = 0;
		for (int j = i, l = 0; j < (i + strlen(esc)); j++,l++) {
                        if (ch[j] == esc[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(esc)) {
                        for (int m = 0; m < strlen(add); m++) {
                                out[k] = add[m];
                                k++;
                        }
                }
		 
		out[k] = ch[i];
		k++;
	}

	for (int i = 0; i <strlen(tail); i++) {
                out[k] = tail[i];
                k++;
        }
	
	out[k] = '\0';

	printf("\nAfter Stuffing: %s\n", out);
	return 0;
}