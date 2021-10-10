#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "mentioner", "hetairas");
	hash_table_set(ht, "heliotropes", "neurospora");
	hash_table_set(ht, "neurospora", "heliotropes");
	hash_table_set(ht, "depravement", "serafins");
	hash_table_set(ht, "serafins", "depravement");
	hash_table_set(ht, "stylist", "subgenera");
	hash_table_set(ht, "subgenera", "stylist");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "synaphea", "joyful");
	hash_table_set(ht, "redescribed", "urites");
	hash_table_set(ht, "urites", "redescribed");
	hash_table_set(ht, "dram", "vivency");
	hash_table_set(ht, "vivency", "15");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
