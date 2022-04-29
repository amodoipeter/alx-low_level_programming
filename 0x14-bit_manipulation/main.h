#ifndef F0B4E4DB_CDCA_4CDB_A282_2AB7B273F4DA
#define F0B4E4DB_CDCA_4CDB_A282_2AB7B273F4DA
#ifndef HEADER_H
#define HEADER_H
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);
#endif


#endif /* F0B4E4DB_CDCA_4CDB_A282_2AB7B273F4DA */
