#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int a, b;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	
	//abs,fabs,labs
	cout<<" butun abs="<<abs(a)<<endl;
	cout<<" haqiqiy fabs="<<fabs(b)<<endl;
	cout<<" uzun butun labs="<<labs(a)<<endl;
	
	//pow(x,y)
	cout<<"daraja:"<<pow(a,4)<<endl;
	//pow10(x)
	cout<<"pow10 x:"<<pow(10,b)<<endl;
	//sqrt(x)
	cout<<"kv indiz:"<<sqrt(b)<<endl;
	//ceil(x)
	cout<<"tepega yaxlitlash:"<<ceil(b)<<endl;
	//floor(y)
	cout<<"pastga yaxlitlash:"<<floor(b)<<endl;
	//cos(x)
	cout<<"cos x:"<<cos(a)<<endl;
	//sin (x)
	cout<<"sin x"<<sin(a)<<endl;
	//exp(x)
	cout<<"e darajasi x:"<<exp(a)<<endl;
	//log(x)
	cout<<"x sonni ln ni:"<<log(a)<<endl;
	//log10(x)
	cout<<"x sonni 10 asoslik log:"<<log10(b);
		
	
	return 0;
}
