// QR.hpp by flaribbit
// See https://github.com/flaribbit/FxQr

/*
MIT License

Copyright (c) 2017 flaribbit

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


#ifdef __cplusplus
  extern "C" {
#endif


#ifndef _FXQR_H_
#define _FXQR_H_


typedef unsigned int uint16_t;
typedef int int16_t;

void parseMessage(const char* freetext, unsigned char test_vector[]);


// Show the CSV in QR
// By Myth
int QRShowCSV(int col_amount, int *col, int max_row);




#ifdef __cplusplus
}
#endif

#endif