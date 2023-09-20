#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	 char string1[] = "String a ser separada";
	 char **split1;
	
	 split1 = ft_split(string1, ' ');
	 printf("%s | delim: ' '\n", string1);
	 while(*split1 != NULL)
	 {
	 	printf("%s\n", *split1);
	 	split1++;
	 }
	 printf("\n");
	
	 char string2[] = "Stringxaxserxseparada";
	 char **split2;
	
	 split2 = ft_split(string2, 'x');
	 printf("%s | delim: 'x'\n", string2);
	 while(*split2 != NULL)
	 {
	 	printf("%s\n", *split2);
	 	split2++;
	 }
	 printf("\n");
	
	 char string3[] = "String_a_ser_separada";
	 char **split3;
	
	 split3 = ft_split(string3, '_');
	 printf("%s | delim: '_'\n", string3);
	 while(*split3 != NULL)
	 {
	 	printf("%s\n", *split3);
	 	split3++;
	 }
	 printf("\n");
	
	 char string4[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	 char **split4;
	
	 split4 = ft_split(string4, ' ');
	 printf("%s | delim: ' '\n", string4);
	 while(*split4 != NULL)
	 {
	 	printf("%s\n", *split4);
	 	split4++;
	 }
	 printf("\n");
	
	 char string5[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse  ";
	 char **split5;

	 split5 = ft_split(string5, ' ');
	 printf("%s | delim: ' '\n", string5);
	 while(*split5 != NULL)
	 {
	 	printf("%s\n", *split5);
	 	split5++;
	 }
	printf("\n");
	
	char string6[] = "   tripouille  42   ";
	char **split6;
	split6 = ft_split(string6, ' ');
	printf("%s | delim: ' '\n", string6);
	while(*split6 != NULL)
	{
		printf("%s\n", *split6);
		split6++;
	}
}
