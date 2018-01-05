#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *myfile;
    char *nameFile,textFile[1000],*itxt,*chart;
    int i = 0,count = 0;

    nameFile = argv[1];
    chart = argv[2];
    myfile = fopen (nameFile, "r");
    if (myfile != NULL)
    {
        while (fgets (textFile, 1000, myfile) != NULL)
        {
            i++;
            while(strstr(textFile,chart) != NULL)
            {
                itxt = strstr(textFile,chart);
                if(itxt != NULL)
                    printf("%d:%d %s\n",i,(itxt-textFile+1),chart);
                void strnset(char[],char,int);
                strnset(textFile,' ',(itxt-textFile+1));
                count = 1;
            }
        }  
    }else
        printf("Failed to find or read file!");
    if(count == 0)
        printf("The string is not found!");
    fclose(myfile);
    return 0;
}
