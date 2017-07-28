void zoom (char *input[], char *output[], int horFactor, int verFactor)
{
  int x, y, i, j;
  char reflectedX_Input[11][11];
  char reflectedXY_Input[11][11];

  /*
     Assumptions:
     (1) input is an array of NULL terminated string, with a NULL string at the end:
         e.g.
         input
         {
           "X--",
           "X--",
           "X--",
           NULL
         }
     (2) output is already allocated to the right x and y dimentions with the NULL terminations
         e.g.
         input
         {
           "X--",
           "X--",
           "X--",
           NULL
         }
         horFactor = 2, verFactor = 3
         output
         {
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6 
           "      ", length = 6
           NULL
         } 
  */

  xLen = strlen(input[0]);
  for (j = 0; input[j] != NULL; j++)
  { 
    for (i = 0; i < xLen; i++)
    {
       if (horFactor < 0)
       {
         reflectedX_Input[j][i] = input[j][xLen-1-i];
       }
       else
       {
         reflectedX_Input[j][i] = input[j][i];
       }
    }
  }

  yLen = j;
  for (i = 0; i < xLen; i++)
  {
    for (j = 0; j < yLen; j++)
    {
      if (verFactor < 0)
       {
         reflectedXY_Input[j][i] = reflectedX_Input[yLen-1-j][i];
       }
       else
       {
         reflectedXY_Input[j][i] = reflectedX_Input[j][i];
       }
    }
  }        
  /* reflectedXY_Input is a copy of input that is reflected across the horizontal axis if horFactor is negative and is reflected across the vertical axis if verFactor is negative  */
 
  if (horFactor < 0)
  {
    horFactor = horFactor*(-1);
  }
  if (verFactor < 0)
  {
    verFactor = verFactor*(-1);
  }

  for (y = 0; y < yLen; y++)
  {
    for (x = 0; x < xLen; x++)
    {
      for (j = (y * verFactor); j < ((y + 1) * verFactor); j++)
      {
        for (i = (x * horFactor); i < ((x + 1) * horFactor); i++)
        {
          output[j][i] = reflectedXY_Input[y][x];
        }
      }
    }
  }
}
