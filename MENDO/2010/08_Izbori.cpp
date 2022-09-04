#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> votes;
     
    int ncandidates;
    cin >> ncandidates;
     
    for (int i=0; i<ncandidates; i++)
    {
        int nvotes;
        cin >> nvotes;
        votes.push_back(nvotes);
    }
 
    int changedVotes = 0;
     
    while (true)
    {
        int bestIndex = 0;
        int bestVotes = -1;
         
        for (int i=1; i<votes.size(); i++)
            if (votes[i] > bestVotes)
            {
                bestIndex = i;
                bestVotes = votes[i];
            }
         
        if (bestVotes >= votes[0])
        {
            //change vote
            changedVotes++;
            votes[0]++;
            votes[bestIndex]--; 
        } else
        {
            //favorite candidate has most votes
            break; //break while loop
        }
    }
     
    cout << changedVotes << endl;
    return 0; //exit code zero
}