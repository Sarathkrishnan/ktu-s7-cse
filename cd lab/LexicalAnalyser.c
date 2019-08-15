/******************************************************************************

Compiler Design Lab : Course Code - CS 431

Experiment NO	: 1
Program			: 'LEXICAL ANALYZER' IN  C
Semester 		: S7 CSE
College 		: SHM College Of Engineering Kadakkal
Date			: 13/08/2019

Compiler		: Turbo C, Windows	

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void
main ()
{


  char *exp, c, word[10], pra, d = '\0', cons[5];
  char key[20][20] = {
    "if",
    "else",
    "the",
    "while",
    "do",
    "for",
    "char",
    "int",
    "float",
    "print",
    "scanf",
    "void"
  };
  int i, j, row1 = 6, row2 = 6, row3 = 5, row4 = 5, row5 = 8;
  int t = 0, x = 0, pras;
  clrscr ();
  printf ("\n\nEnter the expression:");
  gets (exp);
  printf ("\nOperator identifier symbol keyword constant\n");
  for (i = 0; i < strlen (exp) + 1; i++)
    {
      c = *(exp + i);
      if (c == '(' || c == '}' || c == '[' || c == ')' || c == '{' || c == ']'
	  || c == ';' || c == '.' || c == '\'' || c == ',')
	{
	  gotoxy (25, row1++);
	  printf ("%c", c);
	  row3++;
	}
      else
	{
	  if (c == '^' || c == '-' || c == '&' || c == '>' || c == '='
	      || c == '/' || c == '+' || c == '*')
	    {
	      if (c == '=' && (d == '+' || d == '^' || d == '/' || d == '='))
		{
		  gotoxy (3, row1++);
		  printf ("\n%c", c);
		}
	      else if ((c == '+') && (d == '+'))
		{
		  gotoxy (3, row1--);
		  printf ("%c", c);
		}
	      else if ((c == '-') && (d == '-'))
		{
		  gotoxy (3, row1--);
		  printf ("%c", c);
		}
	      else if ((c == '=') && (d == '>'))
		{
		  gotoxy (3, row1--);
		  printf ("%c", c);
		}
	      else if ((c == '=') && (d == '<'))
		{
		  gotoxy (3, row1--);
		  printf ("%c", c);
		}
	      else
		{
		  gotoxy (2, row1--);
		  printf ("%c", c);
		}
	      row1++;
	      d = c;
	    }
	  if (isalpha (c))
	    {
	      word[t] = c;
	      pra = word[t];
	      cons[x] = '\0';
	      t++;
	      d = '5';
	    }
	  else
	    {
	      word[t] = '\0';
	      pra = word[t];
	      cons[x] = '\0';
	      t = 0;
	    }
	  if (isdigit (c))
	    {
	      cons[x] = '\0';
	      pras = cons[x];
	      x++;
	    }
	  else
	    {
	      cons[x] = '\0';
	      pras = cons[x];
	      x = 0;
	    }
	  if ((pras == '\0') && (cons[0] != '\0'))
	    {
	      gotoxy (45, row5);
	      row5++;
	      printf ("%s", cons);
	      row5++;
	    }
	  if ((pra == '\0') && (word[0] != '\0'))
	    {
	      for (j = 0; j <= 16; j++)
		{
		  if (strcmp (word, key[j]) == 0)
		    {
		      gotoxy (35, row4);
		      printf ("%s", word);
		      row4++;
		      break;
		    }
		  else if (j == 16)
		    {
		      gotoxy (16, row2);
		      printf ("%s", word);
		      row2++;
		    }
		}
	    }
	}
      getch ();
    }
}
