#include<key.h>
unsigned char key_read(){
unsigned char temp=0;
	ET1=0;
	P44=0;P42=1;P35=1;
	if(P30==0) temp=7;
	if(P31==0) temp=6;
	if(P32==0) temp=5;	
	if(P33==0) temp=4;	
	P44=1;P42=0;P35=1;
	if(P30==0) temp=11;
	if(P31==0) temp=10;
	if(P32==0) temp=9;
	if(P33==0) temp=8;	
	
		P44=1;P42=1;P35=0;
	if(P30==0) temp=15;
	if(P31==0) temp=14;
	if(P32==0) temp=13;
	if(P33==0) temp=12;	
	ET1=1;
	P3=0XFF;//�������
	return temp;
}