
#include <stdio.h>
#include <stdlib.h>
char table1[4][16] = { {58,	50,	42,	34,	26,	18,	10,	2,	60,	52,	44,	36,	28,	20,	12,	4 },
					{62,	54,	46,	38,	30,	22,	14,	6,	64,	56,	48,	40,	32,	24,	16,	8 },
					{57,	49,	41,	33,	25,	17,	9,	1,	59,	51,	43,	35,	27,	19,	11,	3},
					{61,	53,	45,	37,	29,	21,	13,	5,	63,	55,	47,	39,	31,	23,	15,	7 } };
char table2[8][6] = { {32,	1,	2,	3,	4,	5},
					{4,	5,	6,	7,	8,	9},
					{8,	9,	10,	11,	12,	13},
					{12,	13,	14,	15,	16,	17},
					{16,	17,	18,	19,	20,	21},
					{20,	21,	22,	23,	24,	25},
					{24,	25,	26,	27,	28,	29},
					{28,	29,	30,	31,	32,	1} };
char table3[8][4][16] = {{{14,	4,	13,	1,	2,	15,	11,	8,	3,	10,	6,	12,	5,	9,	0,	7},
						{0,	15,	7,	4,	14,	2,	13,	1,	10,	6,	12,	11,	9,	5,	3,	8},
						{4,	1,	14,	8,	13,	6,	2,	11,	15,	12,	9,	7,	3,	10,	5,	0},
						{15,	12,	8,	2,	4,	9,	1,	7,	5,	11,	3,	14,	10,	0,	6,	13}, },

						{{15,	1,	8,	14,	6,	11,	3,	4,	9,	7,	2,	13,	12,	0,	5,	10},
						{3,	13,	4,	7,	15,	2,	8,	14,	12,	0,	1,	10,	6,	9,	11,	5},
						{0,	14,	7,	11,	10,	4,	13,	1,	5,	8,	12,	6,	9,	3,	2,	15},
						{13,	8,	10,	1,	3,	15,	4,	2,	11,	6,	7,	12,	0,	5,	14,	9} },

						{ {10,	0,	9,	14,	6,	3,	15,	5,	1,	13,	12,	7,	11,	4,	2,	8},
						{13,	7,	0,	9,	3,	4,	6,	10,	2,	8,	5,	14,	12,	11,	15,	1},
						{13,	6,	4,	9,	8,	15,	3,	0,	11,	1,	2,	12,	5,	10,	14,	7},
						{1,	10,	13,	0,	6,	9,	8,	7,	4,	15,	14,	3,	11,	5,	2,	12} },

						{ {7,	13,	14,	3,	0,	6,	9,	10,	1,	2,	8,	5,	11,	12,	4,	15},
						{13,	8,	11,	5,	6,	15,	0,	3,	4,	7,	2,	12,	1,	10,	14,	9},
						{10,	6,	9,	0,	12,	11,	7,	13,	15,	1,	3,	14,	5,	2,	8,	4},
						{3,	15,	0,	6,	10,	1,	13,	8,	9,	4,	5,	11,	12,	7,	2,	14} },

						{{2,	12,	4,	1,	7,	10,	11,	6,	8,	5,	3,	15,	13,	0,	14,	9},
						{14,	11,	2,	12,	4,	7,	13,	1,	5,	0,	15,	10,	3,	9,	8,	6},
						{4,	2,	1,	11,	10,	13,	7,	8,	15,	9,	12,	5,	6,	3,	0,	14},
						{11,	8,	12,	7,	1,	14,	2,	13,	6,	15,	0,	9,	10,	4,	5,	3} },

						{{12,	1,	10,	15,	9,	2,	6,	8,	0,	13,	3,	4,	14,	7,	5,	11},
						{10,	15,	4,	2,	7,	12,	9,	5,	6,	1,	13,	14,	0,	11,	3,	8},
						{9,	14,	15,	5,	2,	8,	12,	3,	7,	0,	4,	10,	1,	13,	11,	6},
						{4,	3,	2,	12,	9,	5,	15,	10,	11,	14,	1,	7,	6,	0,	8,	13} },

						{{4,	11,	2,	14,	15,	0,	8,	13,	3,	12,	9,	7,	5,	10,	6,	1},
						{13,	0,	11,	7,	4,	9,	1,	10,	14,	3,	5,	12,	2,	15,	8,	6},
						{1,	4,	11,	13,	12,	3,	7,	14,	10,	15,	6,	8,	0,	5,	9,	2},
						{6,	11,	13,	8,	1,	4,	10,	7,	9,	5,	0,	15,	14,	2,	3,	12} },

						{{13,	2,	8,	4,	6,	15,	11,	1,	10,	9,	3,	14,	5,	0,	12,	7},
						{1,	15,	13,	8,	10,	3,	7,	4,	12,	5,	6,	11,	0,	14,	9,	2},
							{7,	11,	4,	1,	9,	12,	14,	2,	0,	6,	10,	13,	15,	3,	5,	8},
						{2,	1,	14,	7,	4,	10,	8,	13,	15,	12,	9,	0,	3,	5,	6,  11 } }};

char table4[4][8] = { {16,	7,	20,	21,	29,	12,	28,	17},
					{	1,	15,	23,	26,	5,	18,	31,	10},
					{	2,	8,	24,	14,	32,	27,	3,	9},
					{19,	13,	30,	6,	22,	11,	4,	25} };
char table5[4][14] = { {57,	49,	41,	33,	25,	17,	9,	1,	58,	50,	42,	34,	26,	18},
					{10,	2,	59,	51,	43,	35,	27,	19,	11,	3,	60,	52,	44,	36},
					{63,	55,	47,	39,	31,	23,	15,	7,	62,	54,	46,	38	,30,22},
					{14	,6	,61	,53	,45	,37	,29	,21	,13	,5,	28	,20,12,	4} };
char table6[16] = { 1,	1,	2,	2,	2,	2,	2,	2,	1,	2,	2,	2,	2,	2,	2,	1 };
char table7[3][16] = { {14,	17,	11,	24,	1,	5,	3,	28,	15,	6,	21,	10,	23,	19,	12,	4},
					{26,	8,	16,	7,	27,	20,	13,	2,	41,	52,	31,	37,	47,	55,	30,	40},
					{51,	45,	33,	48,	44,	49,	39,	56,	34,	53,	46,	42,	50,	36,	29,	32} };
char table8[4][16] = { {40,	8,	48,	16,	56,	24,	64,	32,	39,	7,	47,	15,	55,	23,	63,	31},
					{38,	6,	46,	14,	54,	22,	62,	30,	37,	5,	45,	13,	53,	21,	61,	29},
					{36,	4,	44,	12,	52,	20,	60,	28,	35,	3,	43,	11,	51,	19,	59,	27},
					{34,	2,	42,	10,	50,	18,	58,	26,	33,	1,	41,	9,	49,	17,	57,	25} };
unsigned char **keys;
unsigned char right[4];
unsigned char left[4];
unsigned char save_right[4];
unsigned char right_expanded[6];
unsigned char key_shrink[6];
unsigned char *message;
unsigned char *cypher;
unsigned char *hex;
unsigned char chunk[8];
int len_hex;
unsigned char key[9];
char b=0;
void copy_arr(unsigned char* arr, unsigned char* from, int len_from) {
	while (len_from--) {
		*arr = *from;
		arr++;
		from++;
	}
}
void xor (unsigned char* a, unsigned char* b, int len) {
	while(len--){
		(*a) = (*a) ^ (*b);
		a++;
		b++;
	}
}
void clean(char* p, int len) {
	while (len--) {
		*p = 0;
		p++;
	}
}
char get_bit(unsigned char* p, unsigned  char bit_index) {
	unsigned char bit = 0x80;
	p += bit_index / 8;
	bit = bit >> ((bit_index % 8 + 7) % 8);
	bit &= *p;
	bit = bit << ((bit_index % 8 + 7) % 8);
	return bit;
}
void permutetion_IP(unsigned char *from, unsigned char *to) {
	unsigned char bit;
	int i, j;
	clean(to, 64);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 16; j++) {
			bit = get_bit(from, table1[i][j]);
			bit = bit >> ((j % 8 + 7) % 8);
			to += j == 8;
			*to |= bit;
		}
		to++;
	}
}
void permutetion_FP(unsigned char* from, unsigned char* to) {
	unsigned char bit;
	int i, j;
	clean(to, 64);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 16; j++) {
			bit = get_bit(from, table8[i][j]);
			bit = bit >> ((j % 8 + 7) % 8);
			to += j == 8;
			*to |= bit;
		}
		to++;
	}
}
void E_expansion(unsigned char* from, unsigned  char* to) {
	unsigned char bit;
	int i, j,count=0;
	clean(to, 48);
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 6; j++) {
			count++;
			bit = get_bit(from, table2[i][j]);
			bit = bit >> ((j % 8 + 7) % 8);
			*to |= bit;
			to += count % 8 == 0;
		}
	}
}
void S_function(unsigned char* from, unsigned  char* to) {
	int i, j, k;
	unsigned char bit_index1=1, bit_index1_2=6;
	unsigned char bit,bit2;
	clean(to, 32);
	for (i = 0; i < 8; i++) {
		j = get_bit(from, bit_index1)|get_bit(from,bit_index1_2);
		k = get_bit(from, bit_index1+1) | get_bit(from, bit_index1+2)
			| get_bit(from, bit_index1 + 3)| get_bit(from, bit_index1 + 4);
		bit = table3[i][j][k];
		bit <<= 4;
		bit_index1 += 6;
		bit_index1_2 += 6;
		i++;
		j = get_bit(from, bit_index1) | get_bit(from, bit_index1_2);
		k = get_bit(from, bit_index1 + 1) | get_bit(from, bit_index1 + 2)
			| get_bit(from, bit_index1 + 3) | get_bit(from, bit_index1 + 4);
		bit2 = table3[i][j][k];
		bit |= bit2;
		*to = bit;
		to++;
		bit_index1 += 6;
		bit_index1_2 += 6;

	}
}
void P_permutation(unsigned char *from, unsigned char *to) {
	unsigned char bit;
	int i, j;
	clean(to, 32);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 8; j++) {
			bit = get_bit(from, table4[i][j]);
			bit = bit >> ((j % 8 + 7) % 8);
			*to |= bit;
		}
		to++;
	}
}

void PC1_permutation(unsigned char* from, unsigned  char* to) {
	unsigned char bit;
	int i, j,count=0;
	clean(to, 56);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 14; j++) {
			count++;
			bit = get_bit(from, table5[i][j]);
			bit = bit >> ((j % 8 + 7) % 8);
			*to |= bit;
			to += count % 8 == 0;
		}
	}
}
void rotate_left_key(unsigned char* p) {
	int i,j;
	unsigned char bits[7],mask;
	unsigned char bit_middle = get_bit(p, 29);
	for (i = 1; i <= 49; i += 8)
		bits[(i - 1) / 8] = ((get_bit(p, i))>>7);
	for (i = 0; i < 7; i++)
		p[i] = p[i] << 1;
	for (j = 0, i = 1; i < 7; i++, j++) {
		mask = bits[i] ^ 0xFF;
		p[j] &= mask;
		p[j] |= bits[i];
	}
	mask = 0xEF;
	p[4] &= mask;
	p[4] |= (bits[0]<<4);
	p[6] &= 0xFE;
	p[6] |= (bit_middle >> 7);
}
char* PC2_permutation(unsigned char *from, unsigned char *to) {
	unsigned char bit;
	int i, j;
	clean(to, 48);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 16; j++) {
			bit = get_bit(from, table5[i][j]);
			bit = bit >> ((j % 8 + 7) % 8);
			*to |= bit;
			to += j==8;
		}
		to++;
	}
}
void copy_keys(unsigned char* a, unsigned  char* b) {
	int i = 7;
	while(i--){
		*a = *b;
		a++;
		b++;
	}
}
void generate_keys(unsigned char *key) {
	int i,j;
	keys = malloc(sizeof(unsigned char*) * 16);
	for (i = 0; i < 16; i++)
		keys[i] = (char*)malloc(sizeof(unsigned char) * 6);
	for (i = 0; i < 16; i++) {
		j = table6[i];
		while (j--)
			rotate_left_key(key);
		PC2_permutation(key, key_shrink);
		copy_keys(keys[i], key_shrink);
	}
}
void feistel_function() {
	int i;
	unsigned char temp[4];
	for (i = 0; i < 16; i++) {
		copy_arr(save_right, right, 4);
		E_expansion(right, right_expanded);
		xor (right_expanded, keys[i],6);
		S_function(right_expanded, right);
		P_permutation(right, temp);
		xor (temp, left, 4);
		copy_arr(right, temp, 4);
		copy_arr(left, save_right, 4);
	}
}
void encrypt(){
	int i;
	for(i=0;i<80&&message[i]; i += 8) {
		permutetion_IP(message+i, chunk);
		copy_arr(right, chunk+ 4, 4);
		copy_arr(left, chunk, 4);
		feistel_function();
		copy_arr(cypher+i, right, 4);
		copy_arr(cypher + 4 + i, left, 4);
		permutetion_FP(cypher + i, chunk);
		copy_arr(cypher + i, chunk, 8);
	}
}
void to_hex(int len) {
	int i, j;
	unsigned char b;
	clean(hex, 160);
	for (i = j = 0; i < len; i++) {
		b = message[i];
		b = b >> 4;
		b &= 0xF;
		if (b < 10)
			b += 48;
		else
			b += 55;
		hex[j++] = b;
		b = message[i];
		b &= 0x0F;
		if (b < 10)
			b += 48;
		else
			b += 55;
		hex[j++]=b;
	}
}
void from_hex() {
	int i, j;
	unsigned char b,b2;
	clean(message, 80);
	for (i = j = 0; i < hex[i]; i++) {
		b = hex[i++];
		if (b > '9')
			b -= 55;
		else
			b -= 48;
		b = b << 4;
		b2 = hex[i];
		if (b2 > '9')
			b2 -= 55;
		else
			b2-= 48;
		b2 &= 0xF;
		b |= b2;
		message[j++] = b;
	}
}
void reverse_keys() {
	int i, j;
	unsigned char* t;
	for (i = 0, j = 15;j>i ; i++, j--) {
		t = keys[j];
		keys[j] = keys[i];
		keys[i] = t;
	}
}
void free_all() {
	int i;
	for (i = 0; i < 16; i++)
		free(keys[i]);
	free(cypher);
	free(message);
	free(hex);
}
void decrypt() {
	int i;
	for (i = 0; i < 80&&len_hex; i += 8) {
		permutetion_FP(message + i, chunk);
		copy_arr(right, chunk , 4);
		copy_arr(left, chunk+4, 4);
		feistel_function();
		copy_arr(cypher + i, right, 4);
		copy_arr(cypher + 4 + i, left, 4);
		permutetion_IP(message + i, chunk);
		copy_arr(cypher + i, chunk, 8);
	}
}
void play() {
	char op;
	int len;
	hex = malloc(160);
	message = malloc(80);
	cypher = malloc(80);
	do {
		puts("DES encryption\n1 = encrypt\n2 = decrypt\nother = exit");
		scanf("%c", &op);
		getchar();
		if (op == '1') {
			clean(message, 80);
			clean(cypher, 80);
			clean(hex, 160);
			printf("enter a line to encrypt: ");
			gets(message);
			printf("enter a key: ");
			gets(key);
			generate_keys(key);
			encrypt();
			to_hex(strlen(message));
			printf("encrypted: %s\n", hex);
		}
		else if (op == '2') {
			clean(message, 80);
			clean(cypher, 80);
			clean(hex, 160);
			printf("enter a line to decrypt: ");
			gets(hex);
			len_hex = strlen(hex)/2;
			from_hex();
			printf("enter a key: ");
			gets(key);
			generate_keys(key);
			reverse_keys();
			decrypt();
			printf("decrypted: %s\n", cypher);
		}
	} while (op == '1' || op == '2');
	
}
void main() {
	play();
	free_all();
	system("pause>0");
}