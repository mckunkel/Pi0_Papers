
void Make_Plot(){
  //gSystem->Load("/Volumes/Mac_Storage/Work_Codes/GIT_HUB/ROOT_Fitters/CBShape.C");
  gSystem->Load("/Users/michaelkunkel/WORK/GIT_HUB/ROOT_Fitters/CBShape.C");
  //gSystem->Load("/Users/michaelkunkel/WORK/GIT_HUB/ROOT_Fitters/CBAlternative.C");

  
  //=========Macro generated from canvas: MxP/MxP
  //=========  (Fri Jul 18 03:02:15 2014) by ROOT version5.34/10
  gStyle->SetOptFit(11);
  gStyle->SetOptStat(0);
  gStyle->SetPadLeftMargin(0.135);
  gStyle->SetPadRightMargin(0.025);
//  gStyle->SetTitleFontSize(0.095);
//  gStyle->SetLabelSize(0.05, "Y");
//  gStyle->SetLabelSize(0.05, "X");
  
  TCanvas *MxP = new TCanvas("MxP", "MxP",0,0,1400,1000);
  MxP->Range(0,0,1,1);
  MxP->SetFillColor(0);
  MxP->SetBorderMode(0);
  MxP->SetBorderSize(2);
  MxP->SetFrameBorderMode(0);
  MxP->SetTopMargin(0.015);
  MxP->SetBottomMargin(0.11);

  
  TH1D *hdata_pi0 = new TH1D("hdata_pi0","G12 #pi^{0}",50,0,0.1);
  hdata_pi0->SetBinContent(1,343);
  hdata_pi0->SetBinContent(2,1519);
  hdata_pi0->SetBinContent(3,3476);
  hdata_pi0->SetBinContent(4,6842);
  hdata_pi0->SetBinContent(5,13174);
  hdata_pi0->SetBinContent(6,21330);
  hdata_pi0->SetBinContent(7,32207);
  hdata_pi0->SetBinContent(8,46047);
  hdata_pi0->SetBinContent(9,59869);
  hdata_pi0->SetBinContent(10,59432);
  hdata_pi0->SetBinContent(11,46698);
  hdata_pi0->SetBinContent(12,32772);
  hdata_pi0->SetBinContent(13,22662);
  hdata_pi0->SetBinContent(14,16651);
  hdata_pi0->SetBinContent(15,11802);
  hdata_pi0->SetBinContent(16,8437);
  hdata_pi0->SetBinContent(17,6058);
  hdata_pi0->SetBinContent(18,4416);
  hdata_pi0->SetBinContent(19,3300);
  hdata_pi0->SetBinContent(20,2564);
  hdata_pi0->SetBinContent(21,1935);
  hdata_pi0->SetBinContent(22,1529);
  hdata_pi0->SetBinContent(23,1134);
  hdata_pi0->SetBinContent(24,946);
  hdata_pi0->SetBinContent(25,764);
  hdata_pi0->SetBinContent(26,590);
  hdata_pi0->SetBinContent(27,486);
  hdata_pi0->SetBinContent(28,410);
  hdata_pi0->SetBinContent(29,336);
  hdata_pi0->SetBinContent(30,282);
  hdata_pi0->SetBinContent(31,242);
  hdata_pi0->SetBinContent(32,200);
  hdata_pi0->SetBinContent(33,178);
  hdata_pi0->SetBinContent(34,151);
  hdata_pi0->SetBinContent(35,135);
  hdata_pi0->SetBinContent(36,98);
  hdata_pi0->SetBinContent(37,93);
  hdata_pi0->SetBinContent(38,81);
  hdata_pi0->SetBinContent(39,71);
  hdata_pi0->SetBinContent(40,70);
  hdata_pi0->SetBinContent(41,58);
  hdata_pi0->SetBinContent(42,52);
  hdata_pi0->SetBinContent(43,53);
  hdata_pi0->SetBinContent(44,43);
  hdata_pi0->SetBinContent(45,38);
  hdata_pi0->SetBinContent(46,33);
  hdata_pi0->SetBinContent(47,37);
  hdata_pi0->SetBinContent(48,20);
  hdata_pi0->SetBinContent(49,20);
  hdata_pi0->SetBinContent(50,21);
  hdata_pi0->SetBinContent(51,478);
  hdata_pi0->SetEntries(410183);
  
  hdata_pi0->SetLabelSize(0.045, "X");
  hdata_pi0->SetLabelSize(0.045, "Y");
  
  Int_t ci;   // for color index setting
  ci = TColor::GetColor("#000099");
  hdata_pi0->SetLineColor(ci);
  hdata_pi0->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  hdata_pi0->GetXaxis()->SetTitleSize(0.05);
  hdata_pi0->GetXaxis()->SetTitleOffset(0.975);
  hdata_pi0->GetXaxis()->SetRangeUser(0,0.08);

  hdata_pi0->GetXaxis()->CenterTitle(true);
  
  hdata_pi0->GetYaxis()->SetTitle("Entries / 0.002 [GeV^{2}]");
  hdata_pi0->GetYaxis()->SetTitleSize(0.05);
  hdata_pi0->GetYaxis()->SetTitleOffset(1.45);
  hdata_pi0->GetYaxis()->CenterTitle(true);

  hdata_pi0->SetMarkerStyle(20);
  hdata_pi0->SetMarkerSize(1.75);

  hdata_pi0->SetTitle("");
  
  hdata_pi0->SetLineWidth(2.);
  cout<<hdata_pi0->GetEntries();
  
  hdata_pi0->Draw("ep");
  //CBShape(hdata_pi0,0.0,0.1,0.018,0.005,-1.,4.,3.5,0);
  //CBAlternative(hdata_pi0,0.0,0.1,0.018,0.001,1.0,2.5,0);
  CBShape(hdata_pi0,0.0,0.1,0.018,0.005,-1.,4.,3.5,0);

  TLine *l3 = new TLine(1.78646e-02 - 2.5*4.90459e-03 ,0.00,1.78646e-02 - 2.5*4.90459e-03,6.3e+04);
  l3->SetLineWidth(5);
  l3->SetLineStyle(5);
  l3->SetLineColor(kRed);
  l3->Draw("same");
  TLine *l4 = new TLine(1.78646e-02 + 3.5*4.90459e-03 ,0.00,1.78646e-02 + 3.5*4.90459e-03,6.3e+04);
  l4->SetLineWidth(5);
  l4->SetLineStyle(5);
  l4->SetLineColor(kRed);
  l4->Draw("same");
  
  MxP->Modified();
  MxP->cd();
  MxP->SetSelected(MxP);
//  MxP->Print("G12_Pi0_thesis.pdf");
//  TFile fout("MissingEnergyPlots.root","update");
//  hdata_pi0->Write();
//  fout.Close();
  
  TH1D *hbackground_pi0 = new TH1D("hbackground_pi0","",50,0,0.1);
  TH1D *hratio_pi0 = new TH1D("hratio_pi0","",50,0,0.1);
  TH1D *hBckratio_pi0 = new TH1D("hBckratio_pi0","",50,0,0.1);

  for (Int_t i = 1; i<=hbackground_pi0->GetNbinsX(); i++) {
    //cout<<hbackground_pi0->GetBinCenter(i)<<" backFcn" <<backFcn->Eval(hbackground_pi0->GetBinCenter(i))<<endl;
    Double_t bckAti = backFcn->Eval(hbackground_pi0->GetBinCenter(i));
    Double_t sigAti = signalFcn->Eval(hbackground_pi0->GetBinCenter(i));
    
    Double_t bckErrAti = backFcn->Eval(hbackground_pi0->GetBinCenter(i));
    Double_t sigErrAti = signalFcn->Eval(hbackground_pi0->GetBinCenter(i));
    

    hbackground_pi0->SetBinContent(i,bckAti);
    hbackground_pi0->SetBinError(i,sqrt(bckAti));

    Double_t ratioBinContent = sigAti/(sigAti+ bckAti);
    Double_t ratioBinError = sigAti/(sigAti+ bckAti) * sqrt(1./sigAti + 1./(sigAti + bckAti));

    hratio_pi0->SetBinContent(i,sigAti/(sigAti+ bckAti));
    hratio_pi0->SetBinError(i,ratioBinError);

    Double_t ratioBckBinError = bckAti/(sigAti+ bckAti) * sqrt(1./bckAti + 1./(sigAti + bckAti));

    hBckratio_pi0->SetBinContent(i,bckAti/(sigAti+ bckAti));
    hBckratio_pi0->SetBinError(i,ratioBckBinError);

  }
  //double x[1] = { 0.01 };
 // double err[1];  // error on the function at point x0
  
  //r->GetConfidenceIntervals(1, 1, 1, x, err, 0.683, false);
  //cout << " function value at " << x[0] << " = " << fitter->Eval(x[0]) << " +/- " << err[0] << endl;



//MK's idea
  TCanvas *c1 = new TCanvas("c1", "c1",2240,45,1200,800);
  c1->Range(0,0,1,1);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(2);
  c1->SetFrameBorderMode(0);
  
  // ------------>Primitives in pad: p1
  TPad *p1 = new TPad("p1", "p1",0.0,0.2,1,1);
  p1->Draw();
  p1->cd();
  p1->Range(-0.025,-1.69897,0.225,0.3314868);
  p1->SetFillColor(0);
  p1->SetBorderMode(0);
  p1->SetBorderSize(2);
  p1->SetTopMargin(0.035);
  p1->SetBottomMargin(0.05);
  p1->SetFrameBorderMode(0);
  p1->SetFrameBorderMode(0);

  TH1D* myHisto = new TH1D(*hdata_pi0);
  myHisto->GetXaxis()->SetLabelOffset(999);
  myHisto->GetXaxis()->SetLabelSize(0);
  CBShape(myHisto,0.0,0.1,0.018,0.005,-1.,4.,3.5,0);

  //myHisto->Draw("ep");

  //  //other plot
  c1->cd();
  
  // ------------>Primitives in pad: p2
  p2 = new TPad("p2", "p2",0.0,0.0,1.0,0.225);
  p2->Draw();
  p2->cd();
  p2->SetTickx();
  p2->Range(-0.025,-1.69897,0.225,0.3314868);
  p2->SetFillColor(0);
  p2->SetBorderMode(0);
  p2->SetBorderSize(2);
  p2->SetTopMargin(0.035);
  p2->SetBottomMargin(0.35);
  //p2->SetLeftMargin(1.0);
  p2->SetFrameBorderMode(0);
  
  hratio_pi0->SetLineColor(ci);
  hratio_pi0->SetLabelSize(0.175, "X");
  hratio_pi0->SetLabelSize(0.175, "Y");
  hratio_pi0->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  hratio_pi0->GetXaxis()->SetTitleSize(0.18);
  hratio_pi0->GetXaxis()->SetTitleOffset(0.88);
  hratio_pi0->GetXaxis()->CenterTitle(true);
  hratio_pi0->GetXaxis()->SetRangeUser(0,0.08);

  hratio_pi0->GetYaxis()->SetTitle("#frac{Sig}{Sig+Bkgrnd}");// / 0.002 [GeV^{2}]
  hratio_pi0->GetYaxis()->SetTitleSize(0.135);
  hratio_pi0->GetYaxis()->SetTitleOffset(0.4);
  hratio_pi0->GetYaxis()->SetRangeUser(0.25,1.17);
  hratio_pi0->GetYaxis()->SetNdivisions(6);

  hratio_pi0->GetYaxis()->CenterTitle(true);
  hratio_pi0->SetMarkerStyle(20);
  hratio_pi0->SetMarkerSize(1.75);
  hratio_pi0->SetTitle("");
  hratio_pi0->SetLineWidth(2.);
  
  
  hratio_pi0->Draw("ep");
  TArrow *ar4 = new TArrow(1.78646e-02 - 2.5*4.90459e-03, 1.09, 1.78646e-02 + 3.5*4.90459e-03, 1.08, 0.015,"<|>");
  ar4->SetLineWidth(4);
  ar4->SetLineColor(kRed);
  ar4->SetFillColor(kRed);
  ar4->Draw();
  
 
  
//back/sig_bck
  
  //MK's idea
  TCanvas *cBck = new TCanvas("cBck", "cBck",2240,45,1200,800);
  cBck->Range(0,0,1,1);
  cBck->SetFillColor(0);
  cBck->SetBorderMode(0);
  cBck->SetBorderSize(2);
  cBck->SetFrameBorderMode(0);
  
  // ------------>Primitives in pad: p1
  TPad *p1bck = new TPad("p1bck", "p1bck",0.0,0.2,1,1);
  p1bck->Draw();
  p1bck->cd();
  p1bck->Range(-0.025,-1.69897,0.225,0.3314868);
  p1bck->SetFillColor(0);
  p1bck->SetBorderMode(0);
  p1bck->SetBorderSize(2);
  p1bck->SetTopMargin(0.035);
  p1bck->SetBottomMargin(0.05);
  p1bck->SetFrameBorderMode(0);
  p1bck->SetFrameBorderMode(0);
  
  TH1D* myHisto4Bck = new TH1D(*hdata_pi0);
  myHisto4Bck->GetXaxis()->SetLabelOffset(999);
  myHisto4Bck->GetXaxis()->SetLabelSize(0);
  CBShape(myHisto4Bck,0.0,0.1,0.018,0.005,-1.,4.,3.5,0);
  
  //  //other plot
  cBck->cd();
  
  // ------------>Primitives in pad: p2
  p2bck = new TPad("p2bck", "p2bck",0.0,0.0,1.0,0.225);
  p2bck->Draw();
  p2bck->cd();
  p2bck->SetTickx();
  p2bck->Range(-0.025,-1.69897,0.225,0.3314868);
  p2bck->SetFillColor(0);
  p2bck->SetBorderMode(0);
  p2bck->SetBorderSize(2);
  p2bck->SetTopMargin(0.035);
  p2bck->SetBottomMargin(0.42);
  //p2->SetLeftMargin(1.0);
  p2bck->SetFrameBorderMode(0);
  
  hBckratio_pi0->SetLineColor(ci);
  hBckratio_pi0->SetLabelSize(0.175, "X");
  hBckratio_pi0->SetLabelSize(0.175, "Y");
  hBckratio_pi0->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  hBckratio_pi0->GetXaxis()->SetTitleSize(0.22);
  hBckratio_pi0->GetXaxis()->SetTitleOffset(0.86);
  hBckratio_pi0->GetXaxis()->CenterTitle(true);
  hBckratio_pi0->GetXaxis()->SetRangeUser(0,0.08);

  hBckratio_pi0->GetYaxis()->SetTitle("#frac{Bkgrnd}{Sig+Bkgrnd}");// / 0.002 [GeV^{2}]
  hBckratio_pi0->GetYaxis()->SetTitleSize(0.135);
  hBckratio_pi0->GetYaxis()->SetTitleOffset(0.4);
  hBckratio_pi0->GetYaxis()->SetRangeUser(0.0,0.075);
  hBckratio_pi0->GetYaxis()->SetNdivisions(4);
  
  hBckratio_pi0->GetYaxis()->CenterTitle(true);
  hBckratio_pi0->SetMarkerStyle(20);
  hBckratio_pi0->SetMarkerSize(1.75);
  hBckratio_pi0->SetTitle("");
  hBckratio_pi0->SetLineWidth(2.);
  
  
  hBckratio_pi0->Draw("ep");
  TArrow *arbck = new TArrow(1.78646e-02 - 2.5*4.90459e-03, 0.06, 1.78646e-02 + 3.5*4.90459e-03, 0.06, 0.015,"<|>");
  arbck->SetLineWidth(4);
  arbck->SetLineColor(kRed);
  arbck->SetFillColor(kRed);
  arbck->Draw();
  
  
  
  //Jims Idea
  TCanvas *cJim = new TCanvas("cJim", "cJim",2240,45,1200,800);
  cJim->Range(0,0,1,1);
  cJim->SetFillColor(0);
  cJim->SetBorderMode(0);
  cJim->SetBorderSize(2);
  cJim->SetFrameBorderMode(0);
  
  // ------------>Primitives in pad: p1
  TPad *p1Jim = new TPad("p1Jim", "p1Jim",0.0,0.2,1,1);
  p1Jim->Draw();
  p1Jim->cd();
  p1Jim->Range(-0.025,-1.69897,0.225,0.3314868);
  p1Jim->SetFillColor(0);
  p1Jim->SetBorderMode(0);
  p1Jim->SetBorderSize(2);
  p1Jim->SetTopMargin(0.035);
  p1Jim->SetBottomMargin(0.05);
  p1Jim->SetFrameBorderMode(0);
  p1Jim->SetFrameBorderMode(0);
  
  TH1D* myHisto2 = new TH1D(*hdata_pi0);
  myHisto2->GetXaxis()->SetLabelOffset(999);
  myHisto2->GetXaxis()->SetLabelSize(0);
  CBShape(myHisto2,0.0,0.1,0.018,0.005,-1.,4.,3.5,0);

  cJim->cd();
  // ------------>Primitives in pad: p2
  p2Jim = new TPad("p2Jim", "p2Jim",0.0,0.0,1.0,0.225);
  p2Jim->Draw();
  p2Jim->cd();
  p2Jim->SetTickx();
  p2Jim->Range(-0.025,-1.69897,0.225,0.3314868);
  p2Jim->SetFillColor(0);
  p2Jim->SetBorderMode(0);
  p2Jim->SetBorderSize(2);
  p2Jim->SetTopMargin(0.005);
  p2Jim->SetBottomMargin(0.35);
  //p2->SetLeftMargin(1.0);
  p2Jim->SetFrameBorderMode(0);

  hbackground_pi0->SetLineColor(ci);
  hbackground_pi0->SetLabelSize(0.175, "X");
  hbackground_pi0->SetLabelSize(0.175, "Y");
  hbackground_pi0->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  hbackground_pi0->GetXaxis()->SetTitleSize(0.18);
  hbackground_pi0->GetXaxis()->SetTitleOffset(0.88);
  hbackground_pi0->GetXaxis()->CenterTitle(true);
  hbackground_pi0->GetXaxis()->SetRangeUser(0,0.08);
  //hbackground_pi0->GetYaxis()->SetTitle("Background Entries");
  hbackground_pi0->GetYaxis()->SetTitle("#splitline{Background}{   Entries}");
  hbackground_pi0->GetYaxis()->SetTitleSize(0.135);
  hbackground_pi0->GetYaxis()->SetTitleOffset(.5);
  hbackground_pi0->GetYaxis()->SetRangeUser(0,475);
  hbackground_pi0->GetYaxis()->SetNdivisions(4);

  hbackground_pi0->GetYaxis()->CenterTitle(true);
  hbackground_pi0->SetMarkerStyle(20);
  hbackground_pi0->SetMarkerSize(1.75);
  hbackground_pi0->SetTitle("");
  hbackground_pi0->SetLineWidth(2.);
  TArrow *ar3 = new TArrow(1.78646e-02 - 2.5*4.90459e-03, 425, 1.78646e-02 + 3.5*4.90459e-03, 425, 0.015,"<|>");
  ar3->SetLineWidth(4);
  ar3->SetLineColor(kRed);
  ar3->SetFillColor(kRed);
  hbackground_pi0->Draw();
  ar3->Draw();
  
  c1->Print("MKIdea.pdf");
  cJim->Print("JimIdea.pdf");
  cBck->Print("G12_Pi0_wBck.pdf");
}

void G12_Pi0_MKedit(){
  
  Make_Plot();
  
}
