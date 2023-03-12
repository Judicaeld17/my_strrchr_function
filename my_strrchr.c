// Description
// Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string. Returns a pointer pointing to the last matching character, or null if no match was found.
char* my_strrchr(char* range,char elmnt){
   char* temp=0; 
    while(*range!='\0'){
        if(*range== elmnt){
           temp=range;
        }
        range++;
    }
    if(temp!=0){
        return temp;
    }
    return 0;
}