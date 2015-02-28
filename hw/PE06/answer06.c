#include <stdio.h>
#include <stdlib.h>
#include "answer06.h"

// if you want to declare and define new functions, put them here
// or at the end of the file


// do not remove #ifndef and #endif in this file, otherwise the evaluation
// would fail and you would definitely get 0
// any new functions you want to create and use in this file 
// should appear above these comments or at the end of this file

#ifndef NTEST_ALLOC

// allocate space for nrow x ncol maze, if allocation fails, return NULL
// if allocation fails, you are also responsible for freeing the memory
// allocated before the failure

char **Allocate_maze_space(int nrow, int ncol)
{
   return NULL;
}

#endif /* NTEST_ALLOC */

#ifndef NTEST_DEALLOC

// free the memory used for the maze
// you may assume that maze is not NULL, and all memory addresses are valid

void Deallocate_maze_space(char **maze, int nrow) 
{
   return;
}

#endif /* NTEST_DEALLOC */

#ifndef NTEST_READ2D

/* Read maze in a multi-line file into a 2D array of characters */
/* you may assume that the maze has odd row and column counts */

char **Read_maze_from_2Dfile(FILE *fptr, int *nrow, int *ncol)
{
   *nrow = *ncol = 0;
   return NULL;
}

#endif /* NTEST_READ2D */

#ifndef NTEST_WRITE2D

/* Write maze in a 2D array of characters into a multi-line file */
/* you may assume that the maze has odd row and column counts */

int Write_maze_to_2Dfile(char *filename, char **maze, int nrow, int ncol) 
{
   return -1;
}

#endif /* NTEST_WRITE2D */

#ifndef NTEST_EXPANDROW

/* Expand the maze from nrow x ncol to (2nrow - 1) x ncol */
/* the top half of the maze is the same as the original maze */
/* the bottom half of the maze is a reflection of the original maze */
/* *rrow and *rcol have to be updated with the new row and column counts */
/* You have to create a new maze */
/* if you can't expand the maze because of memory issue, NULL should be */
/* returned, and both *rrow and *rcol set to 0 */
/* the original maze has to stay intact */
/* you may assume that the original maze has odd row and column counts */

char **Expand_maze_row(char **maze, int nrow, int ncol, int *rrow, int *rcol)
{
   *rrow = *rcol = 0;
   return NULL;
}

#endif /* NTEST_EXPANDROW */

#ifndef NTEST_EXPANDCOL 

/* Expand the maze from nrow x ncol to nrow x 2ncol - 1 */
/* the left half of the maze is the same as the original maze */
/* the right half of the maze is a reflection of the original maze */
/* moreover, you have to create an opening between the left and right halves */
/* the opening should be at the middle row of the maze */
/* the opening must also be accessible from one of the grass-paths in the */
/* new maze */
/* to do that, you have to convert some locations with corns to grass */
/* starting from the new opening to the left and to the right until you reach */
/* a location that is adjacent to a location that has grass */
/*                                                                       */
/* *crow and *ccol have to be updated with the new row and column counts */
/* You have to create a new maze */
/* if you can't expand the maze because of memory issue, NULL should be */
/* returned, and both *crow and *ccol set to 0 */
/* the original maze has to stay intact */
/* you may assume that the original maze has odd row and column counts */

char **Expand_maze_column(char **maze, int nrow, int ncol, int *crow, int *ccol)
{
   *crow = *ccol = 0;
   return NULL;
}

#endif /* NTEST_EXPANDCOL */

// if you want to declare and define new functions, put them here
// or at the beginning of the file
