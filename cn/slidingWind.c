#include <stdio.h>
#include <string.h>
void bit_stuffing(char data[], int len) {
    int i, j, count;

    // Initialize the count to 0
    count = 0;

    // Loop through the data
    for (i = 0; i < len; i++) {
        // Check if the current bit is 1
        if (data[i] == '1') {
            count++;

            // If the count is 5, insert 0
            if (count == 5) {
                for (j = len; j > i; j--) {
                    data[j] = data[j-1];
                }
                data[i] = '0';
                len++;
                i++;
                count = 0;
            }
        }
        else {
            count = 0;
        }
    }

    // Print the stuffed data
    printf("After Bit stuffing: ");
    for (i = 0; i < len; i++) {
        printf("%c", data[i]);
    }
}

int main() {
    char data[100];
    int len;

    printf("Enter data: ");
    scanf("%s", data);
    len = strlen(data);

    bit_stuffing(data, len);

    return 0;
}