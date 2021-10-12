#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float ratting;

public:
    CWH(string s, float r)
    {
        title=s;
        ratting = r;
    }
    virtual void display() {
        cout<<"bogus code"<<endl;
    }
};
class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this video is amazing with title: " << title << endl;
        cout << "Rattings : " << ratting << " out of 5 star" << endl;
        cout << "Length of video is : " << videolength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this text is amazing with title: " << title << endl;
        cout << "Rattings of this text tutorial: " << ratting << " out of 5 star" << endl;
        cout << "no of words in text tutorial is : " << words << " words" << endl;
    }
};
int main()
{
  string title;
    float ratting, vlen;
    int words;
    // for code with harry video
    title="django tutorial";
    vlen=5.65;
    ratting=4.88;
    CWHvideo djvideo(title,ratting,vlen);
//    djvideo.display();
  // for code with harry text
    title="django tutorial with text";
    words=7;
    ratting=4.18;
    CWHtext djtext(title,ratting,words);
    // djtext.display();
    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
tuts[0]->display();
tuts[1]->display();
    return 0;
}