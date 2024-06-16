#include <stdio.h>
#include "draw.h" // project-related declarations

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    fputs("Select which shape you want to print (Triangle = t, Square = s, Upside Down Arrow = a, Chars = c) or 'q' to quit\n> ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'a':
      puts("You selected arrow:");
      print_arrow(5, 5, 7);
      break;
    case 'c':
      puts("You selected chars:");
      puts("How would you like to print your characters?");
      puts("Normal = n, Sideways = s");
      int p;
      while ((p = getchar()) == '\n');
      if(c == EOF)
	goto done;

      if(p == 'n'){
	printf("You selected normal:");
	for (char c = 'a'; c < 'd'; c++)
	  print_char_up_5x7(c);
      }
      else if(p == 's'){
	printf("You selected sideways:");
	for (char c = 'a'; c < 'd'; c++)
	  print_char_5x7(c);
      }
      else{
	printf("Unrecognized option '%c', going back to the main menu...\n", c);
      }
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}

