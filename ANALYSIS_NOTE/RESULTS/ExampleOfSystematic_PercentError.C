#include "TH1.h"
#include "TRandom.h"
#include "TCanvas.h"
#include <iostream>

using namespace std;
Double_t value = 0.187;
Double_t valueII = value+0.1*value;

void ExampleOfSystematic_PercentError(){
  
  
  TH1D *plot = new TH1D("plot","plot",100,-1,1);
  TH1D *error = new TH1D("error","error",100,-1,1);
  TH1D *errorII = new TH1D("errorII","errorII",100,1,1);

  for (Int_t i = 0; i<1000000; i++) {
    Double_t rndmV = gRandom->Gaus(0., 1.);
    Double_t rndm;
    
    if (i%2==0) {
      cout<<i<<endl;

      rndm= value*(1.0 + rndmV);
    }else{
      
      rndm= value*(1.0 - rndmV);
    }
    
    //Double_t rndmII = valueII*(1.0 + rndmV*gRandom->Gaus(0., 0.1));
   // cout<<rndm<<"  "<<rndmII<<endl;

    plot->Fill(rndm);
    error->Fill(0.5*(value - rndm)/(value + rndm));
    errorII->Fill((value - rndm)/(value));

  }
  
  TCanvas *c1 = new TCanvas("c1","c1",800,1000);
  c1->Divide(1,3);
  c1->cd(1);
  plot->Draw();
  c1->cd(2);
  error->Draw();
  c1->cd(3);
  errorII->Draw();
  
}
