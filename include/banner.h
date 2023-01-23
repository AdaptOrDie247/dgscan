#ifndef BANNER
#define BANNER
#include "program.h"
#define BANNER_LINE_SIZE 80
#define BANNER_LINE_COUNT 3
struct Banner {
  char name_line[BANNER_LINE_SIZE];
  char version_line[BANNER_LINE_SIZE];
  char author_line[BANNER_LINE_SIZE];
};
struct Banner* Banner_construct(struct Program* program);
void Banner_destruct(struct Banner* banner);
char* Banner_getAuthorLine(struct Banner* banner);
char* Banner_getNameLine(struct Banner* banner);
char* Banner_getString(struct Banner* banner);
char* Banner_getVersionLine(struct Banner* banner);
#endif