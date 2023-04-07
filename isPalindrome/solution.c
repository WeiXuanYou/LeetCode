bool isPalindrome(char * s){
    if(strlen(s) == 1) return true;
    int s_length = 0;
    // convert  uppercase to lowercase
    for(int i = 0;i<strlen(s);i++){
        if((s[i]>= 'a' && s[i] <= 'z') || (s[i]>= 'A' && s[i]<= 'Z')){
            s[s_length] = (s[i]-'a' >= 0) ? s[i]: s[i]+32;
            s_length++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            s[s_length] = s[i];
            s_length++;
        }
    }
    if(s_length == 0) return true;
    for(int i = 0;i<s_length/2;i++){
        if(s[i] != s[s_length-i-1]) return false;
    }
    return true;
}
