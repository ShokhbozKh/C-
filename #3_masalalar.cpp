//#1
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	
//	cin>>a;
//	
//	cout<<bool(a>0);
//		
//	return 0;
//	}
//	
//#2
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=!(a%2==0);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#3
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=(a%2==0);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#4
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b;
//	bool r;
//	cin>>a;
//	cin>>b;
//	
//	r=(a>2 && b<=3);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#5
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b;
//	bool r;
//	cin>>a;
//	cin>>b;
//	
//	r=(a>=0 || b<-2);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#6
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a<=b && b<=c);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#7
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(b>a && b<c);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#8
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b;
//	bool r;
//	cin>>a;
//	cin>>b;
//	
//	r=(a%2==1 && b%2==1);
//		
//	cout<<r;
//		
//	return 0;
//	}

//#9
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b;
//	bool r;
//	cin>>a;
//	cin>>b;
//	
//	r=(a%2==1 && (b%2==0))||(a%2==0 && b%2==1)||(a%2==1 && b%2==1);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#10
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b;
//	bool r;
//	cin>>a;
//	cin>>b;
//	
//	r=(a%2==1 && (b%2==0))||(a%2==0 && b%2==1);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#11
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b;
//	bool r;
//	cin>>a;
//	cin>>b;
//	
//	r=(a%2==0 && (b%2==0))||(a%2==1 && b%2==1); ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#12
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a>0 && b>0 && c>0); ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#13
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a>0 || b>0 &|| c>0); ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#14
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a>0 && b<0 && c<0) || (b>0 && a<0 && c<0) || (c>0 && a<0 && b<0) ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#15
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a>0 && b>0 && c<0) || (b>0 && a<0 && c>0) || (c>0 && a>0 && b<0) ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#16
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=(a/10 > 0 && a/10<10) && (a%2==0);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#17
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=(a>99 && a<1000) && (a%2==1);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#18
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a==b || a==c);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#19
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a, b, c;
//	bool r;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	
//	r=(a+b==0 || a+c==0 || b+c==0);
//	
//	cout<<r;
//		
//	return 0;
//	}

//#20
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=( (a/100 )==((a%100)/10) && (a/100)==(a%10));
//	
//	cout<<r;
//		
//	return 0;
//	}

//#21
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=(a/100 < (a%100)/10 && (a%100)/10 < a%10);
//	
//	cout<<r;
//		
//	return 0;
//	}
	
	
////#22
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=(a/100 < (a%100)/10 && (a%100)/10 < a%10) || (a/100 > (a%100)/10 && (a%100)/10 > a%10); ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#23
//#include <iostream>
//
//using namespace std;
//	int main(){
//	int a;
//	bool r;
//	cin>>a;
//	
//	r=(a/100 == a%10) ;
//	
//	cout<<r;
//		
//	return 0;
//	}

//#24
//#include <iostream>
//using namespace std;
//int main(){
//	float a, b, c;
//	bool r;
//	
//	cin>>a>>b>>c;
//	
//	r=(0<=b*b - 4*a*c);
//	
//	cout<<r<<endl;
//	
//	return 0;
//}

//#25
//#include <iostream>
//
//using namespace std;
//int main(){
//	int x, y;
//	bool r;
//	
//	cin>>x;
//	cin>>y;
//	
//	r=(x<=0 && y>0 );
//	
//	cout<<r;
//	return 0;
//}

//#26
//#include <iostream>
//
//using namespace std;
//int main(){
//	int x, y;
//	bool r;
//	
//	cin>>x;
//	cin>>y;
//	
//	r=(x>=0 && y<0 );
//	
//	cout<<r;
//	return 0;
//}

//#27
//#include <iostream>
//
//using namespace std;
//int main(){
//	int x, y;
//	bool r;
//	
//	cin>>x;
//	cin>>y;
//	
//	r=((x<=0 && y>0) || (x<0 && y<0) );
//	
//	cout<<r;
//	return 0;
//}

//#28
//#include <iostream>
//
//using namespace std;
//int main(){
//	int x, y;
//	bool r;
//	
//	cin>>x;
//	cin>>y;
//	
//	r=(x>0 && y>=0 ) || (x<=0 && y<0);
//	
//	cout<<boolalpha<<r;
//	return 0;
//}

//#29
//#include <iostream>
//
//using namespace std;
//int main(){
//	int x, y, x1, y1, x2, y2;
//	bool r;
//	
//	cin>>x>>y>>x1>>y1>>x2>>y2;
//	
//	r=(x1<x && x<x2) && (y1>y && y>y2);
//	
//	cout<<boolalpha<<r;
//	return 0;
//}

//#30
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c;
//	bool r;
//	
//	cin>>a>>b>>c;
//	
//	r=(a==b && a==c);
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#31
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c;
//	bool r;
//	
//	cin>>a>>b>>c;
//	
//	r=(a==b || a==c || c==b);
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#32
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int a, b, c;
//	bool r;
//	
//	cin>>a>>b>>c;
//	
//	r=(a==sqrt(b*b+c*c) || b==sqrt(a*a+c*c) || c==sqrt(a*a+b*b));
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#33
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, c;
//	bool r;
//	
//	cin>>a>>b>>c;
//	
//	r=(a<c+b && b<c+a && c<b+a);
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#34
//#include <iostream>
//using namespace std;
//int main(){
//	int x, y;
//	bool r;
//	
//	cin>>x>>y;
//	
//	r=!( (x+y)%2==0);
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#35
//#include <iostream>
//using namespace std;
//int main(){
//	int x1, y1, x2, y2;
//	bool r;
//	
//	cin>>x1>>y1>>x2>>y2;
//	
//	r= ((x1+y1)%2==0 && (x2+y2)%2==0);
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#36
//#include <iostream>
//using namespace std;
//int main(){
//	int x1, y1, x2, y2;
//	bool r;
//	
//	cin>>x1>>y1>>x2>>y2;
//	
//	r= ( (x1==x2 && y1!=y2)||(x1!=x2 && y1==y2) );
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#37
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int x1, y1, x2, y2;
//	bool r;
//	
//	cin>>x1>>y1>>x2>>y2;
//	
//	r= (abs(x1-x2)==1 || abs(y1-y2)==1);
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#38 fil
//#include <iostream>
//using namespace std;
//int main(){
//	int x1, y1, x2, y2;
//	bool r;
//	int k1, k2;
//	
//	cin>>x1>>y1>>x2>>y2;
//	
//	k1=x1+y1;
//	k2=x2+y2;
//	
//	r= (k1==k2) || ((k1+2)==k2) || ((k1+4)==k2) || ((k1+6)==k2) || 
//		((k1+8)==k2) || ((k1+10)==k2) || ((k1+12)==k2) || ((k1+14)==k2) || 
//			((k1-2)==k2) || ((k1-4)==k2)|| ((k1-6)==k2) || ((k1-8)==k2) || 
//				((k1-10)==k2) || ((k1-12)==k2) || ((k1-14)==k2);
//	
//	cout<<boolalpha<<r;
//	
//	return 0;
//}

//#39 farzin
//Shoxga uxshab yurish va filga uxshab yurishni || birlashtirish kerak


//#40 ot
#include <iostream>

using namespace std;
int main(){
	int x1, y1, x2, y2;
	bool r;
	
	cin>>x1>>y1>>x2>>y2;
	
	r=(x1+1==x2)&&(y1+2==y2||y1-2==y2)||(x1+2==x2)&&(y1+1==y2||y1-1==y2)||(x1-1==x2)&&(y1+2==y2||y1-2==y2)||(x1-2==x2)&&(y1+1==y2||y1-1==y2);
	cout<<boolalpha<<r;
	
	return 0;
}
