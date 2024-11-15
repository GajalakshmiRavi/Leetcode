int lengthOfLastWord(char* s) {
    int n,i=n,count=0;
    n=strlen(s);
    i=n-1;
    while(i>=0 && s[i]==' ')
     i--;
  while(i>=0 && s[i]!=' ')
  {
        count++;
        i--;
  }
 return count;
}