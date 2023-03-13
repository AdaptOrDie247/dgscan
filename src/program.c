#include "../include/banner.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dgscan_program_free(dgscan_program* program) {
  if (program) {
    free(program);
  }
}

char* dgscan_program_get_author(dgscan_program* program) {
  return program->author;
}

char* dgscan_program_get_banner(dgscan_program* program) {
  dgscan_banner* banner = dgscan_banner_new(program);
  char* string = dgscan_banner_get_string(banner);
  dgscan_banner_free(banner);
  return string;
}

char* dgscan_program_get_binary_name(dgscan_program* program) {
  return program->binary_name;
}

char* dgscan_program_get_name(dgscan_program* program) {
  return program->name;
}

char* dgscan_program_get_usage(dgscan_program* program) {
  int usage_size = 300;
  char* usage = malloc(usage_size);
  snprintf(usage, usage_size, "%s TARGET_IP\n\n", program->binary_name);
  return usage;
}

char* dgscan_program_get_version(dgscan_program* program) {
  return program->version;
}

dgscan_program* dgscan_program_new() {
  dgscan_program* program = malloc(sizeof(dgscan_program));
  strncpy(program->name, "", sizeof program->name - 1);
  strncpy(program->author, "", sizeof program->author - 1);
  strncpy(program->version, "", sizeof program->version - 1);
  strncpy(program->binary_name, "", sizeof program->binary_name - 1);
  return program;
}

void dgscan_program_set_author(dgscan_program* program, char* author) {
  strncpy(program->author, author, sizeof program->author - 1);
}

void dgscan_program_set_binary_name(dgscan_program* program, char* binary_name) {
  strncpy(program->binary_name, binary_name, sizeof program->binary_name - 1);
}

void dgscan_program_set_name(dgscan_program* program, char* name) {
  strncpy(program->name, name, sizeof program->name - 1);
}

void dgscan_program_set_version(dgscan_program* program, char* version) {
  strncpy(program->version, version, sizeof program->version - 1);
}
