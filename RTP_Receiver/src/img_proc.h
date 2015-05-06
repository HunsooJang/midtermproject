#ifndef img_proc_rw_img_proc_h
#define img_proc_rw_img_proc_h


#include <stdlib.h>
#include <stdio.h>
#include <string.h> //for memcpy


struct RGB {
	unsigned char R;
	unsigned char G;
	unsigned char B;
};
struct YCbCr {
	unsigned char Y;
	unsigned char Cb;
	unsigned char Cr;
};
struct YCbCr_MACRO{
	unsigned char Y[256];
	unsigned char Cb[64];
	unsigned char Cr[64];
};
struct RGBImage {
	short width;
	short height;
	unsigned char *ibuf;
};
#endif
