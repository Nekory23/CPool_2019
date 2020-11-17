#!/usr/bin/env bash
##
## EPITECH PROJECT, 2019
## CPool_Day07_2019
## File description:
## build a library
##

gcc -c *.c
ar rc libmy.a *.o
rm *.o
