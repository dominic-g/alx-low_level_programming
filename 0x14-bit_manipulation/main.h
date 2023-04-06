#ifndef DOMINIC_H
#define DOMINIC_H
int _putchar(char w);
unsigned int bin_to_uint(const char *n);
void print_binary(unsigned long int num);
int get_bit(unsigned long int num, unsigned int i);
int set_bit(unsigned long int *num, unsigned int i);
int clear_bit(unsigned long int *num, unsigned int i);
unsigned int flip_bits(unsigned long int num, unsigned long int mun);
int get_endianness(void);
#endif
