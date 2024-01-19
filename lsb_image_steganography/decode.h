#ifndef DECODE_H
#define DECODE_H
#include "types.h"

#define MAX_SECRET_BUF_SIZE 1
#define MAX_IMAGE_BUF_SIZE (MAX_SECRET_BUF_SIZE * 8)
#define MAX_FILE_SUFFIX 4



typedef struct _DecodeInfo
{
    /* Source Image INFO */
    char *stego_image;
    FILE *fptr_stego_image;

    /* output info */
    char *decode_file;
    FILE *fptr_decode_file;
   char decode_file_name[50];
    uint secret_file_size;

} DecodeInfo;

/* Decoding function prototypes */

/* Read and validate decode args from argv */
Status read_and_validate_decode_args(char *argv[], DecodeInfo *decoInfo);

/* Get file pointers for input and output files */
Status Open_files(DecodeInfo *decInfo);

/* Perform the decoding */
Status do_decoding(DecodeInfo *decInfo);

/* Store magic string */
Status decode_magic_string(DecodeInfo *decInfo);

/* decode secrete file extension size */
Status decode_secret_file_extn_size(DecodeInfo *decinfo, FILE *fptr_stego_image);

/* Decode secrete file extension */
Status decode_secret_file_extn(DecodeInfo *decInfo, int extn_size, FILE *fptr_stego_image);

/* Decode secrete file size */
Status decode_secret_file_size(DecodeInfo *decInfo, FILE *fptr_stego_image);

/* Decode secrete file data */
Status decode_secret_file_data(DecodeInfo *decInfo);


#endif

