int convertFive(int n) {
    // Your code here
    string st=to_string(n);
    
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='0')
            st[i]='5';
    }
    return stoi(st);
}
