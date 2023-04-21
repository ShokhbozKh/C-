//#1
//#include <iostream>
//
//using namespace std;
//int main(){
//	float x, y, max, min;
//	cin>>x>>y;
//	
//	if(x>y){
//		cout<<"kattas="<<x<<endl;
//	}
//	else{
//		cout<<"kattasi="<<y<<endl;
//	}
//	max= (x>y) ? x : y;
//	min= (max>y) ? y : x;
//	cout<<"max:"<<max<<endl;
//	cout<<"min:"<<min<<endl;
//	
//	return 0;
//}

//#2
//#include <iostream>
//
//using namespace std;
//int main(){
//	float x, y, z,  max, min;
//	cin>>x>>y>>z;
//	max=(x>y&&x>z)?x:(y>x&&y>z)?y:z;
//	min=(x<y&&x<z)?x:(y<x&&y<z)?y:z;
//	
//	cout<<"max:"<<max<<endl;
//	cout<<"min:"<<min<<endl;
//	
//	return 0;
//}

//#3
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int main(){
//	float x, y, z, max1, max2, min1, min2;
//	cin>>x>>y>>z;
//	
//	max1=(x+y+z);
//	max2=(x*y*z);
//	min1=pow((x+y+z/2),2);
//	min2=pow((x*y*z),2);
//	
//	if(max1>max2){
//		cout<<max1<<endl;
//	}
//	else{
//		cout<<max2<<endl;
//	}
//	if(min1<min2){
//		cout<<min1+1<<endl;
//	}
//	else {
//		cout<<min2+1<<endl;
//	}
//	return 0;
//}

//#4
//#include <iostream>
//
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a>b&&b>c){
//		cout<<"qanoatlantiradi";
//	}
//	else{
//		cout<<"yuq";
//	}
//	
//	return 0;
//}

//#5
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a>=b && b>=c){
//		cout<<a*2<<" "<<b*2<<" "<<c*2;
//	}
//	else{
//		cout<<abs(a)<<" "<<abs(b)<<" "<<abs(c);
//	}
//	
//	return 0;
//}

//#6
//#include <iostream>
//
//using namespace std;
//int main(){
//	float x, y, max, min;
//	cin>>x>>y;
//	
//	(x>y) ? cout<<(x-y) : cout<<(y-x+1);
//	
//	return 0;
//}

//#7
//#include <iostream>
//
//using namespace std;
//int main(){
//	float a, b;
//	cin>>a>>b;
//	
//	(a>b)?cout<<a : cout<<a<<" "<<b;
//	
//	return 0;
//}

//#8
//#include <iostream>
//
//using namespace std;
//int main(){
//	float x, y;
//	cin>>x>>y;
//	
//	if(x<=y){
//		x=0;
//		cout<<x;
//	}
//	else{
//		cout<<x<<" "<<y;
//	}
//	return 0;
//}

//#9
//#include <iostream>
//
//using namespace std;
//int main(){
//	float x, y, z;
//	cin>>x>>y>>z;
//	
//	if(x>1&&x<3){
//		cout<<x<<endl;
//	}
//	if(y>1&&y<3){
//		cout<<y<<endl;
//	}
//	if(z>1&&z<3){
//		cout<<z<<endl;
//	}
//	
//	return 0;
//}

//#10
//#include <iostream>
//
//using namespace std;
//int main(){
//	float x, y, k;
//	cin>>x>>y;
//	
//	if(x<y){
//		k=x;
//		x=(x+y)/2;
//		y=y*k*2;
//		cout<<"x="<<x<<" y="<<y;
//	}
//	else{
//		k=y;
//		y=(x+y)/2;
//		x=x*k*2;
//		cout<<"x="<<x<<" y="<<y;
//	}
//	return 0;
//}

//#11
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, c;
//	cin>>a>>b>>c;
//	
//	if(a>0) cout<<a*a<<endl;
//	if(b>0) cout<<b*b<<endl;
//	if(c>0) cout<<c*c<<endl;
//	
//	return 0;
//}

//#12
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, c, d;
//	cin>>a>>b>>c>>d;
//	if(d>=c && c>=b && b>=a){
//		a=d;
//		b=d;
//		c=d;
//		cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
//	}
//	else if(a>b&& b>c && c>d){
//		cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
//	}
//	else{
//		cout<<"a="<<a*a<<" b="<<b*b<<" c="<<c*c<<" d="<<d*d<<endl;
//	}
//	
//	return 0;
//}

//#13
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	float a, b, c, d, x1, x2, x;
//	cin>>a>>b>>c;
//	d=sqrt(b*b-4*a*c);
//	
//	if(d==0){
//		x=-b/(2*a);
//		cout<<x;
//	}
//	else if(d>0){
//		x1=(-b+d)/(2*a);
//		x2=(-b-d)/(2*a);
//		cout<<"x1:"<<x1<<" x2="<<x2;
//	}
//	else{
//		cout<<"Tenglama yechimi yuq";
//	}
//	
//	return 0;	
//}

//#14
//#include <iostream>
//using namespace std;
//int main(){
//	float x, y, a, b, c;
//	
//	cout<<"x="; cin>>x;
//	cout<<"y="; cin>>y;
//	
//	cout<<"a="; cin>>a;
//	cout<<"b="; cin>>b;
//	cout<<"c="; cin>>c;
//	
//	if(x>=a&&y>=b){
//		cout<<"sig\"adi";
//	}else if(x>=b&&y>=c){
//		cout<<"sig'adi";
//	}else if(x>=c&&y>=a){
//		cout<<"sig'adi";
//	}else{
//		cout<<"sig'maydiii!!!";
//	}
//	return 0;
//}

