/*
It’s time to say Goodbye. But not to programming right? So, print “Goodbye” 100 times. Isn’t that so easy? No, you’re wrong. Print “Goodbye” 100 times, but if i-th (where i means 1 to 100) term is an odd number then print “I Love Programming!”
For example:
	I Love Programming!
	Goodbye
	I Love Programming!
	Goodbye

This sequence will continue…. ;)
*/

#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("Goodbye\n");
        } else {
            printf("I Love Programming!\n");
        }
    }
    return 0;
}