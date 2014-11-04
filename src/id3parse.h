#ifndef _MP3BL_CLASS_ID3PARSE_
#define _MP3BL_CLASS_ID3PARSE_

#include <stdio.h>
#include <stdlib.h>

struct id3header
{
	char songname[31];
	char artist[31];
	char type[31];
	char year[5];
	char etc[31];
	unsigned char genre;
	//char genre_txt[41]; 
};

class id3Parse
{
public:

	id3Parse(const char *filename);
	~id3Parse();

	struct id3header *parseID3();
	int writeID3(struct id3header *);

private:
	int search_header(FILE *);
	int appendNewID3Header(FILE *);
	char *getGenre(const char);

	char *flnam;
	id3header *song;
};

#endif
