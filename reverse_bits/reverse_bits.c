unsigned char	reverse_bits(unsigned char octet){

	unsigned char res = 0;
	int i = 0;

	while(i < 8){

		unsigned char bit = (octet >> i) & 1;
		res |= bit << (7 - i);
		i++;
	}
	
	return res;
}
