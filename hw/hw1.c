/*
 * Name: Le
 * Class: CS166-02
 * Date: January 1 2016
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 A sample run of this program, compiled to the executable 'revstr':
    $ ./revstr
    Usage: ./revstr <word to reverse>
    $ ./revstr hello
    Rev string is olleh
    $ ./revstr racecar
    Rev string is racecar
    $ ./revstr spartan
    Rev string is natraps
 */

 void myreverse(char* input, char rev[], int len)
 {
 	int x;
 	for (x = len - 1; x >= 0; x--)
 	{
 		rev[len - 1 - x] = input[x];
 	}
 	rev[len] = input[len];
 }

/**
 * You may ***NOT** change the main method in any way.
 */
int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("Usage: %s <word to reverse>\n", argv[0]);
    exit(1);
  }
  char* input = argv[1];
  int len = strlen(input);
  char rev[len + 1]; // Adding one for the null terminator
  myreverse(input, rev, len);
  printf("Rev string is %s\n", rev);
}

