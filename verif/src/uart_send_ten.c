__xdata unsigned char * __code d = 0x201;
__xdata unsigned char * __code c = 0x200;

void main (void){       
   *d = 0x55;
   while(0x01 & *c);
   *d = 0x66;
   while(0x01 & *c);
   *d = 0x77;
    *d = 0xBB;
   while(0x01 & *c);
   *d = 0x88;
   while(0x01 & *c);
   *d = 0x99;
   while(0x01 & *c);
   *d = 0xAA;
   while(0x01 & *c);
   *d = 0xBB;
   while(0x01 & *c);
   *d = 0xCC;
    while(0x01 & *c);
   *d = 0xDD;
   while(0x01 & *c);
   *d = 0xEE; 
   while(1); 
}

// Check Uart:
// 0x55
// 0x66
// 0x77
// 0x88
// 0x99
// 0xAA
// 0xBB
// 0xCC
// 0xDD
// 0xEE
