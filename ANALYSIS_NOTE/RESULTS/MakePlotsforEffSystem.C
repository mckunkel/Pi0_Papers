void MakePlotsforEffSystem(){
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0011);

  TFile f("Efficiency_Plots_data_newScheme.root","read");
  hEff_V_III->SetDirectory(0);
  hEff_V_III->SetTitle("Proton Over_Efficiency at -90 < z < -85 cm at 0.75 < P < 1 GeV");
  
  hEff_V_III->SetXTitle("#theta [#circ]");
  
  hEff_V_III->SetYTitle("#phi [#circ]");
  hEff_V_III->GetXaxis()->SetRangeUser(0,60);
  TCanvas *c1 = new TCanvas("c1","c1",1200,800);
  hEff_V_III->Draw("colz");
  
  
  c1->Print("NewEffPlot.pdf");
  
  f.Close();
  TFile f("Eff_Systematic.root","read");
  heff_PercentError->SetDirectory(0);
  TCanvas *c2 = new TCanvas("c2","c2",1200,800);
  TF1 *myfit = new TF1("myfit","gaus", -.1, .1);
  myfit->SetParameter(1, 0.003);

  heff_PercentError->Draw();
  heff_PercentError->Fit("myfit");

  

  
}
