int main(){
    char c;
    cin>>c;
    int a= (int)c;
    bool x=caratteri(a);

    if(x==1){
        if(65<= a && a<=90){
            a=a+32;
            cout<< (char)a<<endl;
        }
        else if(97<=a && a<=122){
            a=a-32;
            cout<<(char)a<<endl;
        }
        else {
            cout<<"errore";
        }
    }
    return 0;
    }
