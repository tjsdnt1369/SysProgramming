#include <stdio.h>
#include <string.h>
#include "copy.h"
char line[MAXLINE];
char longest[MAXLINE];

main(){
	int len;
	int max;
	max = 0;
	while (fgets(line, 100, stdin) !=NULL){
		len = strlen(line);
		if (len >max){
			max = len;
			copy(line,longest);
		}
	}
	if (max > 0)
		printf("%s",longest);

	return 0;
}
copy(char from[], char to[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
