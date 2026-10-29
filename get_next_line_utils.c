# include "get_next_line.h"

char *get_position_return(char * buffer)
{
    
    while(buffer++){
        if(*buffer =='\n'){
            return buffer; 
        }
    }
    return NULL;
}
int has_read_all_file (char * buffer)
{
    size_t len;
    if(!buffer)
        return (NULL);
    while(buffer[len] != '\n')
        len++;
    len++;
    if(len>=BUFFER_SIZE)
        return 0;
    return 1;
    
}

char * gnl (char * buffer, char * last_char_printed)
{
    char * end_at;
    
    size_t i;
    if(!buffer)
        return (NULL);
    
    while(buffer[i] != last_char_printed && i < BUFFER_SIZE)
        i++;
    end_at=buffer[i];
    return  end_at;
}
