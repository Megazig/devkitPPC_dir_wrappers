#ifndef DIR_H
#define DIR_H

#include <sys/dir.h>

DIR_ITER * diropen(const char * path);
int dirreset(DIR_ITER * dirState);
int dirnext(DIR_ITER * dirState, char * filename, struct stat *filestat);
int dirclose(DIR_ITER * dirState);

#endif /* end of include guard: DIR_H */
