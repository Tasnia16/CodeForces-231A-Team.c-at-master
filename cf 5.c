#include<stdio.h>
int main(void)
{
    int i,l;
    char a[100];
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
            strlwr(a);
            }
            printf(".%c",a[i]);

        }
    }

}

