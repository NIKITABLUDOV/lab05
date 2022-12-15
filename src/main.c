#include <stdio.h>

int main()
{
    int x, y, res;
    x = 20;
    y = 1;
    res = 0;
    
   while( x%y !=0 )
   {  
       y++;
   }
   if(x == y)
   {    
       res = 1;      
   }   
    return res;
}

