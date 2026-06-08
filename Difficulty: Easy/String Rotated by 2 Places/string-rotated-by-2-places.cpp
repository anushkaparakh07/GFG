string rotateclockwise(string& s1){
    int n = s1.size();
    return s1.substr(n-2) + s1.substr(0,n-2);
}
string anticlockwise(string& s1){
    int n = s1.size();
    return s1.substr(2) + s1.substr(0,2);
}
class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()) return false;
        int n = s1.size();
        if(n<2) return s1==s2;
        if(rotateclockwise(s1)==s2 || anticlockwise(s1)==s2) return true;
        return false;
    }
};
