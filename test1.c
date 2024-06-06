#include <stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
 FILE *fpt=fopen("test.txt","a");
 char temp[20]="\n i am the one two";
 fputs(temp,fpt);
 int pos=ftell(fpt);
 printf("%d\n",pos);
 fseek(fpt,10,SEEK_SET);

 pos=ftell(fpt);
  printf("%d",pos);

 fclose(fpt);
 
}
