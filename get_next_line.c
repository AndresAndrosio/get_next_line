/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:55:25 by arozados          #+#    #+#             */
/*   Updated: 2026/10/29 11:44:24 by arozados         ###   ########.fr       */
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
    static char * start_at;
    if(BUFFER_SIZE <=0 || fd <3)
        return NULL;
    char * buffer=malloc(BUFFER_SIZE);
    char * all_str=malloc(BUFFER_SIZE);
    if(!buffer || all_str){
        free_all(buffer,all_str);
        return NULL;
    }
    readed=read(fd,buffer,BUFFER_SIZE);
    while(!get_next_line() && has_read_all_file() == 0){
        
    }
    free_all(buffer,all_str);
}
