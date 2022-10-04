//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//		count++;
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%c", &n)) != EOF)
//	{
//		    if(n=='\n')
//				printf("\\n");
//			else if(n=='\t')
//				printf("\\t");
//			else
//				printf("%c %d ", n,n);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	int B=0;
//	int s=0;
//	int o=0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//			B++;
//		else if (islower(ch))
//			s++;
//		else
//			o++;
//	}
//	printf("大写：%d 小写 %d 其他 %d ", B, s, o);
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <stdbool.h>
//
//int main(void)
//{
//    float count;
//    bool inword = false;
//    int ch, words, letter;
//    words = letter = 0;
//
//    printf("Please enter some words (EOF to quit):\n");
//    while ((ch = getchar()) != EOF)
//    {
//        if (ispunct(ch))
//        {
//            continue;
//        }
//        if (isalpha(ch))
//        {
//            letter++;
//        }
//        if (!isspace(ch) && !inword)
//        {
//            inword = true;
//            words++;
//        }
//        if (isspace(ch) && inword)
//        {
//            inword = false;
//        }
//    }
//    count = (float)letter / words;
//    printf("Total words: %d.\n", words);
//    printf("Total letters: %d.\n", letter);
//    printf("Average letters of words: %g.\n", count);
//
//    return 0;
//}



