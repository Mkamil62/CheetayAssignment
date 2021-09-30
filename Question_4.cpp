 #include <iostream>
#include <string>
using namespace std; 

struct meeting { 
	int start; 
	int end; 
	int pos; 
}; 

bool endSort(struct meeting m1, meeting m2) 
{ 
	return (m1.end < m2.end); 
} 

void maximumMeetings(int s[], int f[], int n) 
{ 
	struct meeting meet[n];
	int c = 1;
	for (int i = 0; i < n; i++) 
	{ 
		meet[i].start = s[i]; 
		meet[i].end = f[i]; 
		meet[i].pos = i + 1; 
	} 

	sort(meet, meet + n, endSort); 

	vector<int> m; 

	m.push_back(meet[0].pos); 
 
	int prev_end = meet[0].end; 

	for (int i = 1; i < n; i++) { 
		if (meet[i].start >= prev_end) 
		{ 
			m.push_back(meet[i].pos); 
			prev_end = meet[i].end; 
			c++;
		} 
	} 
	
	cout<<"Maximum meetings that can take place are: "<<c;
	cout<<"\nSelected meetings: ";

	for (int i = 0; i < m.size(); i++) { 
		cout << m[i] << " "; 
	} 
} 

int main() 
{ 
	int s[] = { 1, 2, 0, 6, 9, 10 }; 
	
	int f[] = { 3, 5, 7, 8, 11, 12 }; 
	
	int n = sizeof(s) / sizeof(s[0]); 

	maximumMeetings(s, f, n); 
	return 0; 
} 
