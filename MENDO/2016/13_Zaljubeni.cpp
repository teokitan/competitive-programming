#include <iostream>
 
using namespace std;
 
int main()
{
    int V,K,Eg,Ed,stanici;
    cin>> V >> K >> Eg >> Ed >> stanici;
 
    int niza[25];
 
    for (int i = 0; i<stanici; i++)
    {
        cin>>niza[i];
    }
 
    int reshenie = 100000000;
 
    if (stanici < 2)
    {
        if (V < K)
            reshenie = (K - V) * Eg;
        else
            reshenie = (V - K) * Ed;
 
        cout<<reshenie<<endl;
        return 0;
    }
    else if (stanici == 2)
    {
        if (V < K)
        {
            reshenie = (K - V) * Eg;
 
            int vesna_stanica;
 
            if (niza[0] >= V)
                vesna_stanica = (niza[0] - V) * Eg;
            else
                vesna_stanica = (V - niza[0]) * Ed;
 
            int krste_stanica;
 
            if (niza[1] >= K)
                krste_stanica = (niza[1] - K) * Ed;
            else
                krste_stanica = (K - niza[1]) * Eg;
 
            reshenie = min(reshenie, vesna_stanica + krste_stanica);
 
            cout<<reshenie;
            return 0;
        }
        else
        {
            reshenie = (V - K) * Ed;
 
            int vesna_stanica;
 
            if (niza[1] >= V)
            {
                vesna_stanica = (niza[1] - V) * Eg;
            }
            else
            {
                vesna_stanica = (V - niza[1]) * Ed;
            }
 
            int krste_stanica;
            if (niza[0] >= K)
            {
                krste_stanica = (niza[0] - K) * Ed;
            }
            else
            {
                krste_stanica = (K - niza[0]) * Eg;
            }
 
            reshenie = min(reshenie, vesna_stanica + krste_stanica);
 
            cout<<reshenie;
            return 0;
        }
    }
    else
    {
        for (int i = 0; i<stanici; i++)
        {
            for (int j = i+1; j<stanici; j++)
            {
                int leva_stanica = niza[i];
                int desna_stanica = niza[j];
 
                if (V < K)
                {
                    int vesna_stanica = (leva_stanica >= V) ? (leva_stanica-V) * Eg : (V-leva_stanica)*Ed;
                    int krste_stanica = (desna_stanica >= K) ? (desna_stanica-K)*Ed : (K- desna_stanica)*Eg;
                    reshenie = min(reshenie, min( (K-V)*Eg, vesna_stanica+krste_stanica));
                }
                else
                {
                    int vesna_stanica = (desna_stanica >= V) ? (desna_stanica-V)*Eg : (V - desna_stanica) * Ed;
                    int krste_stanica = (leva_stanica >= K) ? (leva_stanica-K)*Ed : (K-leva_stanica) * Eg;
                    reshenie = min(reshenie, min( (V-K)*Ed, vesna_stanica+krste_stanica));
                }
            }
        }
 
        cout<<reshenie;
        return 0;
    }
    return 0;
}