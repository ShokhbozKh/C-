//#1
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		if(n%i==0){
//			cout<<i<<endl;
//		}
//	}
//	
//	return 0;
//}
//#2
//#include <iostream>
//using namespace std;
//int main(){
//	int n, sum=0;;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		if(n%i==0){
//			sum=sum+i;
//		}
//	}
//	cout<<"sum:"<<sum<<endl;
//	
//	return 0;
//}

//#3
//#include <iostream>
//using namespace std;
//int main(){
//	int n, s=0;
//	cin>>n;
//	for(int i=1; i<n; i++){
//		if(n%i==0){
//			s+=i;
//		}
//	}
//	if(s==n){
//			cout<<"mukammal son:"<<n;
//		}
//	else{
//		cout<<"mukammal emas:"<<n;
//	}
//	
//	return 0;
//}

//#4
//#include <iostream>
//using namespace std;
//int main(){
//	int n, s;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s=0;
//		for(int j=1; j<i; j++){
//			
//			if(i%j==0){
//				s+=j;
//		} }
//	if(s==i){
//		cout<<i<<endl;
//		}	
//	}
//	return 0;
//}

//#5
//#include <iostream>
//using namespace std;
//int main(){
//	int n, i;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		if((i%3==0) && (i%5!=0)){
//			cout<<i<<endl;
//		}	
//	}
//	return 0;
//}

//#6
//#include <iostream>
//using namespace std;
//int main(){
//	int n, t=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		if(n%i==0){
//			cout<<i<<endl;
//			t++;
//		}		
//	}
//	if(t>2){
//		cout<<"tub emas "<<n<<endl;
//	}
//	else
//		cout<<"tub son "<<n<<endl;
//		
//	return 0;
//}

//#7
//#include <iostream>
//using namespace std;
//int main(){
//	int n, t;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		t=0;
//		for(int j=1; j<=i; j++){
//			if(i%j==0){
//				t++; }
//			}
//			if(t<3){
//			cout<<i<<endl;
//			}	
//		}
//		return 0;		
//	}

//#8
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n:"; cin>>n;
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=i; j++){
//			for(int k=1; k<=i; k++){
//				if((i*i)==(j*j+k*k)){
//					cout<<"pefagor sonlari:"<<" c= "<<i<<" a= "<<j<<" b= "<<k<<endl;
//				}
//			}
//		}
//	}
//	return 0;
//}

//#9

//#10
//a
//#include <iostream>
//using namespace std;
//int main(){
//	int n, s=1;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s*=2;
//	}
//	cout<<s<<endl;
//	return 0;
//}

//b
//#include <iostream>
//using namespace std;
//int main(){
//	int n, s=1;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s*=i;
//	}
//	cout<<s<<endl;
//	return 0;
//}

//c
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float s=1;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s=s* ( 1 + 1 / ( pow (i,2) ) );
//	}
//	cout<<s<<endl;
//	return 0;
//}

//d
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s=s+ sqrt(2);
//	}
//	cout<<s<<endl;
//	return 0;
//}

//e
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s=s+ sqrt(3*i);
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#f
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s=s + 1/(sin(1)+sin(i));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#g
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s=s + (cos(1)+cos(i))/(sin(1)+sin(i));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#11
//a
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s+=1/pow(i,2) ;
//	}
//	cout<<s<<endl;
//	return 0;
//}

//b
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		s+=1/pow(i,3) ;
//	}
//	cout<<s<<endl;
//	return 0;
//}

//c
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i;
//	float s=0, fact=1;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		fact*=i;
//		s+=1/(fact );
//	}
//	cout<<s<<endl;
//	return 0;
//}

//d
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i;
//	float s=0;
//	cin>>n;
//	for(int i=1; i<=n; i++){
//	
//		s+=1/(pow(2*i,2));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//e
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i;
//	float s=1;
//	cin>>n;
//	for(int i=2; i<=n; i++){
//		
//		s*=(i+1)/(i+2);
//	}
//	cout<<s<<endl;
//	return 0;
//}

//f
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i;
//	float s=1,fact=1;
//	cin>>n;
//	for(int i=2; i<=n; i++){
//		fact=fact*i;
//		
//		s*=(1+1/fact)*(1+1/fact);
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#12
//a
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float a, n, s=1;
//	cin>>n;
//	cin>>a;
//	for(int i=1; i<=n;i++){
//		s*=pow(a,i);
//	}
//	cout<<s<<endl;
//	return 0;
//}

//b
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float a, n, s=1;
//	cin>>n;
//	cin>>a;
//	for(int i=1; i<=n;i++){
//		s*=(a+i-1);
//	}
//	cout<<s<<endl;
//	return 0;
//}

//c
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float a, n, s=1;
//	cin>>n;
//	cin>>a;
//	for(int i=1; i<=n;i++){
//		s*=(1/(a*(a+i)));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//d
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float a, n, s=1;
//	cin>>n;
//	cin>>a;
//	for(int i=1; i<=n;i++){
//		s*=(a-pow(i,2));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#13
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float s=1;
//	for(float i=1; i<=10;i++){
//		s*=(1+sin(i/10));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#14
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float a, x, n, s=1;
//	cin>>n;
//	cin>>a;
//	cin>>x;
//	for(int i=1; i<=n;i++){
//		s*=(pow(x+a,2));
//	}
//	cout<<s<<endl;
//	return 0;
//}

//#15
//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	float n, s=0;
//	cin>>n;
//	for(int i=1; i<=n;i++){
//		s+=(n*(n+1));
//	}
//	cout<<s<<endl;
//	return 0;
//}

