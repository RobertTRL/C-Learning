#include <stdio.h>
#include <stdlib.h> /* for atof() */
CHAPTER 4
#define MAXOP 100
#define NUMBER '0
/* max size of operand or operator */
/* signal that a number was found */
int getop(char [[);
void push(double);
double pop(void);
/* reverse Polish calculator */
main() {

int type;
double op2;
char s[MAXOP];
while ((type = getop(s)) 1= EOF) {
switch (type) {
case NUMBER:
push(atof(s));
break;
case '+':
push(pop() + pop());
break;
case '*':
push(pop() * pop());
break;
case '-’:
op2 = pop();
push(pop() - op2);
break;
case'/':
op2 = pop();
if (op2 1= 0.0)
else
push (pop() / op2);
printf("error: zero divisor\n");
break;
case '\n':
printf("\t%.8g\n", pop());
break;
default:
printf("error: unknown command %s\n", s);
break;
}
}
return 0;