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

char* dgscan_program_get_binary_name(dgscan_program* program) {
  return program->binary_name;
}

char* dgscan_program_get_name(dgscan_program* program) {
  return program->name;
}

char* dgscan_program_get_version(dgscan_program* program) {
  return program->version;
}

dgscan_program* dgscan_program_new() {
  dgscan_program* program = (dgscan_program*) malloc(sizeof(dgscan_program));
  return program;
}

void dgscan_program_print_banner(dgscan_program* program) {
  dgscan_banner* banner = dgscan_banner_new(program);
  char* string = dgscan_banner_get_string(banner);
  printf("%s", string);
  free(string);
  dgscan_banner_free(banner);
}

void dgscan_program_print_usage(dgscan_program* program) {
  printf("%s TARGET_IP\n\n", program->binary_name);
}

void dgscan_program_set_author(dgscan_program* program, char* author) {
  strncpy_s(program->author, sizeof program->author, author, sizeof program->author - 1);
}

void dgscan_program_set_binary_name(dgscan_program* program, char* binary_name) {
  strncpy_s(program->binary_name, sizeof program->binary_name, binary_name, sizeof program->binary_name - 1);
}

void dgscan_program_set_name(dgscan_program* program, char* name) {
  strncpy_s(program->name, sizeof program->name, name, sizeof program->name - 1);
}

void dgscan_program_set_version(dgscan_program* program, char* version) {
  strncpy_s(program->version, sizeof program->version, version, sizeof program->version - 1);
}
