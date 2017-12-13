/*
** EPITECH PROJECT, 2017
** bsq.h
** File description:
** protos
*/

#ifndef BSQ_H
#define BSQ_H

char **double_tab(char *buffer, int size);
char **center(char **tab);
char **init_algo(char **tab);
char **anid_algo(char **tab);
char **get_lower(char **tab, int i, int j);
char **print_x(char **tab, char **mod_tab);
int get_higher(int mod_tab, int h_value);
int lower(int first_elm, int second_elm, int third_elem);
char **find_sqr(char **tab, int mod_tab, int h_value, int i, int j);
char **put_x(char **tab, int h_value, int i, int j);
int cti(char c);
char itc(int nb);

#endif
