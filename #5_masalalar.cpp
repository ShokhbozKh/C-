//#1
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	switch(n)
//	{
//		case 1: cout<<"dushanba"; break;
//		case 2: cout<<"seshanba"; break;
//		case 3: cout<<"chorshanba"; break;
//		case 4: cout<<"payshanba"; break;
//		case 5: cout<<"juma"; break;
//		case 6: cout<<"shanba"; break;
//		case 7: cout<<"yakshanba"; break;
//		default : cout<<"bunday kun yuq";
//	}
//	
//	return 0;
//}

//#2
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	switch(n)
//	{
//		case 1: cout<<"yomon"; break;
//		case 2: cout<<"qoniqarsiz"; break;
//		case 3: cout<<"qoniqarli"; break;
//		case 4: cout<<"yaxshi"; break;
//		case 5: cout<<"alo"; break;
//		default : cout<<"bunday baho yuq";
//	}
//	return 0;
//}

//#3
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	switch(n)
//	{
//		case 1:
//		case 2:
//		case 12: cout<<"qish"; break;
//		case 3:
//		case 4:
//		case 5: cout<<"bahor"; break;
//		case 6:
//		case 7:
//		case 8: cout<<"yoz"; break;
//		case 9:
//		case 10:
//		case 11: cout<<"kuz"; break;
//		
//		default : cout<<"bunday oy yuq";
//	}
//	
//	return 0;
//}

//#4
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	switch(n)
//	{
//		case 6:
//		case 9:
//		case 11:
//		case 4: cout<<"30 kun"; break;
//		
//		case 1:
//		case 5:
//		case 7:
//		case 8:
//		case 3:
//		case 12:
//		case 10: cout<<"31 kun"; break;
//		
//		case 2: cout<<"28 kun"; break;
//		
//		default : cout<<"bunday oy yuq";
//	}
//	
//	return 0;
//}

//#5
//#include <iostream>
//using namespace std;
//int main(){
//	int A, B, n;
//	cin>>A>>B;
//	cout<<"1 qushish, 2 ayirish 3 bulish 4 kupaytirish:"; cin>>n;
//	switch(n)
//	{
//		case 1: cout<<A+B; break;
//		case 2: cout<<A-B; break;
//		case 3: cout<<A/B; break;
//		case 4: cout<<A*B; break;
//		default: cout<<"xato amal";
//	}
//	return 0;
//}

//#6
//#include <iostream>
//using namespace std;
//int main(){
//	float A;
//	int n;
//	cout<<"uzunlik kiriting:"; cin>>A;
//	cout<<"1-dm 2 km 3 m 4 mm:"; cin>>n;
//	switch(n)
//	{
//		case 1: cout<<A/10; break;
//		case 2: cout<<A*1000; break;
//		case 3: cout<<A; break;
//		case 4: cout<<A/100; break;
//		default: cout<<"xato amal";
//	}
//	return 0;
//}

//#7
//#include <iostream>
//using namespace std;
//int main(){
//	float A;
//	int n;
//	cout<<"Og'irlik' kiriting:"; cin>>A;
//	cout<<"1-kg 2 mg 3 grm 4 t 5 sent:"; cin>>n;
//	switch(n)
//	{
//		case 1: cout<<A; break;
//		case 2: cout<<A/1000000; break;
//		case 3: cout<<A/1000; break;
//		case 4: cout<<A*1000; break;
//		case 5: cout<<A*10000; break;
//		default: cout<<"xato amal";
//	}
//	return 0;
//}

//#8
//#include <iostream>
//using namespace std;
//int main(){
//	int D, M;
//	cout<<"Kunni kirit:"; cin>>D;
//	cout<<"Oyni kirit:"; cin>>M;
//	switch(M)
//	{
//		case 1:cout<<D<<" yanvar"; break;
//		case 2:cout<<D<<" fevral"; break;
//		case 3:cout<<D<<" mart"; break;
//		
//		case 4:cout<<D<<" aprel"; break;
//		case 5:cout<<D<<" may"; break;
//		case 6:cout<<D<<" iyun"; break;
//		
//		case 7:cout<<D<<" iyul"; break;
//		case 8:cout<<D<<" avgust"; break;
//		case 9:cout<<D<<" sentyabr"; break;
//		
//		case 10:cout<<D<<" oktyabr"; break;
//		case 11:cout<<D<<" noyabr"; break;
//		case 12:cout<<D<<" dekabr"; break;
//	}
//	return 0;
//}

//#9
//#include <iostream>
//using namespace std;
//int main(){
//	int D, M;// day dan keyingi kun;
//	cout<<"Kunni kirit:"; cin>>D;
//	cout<<"Oyni kirit:"; cin>>M;
//	D++;// bir qushiladi birdan
//	switch(M)
//	{	case 1:
//		case 3:
//		case 12:
//		case 10:
//		case 5:
//		case 7:
//		case 8:
//					if(31<D){
//						M=M+1;
//						D=1;
//					}; break;
//		
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//					if(30<D){
//						M+=1;
//						D=1;
//					}; break;
//		
//		case 2:
//					if(28<D){
//						M+=1;
//						D=1;
//					}; break;
//					
//		default: cout<<"bunday oy yuq;";
//			
//	}
//	
//	M=M%12;
//
//switch(M){
//	case 1:cout<<D<<"-yanvar"<<endl; break;
//	case 2:cout<<D<<"-fevral"<<endl; break;
//	case 3:cout<<D<<"-mart"<<endl; break;
//	case 4:cout<<D<<"-aprel"<<endl; break;
//	case 5:cout<<D<<"-may"<<endl; break;
//	case 6:cout<<D<<"-iyun"<<endl; break;
//	case 7:cout<<D<<"-iyul"<<endl; break;
//	case 8:cout<<D<<"-avgust"<<endl; break;
//	case 9:cout<<D<<"-sentyabr"<<endl; break;
//	case 10:cout<<D<<"-oktyabr"<<endl; break;
//	case 11:cout<<D<<"-noyabr"<<endl; break;
//	case 12:cout<<D<<"-dekabr"<<endl; break;
//}
//	return 0;
//}

//#10
//#include <iostream>
//using namespace std;
//int main(){
//	int k, y;
//	cout<<" 4 ta tamon:"; cin>>k;
//	cout<<" 0 1 2 buyruqlar:"; cin>>y;
//	
//	switch(k){
//		case 1: cout<<"shimol "; break;
//		case 2: cout<<"janub "; break;
//		case 3: cout<<"sharq "; break;
//		case 4: cout<<"g\"arb "; break;
//	}
//	switch(y){
//		case 0: cout<< "harakatni davom ettir"; break;
//		case 2: cout<< "o'ngga buril"; break;
//		case 1: cout<< "chapga buril"; break;
//	}
//	
//	return 0;
//}
//#11
//#include <iostream>
//using namespace std;
//int main(){
//	int k1, k2;
//	cout<<" 4 ta tamon:"; cin>>k1;
//	cout<<" 0 1 2 buyruqlar:"; cin>>k2;
//	
//	switch(k1){
//		case 1: cout<<"shimol "; break;
//		case 2: cout<<"janub "; break;
//		case 3: cout<<"sharq "; break;
//		case 4: cout<<"g\"arb "; break;
//	}
//	switch(k2){
//		case 0: cout<< "o'ngga buril "; break;
//		case 2: cout<< "burilish 180 gradus "; break;
//		case 1: cout<< "chapga buril "; break;
//	}
//	
//	return 0;
//}

//#12
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float const pi=3.14;
//	float s, d, l, r;
//	cout<<"1-r 2-d 3-l 4-s:"; cin>>n;
//	
//	switch(n){
//		case 1: cout<<"r="; cin>>r;
//			d=2*r, l=2*pi*r, s=pi*r*r;
//			cout<<"d="<<d<<" l="<<l<<" s="<<s; break;
//			
//		case 2: cout<<"d="; cin>>d;
//			r=d/2, l=2*pi*r, s=pi*r*r;
//			cout<<"r="<<r<<" l="<<l<<" s="<<s; break;
//			
//		case 3: cout<<"l="; cin>>l;
//			r=l/2*pi, d=2*r, s=pi*r*r;
//			cout<<"d="<<d<<" r="<<r<<" s="<<s; break;
//			
//		case 4: cout<<"s="; cin>>s;
//			r=sqrt(s/pi), d=2*r, l=2*pi*r;
//			cout<<"d="<<d<<" l="<<l<<" r="<<r; break;
//	}
//	
//	return 0;
//}

//#13
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float const pi=3.14;
//	float s, c, h, a;
//	cout<<"1-katet 2-gepatinuza 3-c ga balandlik 4-yuzasi:"; cin>>n;
//	
//	switch(n){
//		case 1: cout<<"a="; cin>>a;
//			c=a*sqrt(2), h=c/2, s=(c*h)/2;
//			cout<<"c="<<c<<" h="<<h<<" s="<<s; break;
//			
//		case 2: cout<<"c="; cin>>c;
//			a=c/sqrt(2), h=c/2, s=(c*h)/2;
//			cout<<"a="<<a<<" h="<<h<<" s="<<s; break;
//			
//		case 3: cout<<"h="; cin>>h;
//			c=2*h, a=c/sqrt(2), s=(c*h)/2;
//			cout<<"a="<<a<<" c="<<c<<" s="<<s; break;
//			
//		case 4: cout<<"s="; cin>>s;
//			a=sqrt(2*s), c=a*sqrt(2) , h=c/2;
//			cout<<"a="<<a<<" c="<<c<<" h="<<h; break;
//	}
//	
//	return 0;
//}

//#14
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float const pi=3.14;
//	float a, r, R, s;
//	cout<<"1-a 2-r 3-R 4-s:"; cin>>n;
//	
//	switch(n){
//		case 1: cout<<"a="; cin>>a;
//			r=a*sqrt(3)/6, R=2*r, s=(a*a*sqrt(3)/4);
//			cout<<"r="<<r<<" R="<<R<<" s="<<s; break;
//			
//		case 2: cout<<"r="; cin>>r;
//			a=r*6/(sqrt(3)), R=2*r, s=(a*a*sqrt(3)/4); 
//			cout<<"a="<<a<<" R="<<R<<" s="<<s; break;
//			
//		case 3: cout<<"R="; cin>>R;
//			a=(R/2) * 6/(sqrt(3)), r=R/2, s=(a*a*sqrt(3)/4);
//			cout<<"a="<<a<<" r="<<r<<" s="<<s; break;
//			
//		case 4: cout<<"s="; cin>>s;
//			a=sqrt(s*4/(sqrt(3))), r=a*sqrt(3)/6, R=2*r;
//			cout<<"a="<<a<<" r="<<r<<" R="<<R; break;
//	}
//	
//	return 0;
//}

//#15
//#include <iostream>
//using namespace std;
//int main(){
//	int M, N;
//	cout<<"1<=M<=4  M="; cin>>M;
//	cout<<"6<=N<=14  N="; cin>>N;
//	
//	switch(N){
//		case 6: cout<<"Olti ";break;
//		case 7: cout<<"Yetti ";break;
//		case 8: cout<<"Sakkiz ";break;
//		case 9: cout<<"To'qqiz' ";break;
//		case 10: cout<<"O'n' ";break;
//		case 11: cout<<"Valet ";break;
//		case 12: cout<<"Dama ";break;
//		case 13: cout<<"Qirol ";break;
//		case 14: cout<<"Tuz ";break;
//	}
//	switch(M){
//		case 1: cout<<" G'isht "; break;
//		case 2: cout<<" Olma"; break;
//		case 3: cout<<"chillak ";break;
//		case 4: cout<<"qarg'a "; break;
//	}
//	
//	return 0;
//}

//#16
//#include <iostream>
//using namespace std;
//int main(){
//	int n, un, b;
//	
//	cout<<"Yosh="; cin>>n;
//	un=n/10;
//	b=n%10;
//
//	switch(un){
//		case 2: cout<<"yigirma "; break;
//		case 3: cout<<"o\"ttiz "; break;
//		case 4: cout<<"qirq "; break;
//		case 5: cout<<"ellik "; break;
//		case 6: cout<<"oltmish "; break;
//	
//	}
//	switch(b){
//		case 1: cout<<"bir"; break;
//		case 2: cout<<"ikki"; break;
//		case 3: cout<<"uch"; break;
//		case 4: cout<<"turt"; break;
//		case 5: cout<<"besh"; break;
//		case 6: cout<<"olti"; break;
//		case 7: cout<<"yetti"; break;
//		case 8: cout<<"sakkiz"; break;
//		case 9: cout<<"tuqqiz"; break;
//	
//	}
//return 0;	
//}
	
//#17
//#include <iostream>
//using namespace std;
//int main(){
//	int n, un, b;
//	
//	cout<<"Yosh="; cin>>n;
//	un=n/10;
//	b=n%10;
//	
//	if(n>=10 && n<=40){
//		switch(un){
//		case 1: cout<<" o\"n "; break;
//		case 2: cout<<"yigirma "; break;
//		case 3: cout<<"o\"ttiz "; break;
//		case 4: cout<<"qirq "; break;
//	
//	}
//	switch(b){
//		case 1: cout<<"bir"; break;
//		case 2: cout<<"ikki"; break;
//		case 3: cout<<"uch"; break;
//		case 4: cout<<"turt"; break;
//		case 5: cout<<"besh"; break;
//		case 6: cout<<"olti"; break;
//		case 7: cout<<"yetti"; break;
//		case 8: cout<<"sakkiz"; break;
//		case 9: cout<<"tuqqiz"; break;
//	}
//	}
//	else
//	{
//		cout<<" yosh xato";
//	}
//	return 0;	
//}

//#18
//#include <iostream>
//using namespace std;
//int main(){
//	int n, un, b, yuz;
//	cout<<"son kirit1 100--999 gacha:"; cin>>n;
//	yuz=n/100;
//	un=(n%100/10);
//	b=n%10;
//	
//	switch(yuz){
//		case 1: cout<<" bir yuz "; break;
//		case 2: cout<<"ikki yuz "; break;
//		case 3: cout<<"uch yuz "; break;
//		case 4: cout<<"turt yuz "; break;
//		case 5: cout<<"besh yuz "; break;
//		case 6: cout<<"olti yuz "; break;
//		case 7: cout<<"yetti yuz "; break;
//		case 8: cout<<"sakkiz yuz "; break;
//		case 9: cout<<"tuqqiz yuz "; break;
//	}
//	
//	
//	switch(un){
//		case 1: cout<<" o\"n "; break;
//		case 2: cout<<"yigirma "; break;
//		case 3: cout<<"o\"ttiz "; break;
//		case 4: cout<<"qirq "; break;
//		case 5: cout<<"ellik "; break;
//		case 6: cout<<" oltmish "; break;
//		case 7: cout<<"yetmish "; break;
//		case 8: cout<<"sakson "; break;
//		case 9: cout<<"tuqson "; break;	
//	
//	}
//	switch(b){
//		case 1: cout<<"bir"; break;
//		case 2: cout<<"ikki"; break;
//		case 3: cout<<"uch"; break;
//		case 4: cout<<"turt"; break;
//		case 5: cout<<"besh"; break;
//		case 6: cout<<"olti"; break;
//		case 7: cout<<"yetti"; break;
//		case 8: cout<<"sakkiz"; break;
//		case 9: cout<<"tuqqiz"; break;
//	}
//	
//	return 0;
//}

//#19
//#include <iostream>// biroz xatolik bor
//using namespace std;
//int main(){
//	int y, r, h ;
//	cin>>y;
//	r=y%5;
//	h=y%12;
//	
//	switch(r){
//		case 4:cout<<"yashil "; break;
//		case 0:cout<<"qizil "; break;
//		case 1:cout<<"sariq "; break;
//		case 2:cout<<"oq "; break;
//		case 3:cout<<"qora "; break;
//	}
//	switch(h){
//		case 4:cout<<"sichqon yili"; break;
//		case 5:cout<<"sigir yili"; break;
//		case 6:cout<<"yulbars yili"; break;
//		case 7:cout<<"quyon yili"; break;
//		case 8:cout<<"ajdar yili"; break;
//		case 9:cout<<"ilon yili"; break;
//		case 10:cout<<"ot yili"; break;
//		case 11:cout<<"quy yili"; break;
//		case 0:cout<<"maymun yili"; break;
//		case 1:cout<<"tovuq yili"; break;
//		case 2:cout<<"it yili"; break;
//		case 3:cout<<"tung'iz yili"; break;
//	}
//	return 0;
//}

//#20
//#include <iostream>
//using namespace std;
//int main(){
//	int D, M;
//	cout<<"day="; cin>>D;
//	cout<<"Month="; cin>>M;
//	
//	switch(M){
//		case 1:
//			if(D>=20)
//				cout<<"Qovg'a"; 
//			else 
//				cout<<"Echki" ;break;
//		case 2:
//			if(D>=19) 
//				cout<<"Qovg'a";
//			else
//				cout<<"Baliq"; break;
//		case 3:
//			if(D>=21)
//				cout<<"Qo'y"; 
//			else 
//				cout<<"Baliq" ;break;
//		case 4:
//			if(D>=20) 
//				cout<<"Buzoq";
//			else
//				cout<<"Quy"; break;
//		case 5:
//			if(D>=21)
//				cout<<"Egizaklar"; 
//			else 
//				cout<<"Buzoq" ;break; 
//		case 6:
//			if(D>=22) 
//				cout<<"Qisqichbaqa";
//			else
//				cout<<"Egizaklar"; break;
//		case 7:
//			if(D>=23)
//				cout<<"Arslon"; 
//			else 
//				cout<<"Qisqichbaqa" ;break;
//		case 8:
//			if(D>=23) 
//				cout<<"Parizod";
//			else
//				cout<<"Arslon"; break;
//		case 9:
//			if(D>=23)
//				cout<<"Tarozi"; 
//			else 
//				cout<<"Parizod" ;break; 
//		case 10:
//			if(D>=23) 
//				cout<<"chayon";
//			else
//				cout<<"Tarozi"; break;
//		case 11:
//			if(D>=22)
//				cout<<"Oq\" otar"; 
//			else 
//				cout<<"chayon" ;break; 
//		case 12:
//			if(D>=22) 
//				cout<<"echki";
//			else
//				cout<<"O'q otar"; break;
//		
//		}
//	
//	return 0;
//}


