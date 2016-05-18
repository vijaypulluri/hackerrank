#include <stdio.h>
int main()
{
    char s[100];
    int l=0,a[10]={0,0,0,0,0,0,0,0,0,0};
    
    scanf("%s",s);
    
    while(s[l])
    {
    	switch(s[l])
    	{
    		case '0':
    			++a[0];
    			break;
    		case '1':
    			++a[1];
    			break;
    		case '2':
    			++a[2];
    			break;
    		case '3':
    			++a[3];
    			break;
    		case '4':
    			++a[4];
    			break;
    		case '5':
    			++a[5];
    			break;
    		case '6':
    			++a[6];
    			break;
    		case '7':
    			++a[7];
    			break;
    		case '8':
    			++a[8];
    			break;
    		case '9':
    			++a[9];
    			break;
    	}
    	++l;
    }
    for(l=0;l<10;l++)
    	printf("%d %d\n",l,a[l]);
    
    return 0;
}