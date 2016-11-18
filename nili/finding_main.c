/*
this function, given a filename, prints the file's main func
*/
#define n 60
#define string_to_search "main"


void find_main(char *filename){
  file *fp=fopen(filename, 'r');
  char str[n];
  int flag=0;
  
  (fp == NULL)? perror("Error opening file"):0;
  
  while((!EOF)&&(!flag)){
    fgets (str, n, fp);
    flag=index(str,string_to_search)!=-1;
  }
  
  flag? printf(str), while(!EOF) printf(fgets(str,n,fp)) : 0;
  
  fclose(fp);
}
