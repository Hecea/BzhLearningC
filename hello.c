/* fichier d entete .h  stdio fait appel au  standard input output  du langage C
header file in order to use the printf function */

#include <stdio.h>


int main () {
  printf("Hello, world!\n");
  int x = 5;
  int y = 7;
  int z = 1;
  int total = x + y - z;
  printf( "test:" "%d", total );
  return 0;
}

/*
int for integer variable
main for main function, first to run
\n for a new line
return 0 terminates the main()
{Curly brackets indicate the beginning and end of a function also called a code block}
Pour compiler utiliser l outil de compilation gcc avec la commande :
gcc momfichier.c -o  lenomdefichierquejeveuxensortie
l argument -o  cree un fichier executable binaire  monfichier.exe
puis pour run the programme tapez:  ./ momfichie.exe
 */
