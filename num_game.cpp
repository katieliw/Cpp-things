#include <cstdlib> // for atoi
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
 srand (time(NULL));
 int num = rand() % 20 + 1;
 int x;
 char instring[100];
 //char exit_string[] = "end";
 std::cout << "Let's play a guessing game." << std::endl;
 std::cout << "Type '0' if you wish to stop playing." << std::endl;
 std::cout << "Guess a number from 1 to 20!" << std::endl;
 do {
  fgets(instring, 100, stdin);
//  if (strcmp (instring, "end") == 0) {
//    return 0;
//  } else {
   x = atoi(instring);
   if (x == 0) {
    std::cout << "Quitting game." << std::endl;
    return 0;
   } else if (x > num) {
    std::cout << "Try a smaller number." << std::endl;
   } else if (x < num) {
    std::cout << "Try a larger number." << std::endl;
   }
//  }
 } while (x != num);
 std::cout << "You guessed " << x << " correctly! Congrats!" << std::endl;
 return 0;
}
