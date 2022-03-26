#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char s[100];
    scanf("%[^\n]%*c", &s); // 
    printf("Hello, world\n%s", s);

    return 0;
}
/* reakdown of scanf("%*[^\n]%*c"):

    %*[^\n] scans everything until a \n, but doesn't scan in the \n. The asterisk(*) tells it to discard whatever was scanned.
    %*c scans a single character, which will be the \n left over by %*[^\n] in this case. The asterisk instructs scanf to discard the scanned character.

Both %[ and %c are format specifiers. You can see what they do here. The asterisks in both the specifiers tell scanf, not to store the data read by these format specifiers.

As @chux commented below, it will clear a single line of the stdin (Standard Input Stream) up to and including the newline character. In your case, the line with invalid input gets cleared from the stdin.

It is better to use

scanf("%*[^\n]");
scanf("%*c");

to clear the stdin. This is because, in the former case (single scanf), %*[^\n] will fail when the first character to be scanned is the \n character and the rest of the format string of the scanf will be skipped which means that the %*c will not function and thus, the \n from the input will still be in the input stream. In this case, this will not happen as even when the first scanf fails, the second one will execute as they are separate scanf statements. */