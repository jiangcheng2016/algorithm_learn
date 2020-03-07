bool isPalindrome(int x){
    if(x < 0 || x % 10 == 0 && x != 0)
        return false;
    
    int reInt = 0;
    while(x > reInt)
    {
        reInt = reInt * 10 + x % 10;
        x = x/10;
    }

    return x == reInt || x == reInt / 10;


}