#include<iostream>
#include<algorithm>
using namespace std;

//Fungsi untuk memeriksa apakah bilangan adalah bilangan prima 
bool  isPrime(int num){
    if(num <= 1) return false;
    for(int i=2;i*i<=num;i++){
    if(num%i==0) return false;
    }
    return true;
}

//Fungsi untuk mencari nilai di array menggunakan search 
int linearSearch(int arr[], int n, int x){
    //Fungsi untuk mengembalikan nilai
    }
    return -1;
}

int main(){
    int n, m;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    //Input Array A
    for(int i=0;i<n;i++){
    cin>>array_B[i];
    }

    int result[n + m]; //Mengguanakan array untuk hasil 
    int result_count = 0; //Counter untuk hasil

    //Cari nilai yang memenuhi syarat
    for(int i=0;i<n;i++){
    //...
    }

    //Urutkan hasil pencarian
    sort(results, results + result_count);

    //Cetak hasil pencarian
    if(result_count == 0){
    count<<"TIDAK ADA"<<endl;
    } else {
    //
    }
    
    return 0;
}