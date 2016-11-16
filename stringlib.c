
int strlen(char *strptr){
  char *startptr=strptr;
  while(++strptr);
  return startptr-strptr;
}

