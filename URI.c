void write(char str[],char file[],char mode[]){
    FILE *fp;
 
    fp = fopen(file,mode);
 
    if(fp == NULL) {
        printf("file couldn't be opened\n");
    }

    fputs(str,fp);
    printf("%s",fclose(fp)==0 ? "file written successfully\n" : "error writing file\n");
}

void URI_JSON(char *a,char *b) {
     int i,c,end[100],t=0,r=0;
     int key[20][2];
     key[0][0]=0;
     key[0][1]=0;
     t++;
     while(a[i]!='\0'){
        if(a[i]=='&'){
            key[t][0]=i;c=i;
            while(a[c]!='='){
                c++;
            }
            key[t][1]=c;c=0;t++;
        }
        i++;
     }
     
     key[t][0]=i;
     
     b[r]='{';r++;

     for(i=1;i<t;i++){
         b[r]='\"';r++;
         for(c=key[i][0]+1;c<key[i][1];c++){
            b[r]=a[c];
            r++;
         }
         b[r]='\"';r++;
         b[r]=':';r++;
         b[r]='\"';r++;
         for(c=key[i][1]+1;c<key[i+1][0];c++){
            b[r]=a[c];
            r++;
         }
         b[r]='\"';r++;
         if(t<i+2){
            b[r]='}';r++;
         }
         else{
            b[r]=',';r++;
         }
     }
}