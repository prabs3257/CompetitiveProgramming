#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define revloop(i, n) for(int i=n-1;i>=0;i--)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
bool isPrime(int n);

//=======================
// auto rd = std::random_device {}; 
// auto rng = std::default_random_engine { rd() };


class Contributor{

    public:
    string name;
    int noSkills;
    vector<pair<string ,int>> skills;

};

class Projects{

    public:
    string name;
    int days;
    int score;
    int deadline;
    int noRoles;
    vector<pair<string ,int>> roles;
};

class Result{
    public:
    int noProjects;
    vector<pair<Projects, vector<Contributor> >> projects;

};

Result getData(vector<Contributor> contri, vector<Projects> proj, int c, int p){
    
    Result res;
    srand(time(0));
    res.noProjects = rand() % (p + 1);

    // shuffle(std::begin(proj), std::end(proj), rng);
    std::random_shuffle(proj.begin(), proj.end());

    loop(i, res.noProjects){

        int noRoles = proj[i].noRoles;
        vector<Contributor> tempContri;
        std::random_shuffle(contri.begin(), contri.end());

        loop(j, noRoles){
            tempContri.pb(contri[j]);
        }
        
        res.projects.pb(mp(proj[i], tempContri));
        tempContri.clear();
    }
    return res;
}


int scoring(Result res, vector<Contributor> contri, vector<Projects> proj){

    loop(i,res.noProjects){

        unordered_map<string, int> mpp;

        loop(j, res.projects[i].f.noRoles){

            mpp[res.projects[i].f.roles[j].f] = res.projects[i].f.roles[j].s;

        }

        loop(j, res.projects[i].s.size()){
            loop(k,res.projects[i].s[j].noSkills)
            {
                if(mpp.find(res.projects[i].s[j].skills[k].f)!=mpp.end())
                {
                    if(res.projects[i].s[j].skills[k].s>=mpp[res.projects[i].s[j].skills[k].f])
                    {
                        
                    }
                    else if(abs(res.projects[i].s[j].skills[k].s-mpp[res.projects[i].s[j].skills[k].f])==1)
                    {
                        //string ment=res.projects[i].s[j].skills[k].f;
                        loop(l,res.projects[i].s.size())
                        {
                            if(mpp)
                        }    
                    }
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    freopen("input.txt","r",stdin);

    int c = 0, p = 0;
    cin>>c>>p;
    Contributor tempContri;
    vector<Contributor> contri;
    Projects tempProj;
    vector<Projects> proj;

    loop(i, c){
        
        cin>>tempContri.name;
        cin>>tempContri.noSkills;
        loop(j,tempContri.noSkills){
            string name;
            int level;
            cin>>name>>level;
            tempContri.skills.pb(mp(name, level));
        }
        contri.pb(tempContri);

    }

    loop(i,p){
        cin>>tempProj.name;
        cin>>tempProj.days;
        cin>>tempProj.score;
        cin>>tempProj.deadline;
        cin>>tempProj.noRoles;
        loop(j,tempProj.noRoles){
            string name;
            int level;
            cin>>name>>level;
            tempProj.roles.pb(mp(name, level));
        }
        proj.pb(tempProj);
    }

    auto res = getData(contri, proj, c, p);
    cout<<res.projects[0].s[0];
    

    return 0;
}




bool isPrime(int n){
  if(n==1) return false;
  if(n==2) return true;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}