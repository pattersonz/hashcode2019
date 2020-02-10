#include<bits/stdc++.h>
using namespace std;

class slide{
public:
  slide()
  {
    a = b = 0;
    tags.clear();
  }
  int a,b;
  vector<string> tags;
};

int score(struct slide a, struct slide b)
{
  return 0;
}

void combineV(vector<slide>& S)
{
  return;
}

void greedy(vector<slide>& S)
{
  return;
}

int main()
{
  vector<slide> slides, vs;
  slides = vector<slide>(); vs = vector<slide>();
  string file;
  cout << "file: ";
  cin >> file;
  ifstream f;
  f.open(file + ".in");
  int N;
  int M;
  f >> N;
  for (int i = 0; i < N; ++i)
    {
      char x;
      f >> x;
      slide y;
      y.a = i;
      y.b = -1;
      y.tags = vector<string>();
      int c;
      f >> c;
      for (int j = 0; j < c; ++j)
	{
	  string str;
	  f >> str;
	  y.tags.push_back(str);
	}
      if (x == 'V')
	  vs.push_back(y);
      else
	slides.push_back(y);
    }
  f.close();
  ofstream o;
  o = ofstream(file + ".out", ofstream::out);
  combineV(vs);
  for (int i = 0; i < vs.size(); ++i)
    slides.push_back(vs[i]);
  greedy(slides);
  o << slides.size() << endl;
  for (int i = 0; i < slides.size(); ++i)
    if (slides[i].b == -1)
      o << slides[i].a << endl;
    else
      o << slides[i].a << " " << slides[i].b << endl;
  return 0;
}
