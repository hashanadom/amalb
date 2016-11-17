/*
the functions in this lib are in charge of editing files,
copy_2_files-given three filenames, copys the contents of the first file to all the other files
add_end- given two filenames appends the contents of the first file to the end of the 
*/
void copy_2_files(char *fn1,char *fn2,char *fn3){
  file *f1=fopen(fn1,'tr');
  file *f2=fopen(fn2,'ta');
  file *f3=fopen(fn3,'ta');
  char *current;
  while(!EOF){
    current=fgetch(f1);
    fputch(f2,current);
    fputch(f3,current);
  }
  fclose(f1);
  fclose(f2);
  fclose(f3);
}

void add_end(char *fn1, char *fn2){
  file *f1=fopen(fn1,'tr');
  file *f2=fopen(fn2,'ta');
  
  while(!EOF){
    fputch(f2,fgetch(f1));
  }
  
  fclose(f1);
  fclose(f2);
}
