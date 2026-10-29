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

char * show_char (char * buffer)
{
    if()
    char * end_at;
    //TODO: hacer logica para imprimir caracter hata el enter y además devolver la ultima posicion impresa
      return  end_at;

}