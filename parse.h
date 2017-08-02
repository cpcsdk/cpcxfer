/*
	Duke 2016
	
*/

#ifndef _PARSE_H_
#define _PARSE_H_



#ifdef __unix__  
int strnicmp(char const *a, char const *b, unsigned int lenght);
#endif

int pathPos(const char * const filename, int len);
int formatfn(char *sfn, char *filename);
void getExtension(char *ext, char *filename);
int findString(const char * const fstr, const char * const str, int size);

#endif
