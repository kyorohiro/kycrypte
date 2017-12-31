#include "mbedtls/sha1.h"
#include <stdio.h>


static void print_hex(const char *title, const unsigned char buf[], size_t len)
{
    printf("%s: ", title);

    for (size_t i = 0; i < len; i++)
        printf("%02x", buf[i]);

    printf("\r\n");
}
int main(int argc, char** argv) {
	unsigned char output[20];
	const char hello_str[] = "Hello, world!";
	const unsigned char* src = (const unsigned char *) hello_str;
	int srcLen = sizeof(src) - 1;
	mbedtls_sha1( src, srcLen, output);
    print_hex("Method 1", output, sizeof output);
}