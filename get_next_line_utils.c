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
int has_read_all_file (char * buffer, unsigned long long buffer_size)
{
    size_t len;
    if(!buffer)
        return (NULL);
    while(buffer[len] != '\n')
        len++;
    len++;
    if(len>=buffer_size)
        return 0;
    return 1;
    
}

char * start_to_print_at (char * buffer, char * last_char_printed)
{
    if(!buffer)
        return (NULL);
    char * end_at;
    //TODO: hacer logica para imprimir caracter hasta el enter y además devolver la ultima posicion impresa
    
    while(buffer == last_char_printed)
        buffer++
    return  end_at;

}