using namespace std;
int main()
{ int n=1;
int sum=0;

while (n <= 32500){

cout << " Enter a number: "<< endl;
cin >> n;

for(int i=1;i<n;i++)

if (n / i * i == n){

sum+=i;

}

if (sum < n){
	cout<<n<<" is a deficient number"<<endl;}

else if (sum > n){
	cout<<n<<" is a abundant number"<<endl;}

else if (sum == n) {
	cout<<n<<" is a perfect number"<<endl;}

}

return 0;

}
