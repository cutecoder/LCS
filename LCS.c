#include <stdio.h>
#include <string.h>

int main()
{
    char string[250000],subString[250000];
    int count=0,i,j,first=0,pos=0;
    
     scanf("%s",subString);
     scanf("%s",string);
   
  
    for(i=0;i<strlen(string);i++)
    {
        for(j=0;j<strlen(subString);j++)
        {
            
            if(string[i]==subString[j])
            {
                
                if(pos==0 && first==0)
                {
                    pos = j;
                    count++;
                    first=1;
                    break;
                }
                
                if(j == pos+1)
                {
                    count++;
                    pos=j;
                }
                
                break;
                
            }
        }
        
    }

    
    
    printf("%d",count);
    
    return 0;
}


