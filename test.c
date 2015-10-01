#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base64.h"

int main(int argc, char** argv) {

  const char encoded[300] = "eyJWZXIiOjEsICJJRCI6MSwgIlRzdGFtcCI6MTQ0MzcwMDkxNSwgIlJzdGF0ZSI6Ik9OIiwgIlZzdGF0ZSI6Ik9QRU4iLCAiR3N0YXRlIjoiT0siLCAiVDEiOjU0LCAiVDIiOjI5LCAiVDMiOjE0LCAiVDQiOjI1LCAiS1ciOjAuMywgIktXSCI6MC4wLCAiSExtaW4iOjAuMCwgIkhMdG90YWwiOjAuMCwgIkNMbWluIjowLjAsICJDTHRvdGFsIjowLjB9";
  char decode[300];


  printf("%s\n", encoded);

  Base64decode(decode, "eyJWZXIiOjEsICJJRCI6MSwgIlRzdGFtcCI6MTQ0MzcwMDkxNSwgIlJzdGF0ZSI6Ik9OIiwgIlZzdGF0ZSI6Ik9QRU4iLCAiR3N0YXRlIjoiT0siLCAiVDEiOjU0LCAiVDIiOjI5LCAiVDMiOjE0LCAiVDQiOjI1LCAiS1ciOjAuMywgIktXSCI6MC4wLCAiSExtaW4iOjAuMCwgIkhMdG90YWwiOjAuMCwgIkNMbWluIjowLjAsICJDTHRvdGFsIjowLjB9");

    printf("%s\n", decode);

  return 0;
}
