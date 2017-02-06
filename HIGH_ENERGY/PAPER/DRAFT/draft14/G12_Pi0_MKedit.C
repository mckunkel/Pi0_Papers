
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
  CBShape(hdata_pi0,0.0,0.1,0.018,0.005,-1.,4.,3.5,0);
  //CBAlternative(hdata_pi0,0.0,0.1,0.018,0.001,1.0,2.5,0);

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
  MxP->Print("G12_Pi0_thesis.pdf");
  TFile fout("MissingEnergyPlots.root","update");
  hdata_pi0->Write();
  fout.Close();
}

void G12_Pi0_MKedit(){
  
  Make_Plot();
  
}
