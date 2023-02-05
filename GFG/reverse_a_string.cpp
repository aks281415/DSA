

//User function Template for C++

string reverseWord(string str){
    
   string revstr ="";
  for (int i =str.size()-1;i>=0;i--)
  {
      revstr = revstr+str[i];
  }
  return revstr;
}