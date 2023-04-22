//#1
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	if(n>0){
//		cout<<n+1;
//	}
//	else{
//		cout<<n;	
//	}
//	return 0;
//}

//#2
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	if(n>0){
//		cout<<n+1;
//	}
//	else{
//		cout<<n-2;	
//	}
//	return 0;
//}

//#3
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	if(n>0){
//		cout<<n+1;
//	}
//	else if(n==0){
//		n=10;
//		cout<<n;	
//	}
//	else{
//		cout<<n-2;
//	}
//	return 0;
//}

//#4
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c,t=0;
//	cin>>a>>b>>c;
//	
//	if(a>0){
//		t++;
//	}
//	if(b>0){
//		t++;
//	}
//	if(c>0){
//		t++;
//	}
//	cout<<"musbat son:"<<t<<" ta";
//	return 0;
//}

//#5
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c,t=0,d=0;
//	cin>>a>>b>>c;
//	
//	if(a>0){
//		t++;
//	}
//	else{
//		d++;
//	}
//	if(b>0){
//		t++;
//	}
//	else{
//		d++;
//	}
//	if(c>0){
//		t++;
//	}
//	else{
//		d++;
//	}
//	cout<<"musbat son:"<<t<<" ta"<<endl;
//	cout<<"manfiy son:"<<d<<" ta";
//	return 0;
//}


//#6
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin>>a>>b;
//	
//	(a>b)?cout<<a:cout<<b;
//	
//	return 0;
//}

//#7
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin>>a>>b;
//	
//	if(a>b)cout<<2;
//	else cout<<1;
//	
//	return 0;
//}

//#8
//#include <iostream>
//using namespace std;
//int main(){
//	
//	int a, b;
//	cin>>a>>b;
//	(a>b)?cout<<a<<' '<<b:cout<<b<<' '<<a;
//	return 0;
//}

//#9
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, d;
//	cin>>a>>b;
//	if(a>b){
//		d=a;
//		a=b;
//		b=d;
//		cout<<"a="<<a<<" b="<<b;
//	}
//	else{
//		cout<<"a="<<a<<" b="<<b;
//	}
//	return 0;
//}

//#10
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin>>a>>b;
//	if(a!=b)
//	{cout<<"a="<<a+b<<" b="<<a+b ;
//	
//	} 
//	else
//	a=0, b=0;
//	cout<<"a="<<a<<" b="<<b;
//	
//	return 0;
//}

//#11
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin>>a>>b;
//	
//	if(a!=b){
//		if(a>b){
//			b=a;
//			cout<<"a="<<a<<" b="<<b;
//		}
//		else{
//			a=b;
//			cout<<"a="<<a<<" b="<<b;
//		}
//	}
//	else
//	{
//		a=0, b=0;
//		cout<<"a="<<a<<" b="<<b;
//	}
//	return 0;
//}

//#12
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a<b && a<c) cout<<a;
//	else if(b<a && b<c) cout<<b;
//	else cout<<c;
//	
//	return 0;
//}

//#13
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c;
//	cin>>a>>b>>c;
//	
//	if((a>b && b>c) || (c>b&& b>a)) //a>b>c
//		cout<<b;
//	else if((c>a && a>b) || (b>a&&a>c))  //c>a>b
//		cout<<a;
//	else
//		cout<<c;
//	
//	return 0;
//}
//#14
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c, max, min;
//	cin>>a>>b>>c;
//	
//	max=(a>b)?a:b;
//	min=(a<b)?a:b;
//	
//	max=(max<c)?c:max;
//	min=(min>c)?c:min;
//	
//	cout<<"max="<<max<<endl;
//	cout<<"min="<<min;
//	
//	return 0;
//}

//#15
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c, max, urt;
//	cin>>a>>b>>c;
//	
//	if(a>b){
//		max=a;
//	}
//	else{
//		max=b;
//	}
//	if((a<b&&b<c) || (c<b&&b<a)){
//		urt=b;
//	}
//	else if((b<a&&a<c)||(c<a&&a<b)){
//		urt=a;
//	}
//	else{
//		urt=c;
//	}
//	
//	if(max>c){
//		max=max;
//	}
//	else{
//		max=c;
//	}
//	
//	cout<<"max="<<max<<endl;
//	cout<<"urta="<<urt<<endl;
//	
//	return 0;
//}

//#16
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a<b&&b<c){
//		cout<<"a="<<a*2<<" b="<<b*2<<" c="<<c*2<<endl;
//	}
//	else{
//		a=-a, b=-b, c=-c;
//		cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
//	}
//	return 0;
//}

//#17
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a<b&&b<c || a>b&&b>c){
//		cout<<"a="<<a*2<<" b="<<b*2<<" c="<<c*2<<endl;
//	}
//	else{
//		a=-a, b=-b, c=-c;
//		cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
//	}
//	return 0;
//}

////#18
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a==b){
//		cout<<3;
//	}
//	else if(b==c){
//		cout<<1;
//	}
//	else if(a==c){
//		cout<<2;
//	}
//	else{
//		cout<<"bir xil son yuq";
//	}
//	return 0;
//}

//#19
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c, d;
//	cin>>a>>b>>c>>d;
//	
//	if(a==b&&a==c){
//		cout<<4;
//	}
//	else if(b==c&&b==d){
//		cout<<1;
//	}
//	else if(c==d&&c==a){
//		cout<<2;
//	}
//	else if(d==a&&d==b){
//		cout<<3;
//	}
//	else{
//		cout<<"3 ta bir xil yuq";
//	}
//	
//	return 0;
//}

//#20
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	if(fabs(a-b)<fabs(a-c)){
//		cout<<"yaqini="<<b<<" masofa:"<<fabs(a-b);
//	}
//	else{
//		cout<<"yaqini="<<c<< " masofa:"<<fabs(a-c);
//	}
//	
//	return 0;
//}

//#21
//#include <iostream>
//using namespace std;
//int main(){
//	float x, y;
//	cout<<"x="; cin>>x;
//	cout<<"y="; cin>>y;
//	
//	if(x==0 && y==0){
//		cout<<0;
//	}
//	else if(x>0 && y>0){
//		cout<<1;
//	}
//	else if(x<0 && y>0){
//		cout<<2;
//	}
//	else {
//		cout<<3;
//	}
//	
//	return 0;
//}

//#22
//#include <iostream>
//using namespace std;
//int main(){
//	float x, y;
//	cout<<"x="; cin>>x;
//	cout<<"y="; cin>>y;
//	
//	if(x==0 && y==0){
//		cout<<0;
//	}
//	else if(x>0 && y>0){
//		cout<<1;
//	}
//	else if(x<0 && y>0){
//		cout<<2;
//	}
//	else if(x<0 && y<0) {
//		cout<<3;
//	}
//	else if(x>0 && y<0){
//		cout<<4;
//	}
//	
//	return 0;
//}

//#23
//#include <iostream>
//using namespace std;
//int main(){
//	float x1, y1, x2, y2, x3, y3, x4, y4;
//	cin>>x1>>y1>>x2>>y2>>x3>>y3;
//	
//	if(x1==x2){
//		y4=y1;
//		x4=x3;
//		cout<<"x4="<<x4<<" y4="<<y4<<endl;
//	}
//	else if(x3==x2){
//		y4=y3;
//		x4=x1;
//		cout<<"x4="<<x4<<" y4="<<y4<<endl;
//	}
//	else if(x2==x3){
//		x4=x1;
//		y4=y3;
//		cout<<"x4="<<x4<<" y4="<<y4<<endl;
//	}
//	else if(x2==x1){
//		x4=x3;
//		y4=y1;
//		cout<<"x4="<<x4<<" y4="<<y4<<endl;
//	}
//	else{
//		cout<<"xatolik bor;";
//	}
//	
//	return 0;
//}

//#24
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int main(){
//	float x, fx;
//	cout<<"x="; cin>>x;
//	
//	if(x>0){
//		fx=2*sin(x);
//	}
//	else if(x<=0){
//		fx=x-6;
//	}
//	cout<<"f(x)="<<fx;
//	
//	return 0;
//}

//#25
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int main(){
//	float x, fx;
//	cout<<"x="; cin>>x;
//	
//	if(x<-2 || x>2){
//		fx=2*x;
//	}
//	else{
//		fx=-3*x;
//	}
//	cout<<"f(x)="<<fx;
//	
//	return 0;
//}
//#26
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int main(){
//	float x, fx;
//	cout<<"x="; cin>>x;
//	
//	if(x<=0){
//		fx=-x;
//	}
//	else if(0<x && x<2){
//		fx=x*x;
//	}
//	else if(x>=2){
//		fx=4;
//	}
//	cout<<"f(x)="<<fx;
//	
//	return 0;
//}

//#27
//#include <iostream>
//using namespace std;
//int main(){
//	float x,f;
//	cin>>x;
//	
//	if(x<0){
//		f=0;
//	}
//	else if(int(x)%2==0){
//		f=1;
//	}
//	else if(int(x)%2!=0){
//		f=-1;
//	}
//	cout<<f;
//	
//	return 0;
//}

//#28
//#include <iostream>
//using namespace std;
//int main(){
//	int y;
//	cout<<"yil:"; cin>>y;
//	if( y%400==0 || (y%4==0) && y%100!=0 ){
//		
//		cout<<"kabisa yili: "<<y;
//	}
//	else{
//		cout<<"kabisa yili emas: "<<y;
//	}
//	return 0;
//}


//#29
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	
//	if(n!=0){
//		if(n>0){
//			if(n%2==0){
//				cout<<"musbat juft son:"<<n;
//			}
//			else{
//				cout<<"musbat toq son:"<<n;
//			}
//		}
//		else{
//			if(n%2==0){
//				cout<<"manfiy juft son:"<<n;
//			}
//			else{
//				cout<<"manfiy toq son:"<<n;
//			}	
//		}	
//	}
//	else{
//		cout<<"nolga teng:"<<n;
//	}
//	
//	return 0;
//}

//#30
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;//n--1-999
//	if(n%2==0){
//		if(n>0&& n<10){
//			cout<<"bit xonali juft son:"<<n;
//		}
//		else if(n>=10 && n<99){
//			cout<<"ikki xonali juft:"<<n;
//		}
//		else if(n>=100 && n<1000){
//			cout<<"3 xonali juft:"<<n;
//		}
//	}
//	else{
//		if(n>0&& n<10){
//			cout<<"bit xonali toq son:"<<n;
//		}
//		else if(n>10 && n<99){
//			cout<<"ikki xonali toq:"<<n;
//		}
//		else if(n>100 && n<1000){
//			cout<<"3 xonali toq:"<<n;
//		}
//	}
//	return 0;
//}
