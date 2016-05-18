
#ifndef UTILS_H
#define UTILS_H

/*
************************************************************************************************************************
*       INCLUDE FILES
************************************************************************************************************************
*/

#include <stdint.h>


/*
************************************************************************************************************************
*       MACROS
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*       CONFIGURATION
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*       DATA TYPES
************************************************************************************************************************
*/

typedef struct string_t {
    uint8_t size;
    char *text;
} string_t;


/*
************************************************************************************************************************
*       FUNCTION PROTOTYPES
************************************************************************************************************************
*/

/*
 http://stackoverflow.com/a/15171925/1283578
 8-bit CRC with polynomial x^8+x^6+x^3+x^2+1, 0x14D.
 Chosen based on Koopman, et al. (0xA6 in his notation = 0x14D >> 1):
 http://www.ece.cmu.edu/~koopman/roses/dsn04/koopman04_crc_poly_embedded.pdf
*/
uint8_t crc8(uint8_t *data, uint32_t len);


/*
************************************************************************************************************************
*   CONFIGURATION ERRORS
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*   END HEADER
************************************************************************************************************************
*/

#endif
