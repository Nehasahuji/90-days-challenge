 int tribonacci(int m) {
    
    if(m<=1)
        return m;
    if(m==2)
        return 1;
    int num0=0;
    int num1=1;
    int num2=1;
    int num3;
        for(int i=2;i<m;i++){
            num3=num1+num2+num0;
            num0=num1;
            num1=num2;
            num2=num3;
        }
        
        return num3;
    }