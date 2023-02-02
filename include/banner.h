#ifndef DGSCAN_BANNER_H
#define DGSCAN_BANNER_H

#include "program.h"

#define DGSCAN_BANNER_LINE_SIZE 80
#define DGSCAN_BANNER_LINE_COUNT 5

typedef struct {
  char name_line[DGSCAN_BANNER_LINE_SIZE];
  char version_line[DGSCAN_BANNER_LINE_SIZE];
  char author_line[DGSCAN_BANNER_LINE_SIZE];
} dgscan_banner;

void dgscan_banner_free(dgscan_banner* banner);
char* dgscan_banner_get_string(dgscan_banner* banner);
void dgscan_banner_init(dgscan_banner* banner, dgscan_program* program);
dgscan_banner* dgscan_banner_new(dgscan_program* program);
void dgscan_banner_set_author_line(dgscan_banner* banner, char* author);
void dgscan_banner_set_name_line(dgscan_banner* banner, char* name);
void dgscan_banner_set_version_line(dgscan_banner* banner, char* version);

#endif
