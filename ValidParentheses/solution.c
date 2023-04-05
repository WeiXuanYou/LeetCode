bool isValid(char * s){
  char* stack = (char*) malloc(sizeof(char)*strlen(s));
  int cur = 0;
  if(strlen(s)%2 != 0){
    return false;
  }
  for(int i =0;i<strlen(s);i++){
    if(s[i] == ')' && cur != 0){
      if(stack[--cur] != '('){
        return false;
      }
    }
    else if(s[i] == ']' && cur != 0){
      if(stack[--cur] != '['){
        return false;
      }
    }
    else if(s[i] == '}' && cur != 0){
      if(stack[--cur] != '{'){
        return false; 
      }
    }
    else{
      stack[cur] = s[i];
      cur += 1;
    }
  }
  if(cur == 0)
    return true;
  else 
    return false;
}
