#include <stdio.h>

int main(){

char s='S';
printf("input s or S");
scanf("%c",&s);

if(s=='s'){
printf("%c",s);
s=s-10;
printf("%c",s);
s=s+9;
printf("%c",s);
s=s-3;
printf("%c",s);
s=s-5;
printf("%c",s);
s=s-1;
printf("%c",s);
s=s-5;
printf("%c",s);
printf("%c",s);
s=s+5;
printf("%c",s);
s=s+5;
printf("%c",s);

}

if(s=='S'){
printf("%c",s);
s=s-(10+32);
printf("%c",s);
s=s+9-32;
printf("%c",s);
s=s-3-32;
printf("%c",s);
s=s-5-32;
printf("%c",s);
s=s-1-32;
printf("%c",s);
s=s-5-32;
printf("%c",s);
printf("%c",s);
s=s+5-32;
printf("%c",s);
s=s+5-32;
printf("%c",s);

}

return 0;
}

