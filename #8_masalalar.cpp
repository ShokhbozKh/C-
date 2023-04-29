//#1
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin>>a>>b;
//	while(a>b){
//		a-=b;
//			
//	}
//	cout<<"qolgan qisim: "<<a<<endl;
//	return 0;
//}

//#2
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b, n=0;
//	cin>>a>>b;
//	while(a>b){
//		a-=b;
//		n++;
//	}
//	cout<<"n="<<n<<endl;
//	return 0;
//}

//#3
//#include <iostream>
//using namespace std;
//int main(){
//	int k, n, b;
//	cin>>n>>k;
//	while(n>k){
//		n=n-k;
//		b++;
//	}
//	cout<<"butun= "<<b<<"\n qoldiq="<<n<<endl;
//	return 0;
//}

//#4
//#include <iostream>
//using namespace std;
//int main(){
//	int n, daraja=1;
//	cin>>n;
//	while(n>daraja){
//		daraja*=3;
//		
//	}
//	if(daraja==n){
//		cout<<"darajasi 3 ni";
//	} else{
//		cout<<"Darajasi emas";
//	}
//	
//	return 0;
//}

//#5
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k=0;
//	cin>>n;
//	while(n>1){
//		if((n/2)*2 !=n){
//			cout<<"2 ni darajasi emas";
//			return 0;
//		}
//		n/=2;
//		k++;
//	}
//	cout<<"2 ning "<<k<<" darajasi"<<endl;
//	return 0;
//}

//#6
//#include <iostream>
//using namespace std;
//int main(){
//	int n, p=1,i=0;
//	cin>>n;
//	
//	while(n>i){
//		p*=(n-i);
//		i+=2;
//		
//	}
//	cout<<p<<endl;
//	
//	return 0;
//	
//}

//#7
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k;
//	cin>>n;
//	while( !(k*k>n) ){
//		
//		k++;
//	}
//	cout<<"k="<<k<<endl;
//	return 0;
//}

//#8
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k;
//	cin>>n;
//	
//	if(n!=1) k=n/2;
//	
//	else k=1;
//	
//	while(!(k*k<=n)){
//		k--;
//	}
//	cout<<k<<endl;
//	
//	return 0;
//}

//#9
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k=0, daraja=1;
//	cin>>n;
//	//3^k>n
//	while(daraja <= n){
//		
//		daraja*=3;
//		k++;
//	}
//	cout<<"k="<<k<<endl;
//	return 0;
//}

//#10
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k=0;
//	cin>>n;
//	//3^k<=n
//	while( 3 <= n){
//		
//		n/=3;
//		k++;
//	}
//	cout<<"k="<<k<<endl;
//	return 0;
//}

//#11
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k=0, sum=0;
//	cin>>n;
//	
//	while(sum<n){
//		k+=1;
//		sum+=k;
//	}
//	cout<<k<<" "<<sum<<endl;
//	
//	return 0;
//}

//#12
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k=0, s=0;
//	cin>>n;
//	
//	while( s < n ){
//		k+=1;
//		s+=k;
//	}
//	if(s>n){
//		s=s- k--;
//	}
//	cout<<k<<" "<<s<<endl;
//	
//	return 0;
//}

//#13
//#include <iostream>
//using namespace std;
//int main(){
//	float a, k=0, s=0;
//	cin>>a;//a>1
//	
//	while( s<a ){
//		k+=1;
//		s+=1/k;
//	}
//	cout<<k<<" "<<s<<endl;
//	
//	return 0;
//}

//#14
//#include <iostream>
//using namespace std;
//int main(){
//	float a, k=0, s=0;
//	cin>>a;//a>1
//	
//	while( s<=a ){
//		k+=1;
//		s+=1/k;
//	}
//	if(s>a){
//		s=s- 1/k;
//		k--;
//	}
//	cout<<k<<" "<<s<<endl;
//	
//	return 0;
//}

//#15
//#include <iostream>
//using namespace std;
//int main(){
//	float s, p, k=0, n;
//	cin>>s>>p;
//	n=2*s;
//	p/=100;
//	
//	while(s<=n){
//		k++;
//		s+=p*s;
//		cout<<k<<"-oy "<<s<<endl;
//	}
//	cout<<k<<" oyda "<<s<<" sum buladi"<<endl;
//	return 0;
//}

//#16
//#include <iostream>
//using namespace std;
//int main(){
//	float p, l=10, k=0;  
//	cin>>p;
//	
//	while(200>=l){
//		l+=l*(p/100);
//		k++;
//		
//	}
//	cout<<int (k)<<" "<<int (l)<<endl;
//	return 0;
//}

//#17
//#include <iostream>
//using namespace std;
//int main(){
//	int m, n, butun=0;
//	cin>>n>>m;
//	
//	while(n>=m){
//		n-=m;
//		butun++;
//	}
//	cout<<butun<<" "<<n<<endl;
//	
//	return 0;
//}

//#18
//#include <iostream>
//using namespace std;
//int main(){
//	int n, x;
//	cin>>n;
//	
//	while(n>0){
//		x=n%10;
//		n=n/10;
//		cout<<x;
//	
//	}
//	cout<<endl;
//	
//	return 0;
//}

//#19
//#include <iostream>
//using namespace std;
//int main(){
//	int n, x, t=0, s=0;
//	cin>>n;
//	
//	while(n>0){
//		x=n%10;
//		n=n/10;
//		s+=x;
//		t++;
//	}
//	cout<<s<<" "<< t<<endl;
//	
//	return 0;
//}

//#20
//#include <iostream>
//using namespace std;
//int main(){
//	int n, x, t=0;
//	cin>>n;
//	
//	while(n>0){
//		x=n%10;
//		if(x==2){
//			t++;
//		}
//		
//		n=n/10;
//	}
//	cout<<t<<" ta 2 bor"<<endl;
//	
//	return 0;
//}

//#21
//#include <iostream>
//using namespace std;
//int main(){
//	int n, x, t=0;
//	cin>>n;
//	
//	while(n>0){
//		x=n%10;
//		if(x%2!=0){
//			t++;
//		}
//		
//		n=n/10;
//	}
//	cout<<t<<" ta toq son bor"<<endl;
//	
//	return 0;
//}

//#22
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	bool tub=true;
//	int i=2, ildiz=sqrt(n);
//	cin>>n;
//	
//	while(i<=ildiz){
//		if(n%i==0){
//			tub=false;
//			break;
//		}
//		i++;
//	}
//	if(tub) 
//		cout<<"tub"<<endl;
//	
//	else 
//		cout<<"tub emas"<<endl;
//	
//	return 0;
//}

//#23
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin>>a>>b;
//	
//	while(a!=b){
//		
//		if(a>b) a-=b;
//		else b=b-a;
//	}
//	cout<<a<<endl;
//	return 0;
//}

//#24

