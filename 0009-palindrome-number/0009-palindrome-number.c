bool isPalindrome(int x) {
    
    if (x < 0) {
        return false;
    }
    
    int i = x;
    long long int reversed = 0;
    int rem;

    while(i > 0) {
        rem = i % 10;
        reversed = reversed * 10 + rem; 
        i = i / 10; 
    }
    if (x == reversed) 
        return true;
    else 
        return false;
    
}