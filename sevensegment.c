bit press1;
unsigned int res;
unsigned char sevsegm[12]={0b00111111,0b00000110,0b01011011,0b01001111,
0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111,0b01100011,0b01011100 };
void callsev(unsigned a){
if (a==0){PORTL=sevsegm[0];}
if (a==1){PORTL=sevsegm[1];}
if (a==2){PORTL=sevsegm[2];}
if (a==3){PORTL=sevsegm[3];}
if (a==4){PORTL=sevsegm[4];}
if (a==5){PORTL=sevsegm[5];}
if (a==6){PORTL=sevsegm[6];}
if (a==7){PORTL=sevsegm[7];}
if (a==8){PORTL=sevsegm[8];}
if (a==9){PORTL=sevsegm[9];}
if (a==10){PORTL=sevsegm[10];}
if (a==11){PORTL=sevsegm[11];}
}

void main() {

DDRL=255;
DDRK=0b11110000;
while(1){
//first co
PORTK.b4=0;
PORTK.b5=1;
PORTK.b6=1;
if(pink.b3==0 && pink.b2==1 &&pink.b1==1 && pink.b0==1 && pink.b4==0 &&press1==0){res=1; press1=1;}
if(pink.b2==0 && pink.b3==1 &&pink.b1==1 && pink.b0==1 && pink.b4==0 &&press1==0){ res=4; press1=1;}
if(pink.b1==0 && pink.b2==1 &&pink.b3==1 && pink.b0==1 && pink.b4==0 &&press1==0){ res=7; press1=1;}
if(pink.b0==0 && pink.b2==1 &&pink.b3==1 && pink.b1==1 && pink.b4==0 && press1==0){ res=10; press1=1;}
delay_ms(5);
//seconed co
PORTK.b4=1;
PORTK.b5=0;
PORTK.b6=1;
if(pink.b3==0 && pink.b2==1 &&pink.b1==1 && pink.b0==1 && pink.b5==0 && press1==0){ res=2; press1=1;}
if(pink.b2==0 && pink.b3==1 &&pink.b1==1 && pink.b0==1 && pink.b5==0 && press1==0){ res=5; press1=1;}
if(pink.b1==0 && pink.b2==1 &&pink.b3==1 && pink.b0==1 && pink.b5==0 && press1==0){ res=8; press1=1;}
if(pink.b0==0 && pink.b2==1 &&pink.b3==1 && pink.b1==1 && pink.b5==0 && press1==0){ res=0; press1=1;}delay_ms(5);
//third co
PORTK.b4=1;
PORTK.b5=1;
PORTK.b6=0;
if (pink.b3 ==0 && pink.b2==1 &&pink.b1==1 && pink.b0==1 && pink.b6==0 && press1==0){ res=3; press1=1;}
if (pink.b2 ==0 && pink.b3==1 &&pink.b1==1 && pink.b0==1 && pink.b6==0 && press1==0){ res=6; press1=1;}
if (pink.b1 ==0 && pink.b2==1 &&pink.b3==1 && pink.b0==1 && pink.b6==0 && press1==0){ res=9; press1=1;}
if (pink.b0 ==0 && pink.b2==1 &&pink.b3==1 && pink.b1==1 && pink.b6==0 && press1==0){ res=11; press1=1;}
delay_ms(5);
PORTk.b4=0;
PORTk.b5=0;
PORTk.b6=0;
if (pink.b0==1 && pink.b1==1 && pink.b2==1 && pink.b3==1 && press1==1){callsev(res); press1=0;}
delay_ms(5);
}}