/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:55:25 by arozados          #+#    #+#             */
/*   Updated: 2026/10/29 16:13:11 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
free_all(char * buffer, char * all_str)
{
    free(buffer);
    free(all_str);
    buffer=NULL;
    all_str=NULL;
    
}

get_next_line(int fd){
    static char * last_char_printed;
    size_t i;
    size_t bytes_readed;
    
    i=0;
    if(BUFFER_SIZE <=0 || fd <3)
        return NULL;
    char * buffer=malloc(BUFFER_SIZE);
    


    if(!buffer || all_str){
        free_all(buffer,all_str);
        return NULL;
    }
    
    while(!get_position_return(readed) && bytes_readed != 0){
        bytes_readed=read(fd,buffer,BUFFER_SIZE);
        while(buffer[i]!=last_char_printed)
            i++;
              
    }
    free_all(buffer,all_str);
}
