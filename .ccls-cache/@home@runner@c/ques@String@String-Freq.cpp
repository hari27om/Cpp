// https://www.interviewbit.com/problems/string-and-its-frequency/discussion/c/string-and-its-frequency/solved/
string Solution::solve(string A) {

  map<char, int> mp;
  for (int i = 0; i < A.size(); i++) {
    mp[A[i]]++;
  }
  string res = "";
  for (int i = 0; i < A.size(); i++) {
    if (mp[A[i]] > 0) {
      res += A[i];
      res += to_string(mp[A[i]]);
      mp[A[i]] = 0;
    }
  }
  return res;
}