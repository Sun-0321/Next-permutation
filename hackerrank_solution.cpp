//hackerrank

string biggerIsGreater(string w) {
    
    int i=w.size()-1;
    
    while(i)
    {
        if(w[i]>w[i-1])
        {   char c=w[i-1];
            
            sort(w.begin()+i-1,w.end());
            int a=w.rfind(c);
            c=w[++a];
            string s;
            s+=c;
            w.erase(a,1);
            w.insert(i-1,s);
            return w;
            
            
        }
        i--;
    }
    
    return "no answer";

}
