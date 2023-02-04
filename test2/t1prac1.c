#include <stdio.h>
#include <ctype.h>
int main() {
  int index, freq[26], c, stars, maxfreq;
  for (index=0; index<26; index++)
    freq[index] = 0;
  while ( (c = getchar()) != '7') {
    if (isalpha(c))
      freq[tolower(c)-'a']++;
  }
  maxfreq = freq[25];
  for (index = 24; index >= 0; index--) {
    if (freq[index] > maxfreq)
      maxfreq = freq[index];
  }
  printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n");
  for (index=0; index<26; index++) {
    for (stars=0; stars< (maxfreq - freq[index]); stars++)
       printf(" ");
    for (stars=0; stars< (freq[index]); stars++)
       printf("*");
    printf("%c", ('A' + index) );
    printf(" \n");
  }
  return 0;
}
