#include<iostream>
#include<vector>
#include<algorithm>

using std::vector;
using std::cin;
using std::cout;

struct seg{
	int end,start;
};


bool sortfn(seg i, seg j) {
	return(i.end<j.end);     //order of increasing end part of dfrnt segments
}

vector<int> optimal_pts(vector<seg> &Segments)
{
	vector<int> points;
	std::sort(Segments.begin(), Segments.end(), sortfn);
	//in-built sort fn which will arrange Segments (from begin to end)
	//in order of (3rd argument;sortfn) i.e.in
	//order of increasing end part of segments.
	int point = Segments[0].end;    //end of 1st segment
		points.push_back(point);      //putting values of point in vector points
		
	for(int i=0; i<Segments.size();i++)
		if(point<Segments[i].end||point>Segments[i+1].start)
		//phle segment ke end ke phle or dusre ke start ke bad
		{
			point=Segments[i].end;
			points.push_back(point);
		}
	return points;
}

int main()
{
	int n;
	cin>>n;
	vector<seg> Segments(n);
	for(int i=0;i<n;i++)
	{
		cin>>Segments[i].start>>Segments[i].end;
	}
 vector<int> points = optimal_pts(Segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
}
}
