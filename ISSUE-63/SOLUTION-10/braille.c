#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <ctype.h>

int main()
{
    int i,j ;
    char ab[26][3][2] = {
        {{'.',' '},{' ',' '},{' ',' '}}, //0
        {{'.',' '},{'.',' '},{' ',' '}}, //1
        {{'.','.'},{' ',' '},{' ',' '}}, //2
        {{'.','.'},{' ','.'},{' ',' '}}, //3
        {{'.',' '},{' ','.'},{' ',' '}}, //4
        {{'.','.'},{'.',' '},{' ',' '}}, //5
        {{'.','.'},{'.','.'},{' ',' '}}, //6
        {{'.',' '},{'.','.'},{' ',' '}}, //7
        {{' ','.'},{'.',' '},{' ',' '}}, //8
        {{' ','.'},{'.','.'},{' ',' '}}, //9
        {{'.',' '},{' ',' '},{'.',' '}}, //10
        {{'.',' '},{'.',' '},{'.',' '}}, //11
        {{'.','.'},{' ',' '},{'.',' '}}, //12
        {{'.','.'},{' ','.'},{'.',' '}}, //13
        {{'.',' '},{' ','.'},{'.',' '}}, //14
        {{'.','.'},{'.',' '},{'.',' '}}, //15
        {{'.','.'},{'.','.'},{'.',' '}}, //16
        {{'.',' '},{'.','.'},{'.',' '}}, //17
        {{' ','.'},{'.',' '},{'.',' '}}, //18
        {{' ','.'},{'.','.'},{'.',' '}}, //19
        {{'.',' '},{' ',' '},{'.','.'}}, //20
        {{'.',' '},{'.',' '},{'.','.'}}, //21
        {{' ','.'},{'.','.'},{' ','.'}}, //22
        {{'.','.'},{' ',' '},{'.','.'}}, //23
        {{'.','.'},{' ','.'},{'.','.'}}, //24
        {{'.',' '},{' ','.'},{'.','.'}}, //25

    };
    char line0[256] , line1[256] , line2[256] ;
    char in[128] ;
    memset ( line0 , 0 , 256 ) ;
    memset ( line1 , 0 , 256 ) ;
    memset ( line2 , 0 , 256 ) ;
    printf ( "input word ( only a-z char) :") ;
    scanf("%s", in ) ;
    for(i=0;in[i]!=0;i++) {
        if ( !isalpha(in[i])) {
            printf ( "there is character %c is not alphabetic\n" , in[i]) ;
            return  0 ;
        }
        in[i] = tolower(in[i]);
    }
    for ( i=0 ;in[i]!=0; i++) {
        j = (int)(in[i] - 'a') ;
        line0[i*2] = ab[j][0][0] ;
        line0[i*2+1] = ab[j][0][1] ;
        line1[i*2] = ab[j][1][0] ;
        line1[i*2+1] = ab[j][1][1] ;
        line2[i*2] = ab[j][2][0] ;
        line2[i*2+1] = ab[j][2][1] ;
    }
    printf("%s\n%s\n%s\n",line0,line1,line2);
    return 0;
}
