////#1
//#include<iostream>
//
//using namespace std;
//int main(){
//	int l, m;
//	cout<<"l="; cin>>l;
//	
//	m=l/100;
//	
//	cout<<m<<" <-metr"<<endl;
//	
//	return 0;
//}

////#2
//#include<iostream>
//
//using namespace std;
//int main(){
//	float m, t;
//	cout<<"m="; cin>>m;
//	
//	t=int(m/1000);
//	
//	cout<<" tonna:"<<t<<endl;
//	
//	return 0;
//}

////#3
//#include<iostream>
//
//using namespace std;
//int main(){
//	int b, kb;
//	cout<<"b="; cin>>b;
//	
//	kb=b/1024;
//	
//	cout<<"fayl hajmi:"<<kb<<" kb"<<endl; 
//	
//	return 0;
//}
//
////#4
//#include<iostream>
//
//using namespace std;
//int main(){
//	float a, b, n;
//	cout<<"a="; cin>>a;
//	cout<<"b="; cin>>b;
//	
//	n=int(a/b);
//	
//	cout<<"marta joylashgan: "<<n<<endl;
//	
//	return 0;
//}
//
////#5
//#include<iostream>
//
//using namespace std;
//int main(){
//	float a, b, n;
//	cout<<"a="; cin>>a;
//	cout<<"b="; cin>>b;
//	
//	n=int(a/b);
//	
//	cout<<"qolgan qismi: "<<a-n*b<<endl;
//	
//	return 0;
//}

////#6
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"unliklar xonasi:"<<n/10<<endl;
//	cout<<"birliklar xonasi:"<<n%10<<endl;
//	
//	return 0;
//}
//
////#7
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"raqamlar yig\"indisi="<<n/10 + n%10 <<endl;
//	
//	return 0;
//}

////#8
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"raqamlar urni almashgan son="<<n%10<<n/10 <<endl;
//	
//	return 0;
//}
//
////#9
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik son 100 lar xonasi="<<n/100<<endl;
//	
//	return 0;
//}

////#10
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"birliklar:"<<n%10<<endl;
//	cout<<"unlik:"<<(n%100)/10<<endl;
//	
//	return 0;
//}
//
////#11
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik son summ="<<n/100+ n%10 +(n%100)/10<<endl;
//	
//	return 0;
//}
//
////#12
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik soni teskari="<<n%10<<(n%100)/10<<n/100<<endl;
//	
//	return 0;
//}
//
////#13
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik son chapdan uchirib unga quyish="<<(n%100)<<n/100<<endl;
//	
//	return 0;
//}

////#14
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik son ungdan uchirib chapga quyish="<<n%10<<n/10<<endl;
//	
//	return 0;
//}
//
////#15
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik son urin almashtirish="<<(n%100)/10<<(n/100)<<n%10<<endl;
//	
//	return 0;
//}

////#16
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	cout<<"3 xonalik son urin almashtirish="<<(n/100)<<n%10<<(n%100)/10<<endl;
//	
//	return 0;}
//
//
////#17
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	
//	cout<<"n="; cin>>n;
//	//1234->2
//	cout<<"Yuzliklar xonasi:"<<(n%1000)/100<<endl;
//	
//	return 0;
//}

////#18
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n;
//	
//	cout<<"n="; cin>>n;
//	//1234->1
//	cout<<"minglar xonasi:"<<(n%10000)/1000<<endl;
//	
//	return 0;
//}
//
////#19
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n, min;
//	cout<<"n="; cin>>n;
//	
//	min=n/60;
//	cout<<"minut:"<<min<<endl;
//	
//	return 0;
//}
//
////#20
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n, min;
//	cout<<"n="; cin>>n;
//	
//	min=n/3600;
//	cout<<"soat:"<<min<<endl;
//	
//	return 0;
//}
//
////#21
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n, min;
//	cout<<"n="; cin>>n;
//	
//	min=n/60;
//	cout<<"minut:"<<min<<" va sekund: "<<n-min*60<<endl;
//	
//	return 0;
//}
//
////#22
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n, h;
//	cout<<"n="; cin>>n;
//	
//	h=n/3600;
//	cout<<"soat:"<<h<<" va sekund:"<<n-h*3600<<endl;
//	
//	return 0;
//}
//
////#23
//#include<iostream>
//
//using namespace std;
//int main(){
//	int n, min,h;
//	cout<<"n="; cin>>n;
//	
//	h=n/3600;
//	min=(n-h*3600)/60;
//	cout<<"soat:"<<h<<" minut:"<<min<<" sekund:"<<n-((h*3600)+(min*60))<<endl;
//	
//	return 0;
//}
//
////#24
//#include<iostream>
//
//using namespace std;
//int main(){
//	int k, result;
//	
//	cout<<"k="; cin>>k;
//	
//	result=k%7;
//	
//	cout<<"xaftaning:"<<result<<" kuni"<<endl;
//	
//	return 0;
//}
//
////#25
//#include<iostream>
//
//using namespace std;
//int main(){
//	int k, result;
//	cout<<"k="; cin>>k;
//	
//	result=()k+3)%7 ;
//	cout<<"xaftaning:"<<result<<" kuni"<<endl;
//	
//	return 0;
//}
//
////#26
//#include<iostream>
//
//using namespace std;
//int main(){
//	int k, result;
//	cout<<"k="; cin>>k;
//	
//	result=(k)%7 +1;
//	cout<<"xaftaning:"<<result<<" kuni"<<endl;
//	
//	return 0;
//}
//
////#27
//#include<iostream>
//
//using namespace std;
//int main(){
//	int k, result;
//	cout<<"k="; cin>>k;
//	
//	result=(k+5)%7 + 1;
//	cout<<"xaftaning:"<<result<<" kuni"<<endl;
//	
//	return 0;
//}
//
////#28
//#include<iostream>
//
//using namespace std;
//int main(){
//	int k, result, n;
//	cout<<"k="; cin>>k;
//	cout<<"n="; cin>>n;
//	
//	result=(k+n-2)%7 +1;
//	cout<<"xaftaning:"<<result<<" kuni"<<endl;
//	
//	return 0;
//}
//
////#29
//#include<iostream>
//#include <math.h>
//
//using namespace std;
//int main(){
//	int a, b, c, n, k, s1, s2;
//	cout<<"a="; cin>>a;
//	cout<<"b="; cin>>b;
//	cout<<"c="; cin>>c;
//	
//	s1=a*b;
//	s2=c*c;
//	n = s1 / s2; 
//	k=s1-n*s2;
//	
//	cout<<"joylashadi:"<<n<<" ortadi:"<<k<<endl;
//	
//	return 0;
//}
//
////#30
//#include<iostream>
//
//using namespace std;
//int main(){
//	int yil, asr;
//	cout<<"y="; cin>>yil;
//	
//	asr=yil/100 + 1;
//	
//	cout<<"asr: "<<asr<<endl;
//	
//	return 0;
//}


