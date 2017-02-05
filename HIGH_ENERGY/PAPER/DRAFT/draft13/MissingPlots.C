void MissingPlots(){
  //  gStyle->SetTitleFontSize(0.095);
  //  gStyle->SetLabelSize(0.0025, "Y");
  //  gStyle->SetLabelSize(0.095, "X");
  gStyle->SetOptStat(kFALSE);
  TFile f("ReadyedPlots.root","read");
  
  TCanvas *c1 = new TCanvas("c1", "c1",2240,45,1200,800);
  gStyle->SetOptFit(1);
  gStyle->SetOptStat(0);
  c1->Range(0,0,1,1);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(2);
  c1->SetFrameBorderMode(0);
  
  // ------------>Primitives in pad: p1
  TPad *p1 = new TPad("p1", "p1",0.0,0.5,1,1);
  p1->Draw();
  p1->cd();
  p1->Range(-0.025,-1.69897,0.225,0.3314868);
  p1->SetFillColor(0);
  p1->SetBorderMode(0);
  p1->SetBorderSize(2);
  //p1->SetLogy();
  p1->SetTopMargin(0.035);
  p1->SetBottomMargin(0.05);
  p1->SetFrameBorderMode(0);
  p1->SetFrameBorderMode(0);
  
  mm2plmm2pepem_2->SetDirectory(0);
  mm2plmm2pepem_2->SetLabelSize(0.095, "X");
  mm2plmm2pepem_2->SetLabelSize(0.095, "Y");
  
  mm2plmm2pepem_2->GetYaxis()->SetTitle("M_{x}^{2}(pe^{+}e^{-}) [GeV^{2}]");
  mm2plmm2pepem_2->GetYaxis()->SetTitleSize(0.095);
  mm2plmm2pepem_2->GetYaxis()->SetTitleOffset(0.63);
  mm2plmm2pepem_2->GetYaxis()->SetRangeUser(-0.005,0.025);

  mm2plmm2pepem_2->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  mm2plmm2pepem_2->GetXaxis()->SetTitleSize(0.05);
  mm2plmm2pepem_2->GetXaxis()->SetTitleOffset(0.8);
  mm2plmm2pepem_2->SetTitle("");
  mm2plmm2pepem_2->Draw("col");
  Int_t yBins = mm2plmm2pepem_2->GetNbinsY();
  Double_t upEdge = mm2plmm2pepem_2->GetYaxis()->GetBinUpEdge(yBins);
  Double_t lowEdge = mm2plmm2pepem_2->GetYaxis()->GetBinLowEdge(0);
  
  TLine *l3 = new TLine(0.07792,-0.005,0.07792,0.025);
  l3->SetLineWidth(7);
  l3->SetLineStyle(5);
  l3->SetLineColor(kOrange);
  l3->Draw("same");

  TLatex *tex = new TLatex(0.045,0.01,"#pi^{0}");
  tex->SetTextColor(kWhite);
  tex->SetTextSize(0.1991525);
  tex->SetLineWidth(2);
  tex->Draw("same");
  
  TLatex *tex2 = new TLatex(0.12,.01,"#pi^{+}#pi^{-}");
  tex2->SetTextColor(kWhite);
  tex2->SetTextSize(0.1991525);
  tex2->SetLineWidth(2);
  tex2->Draw("same");
  
//  //other plot
  c1->cd();
  
  // ------------>Primitives in pad: p2
  p2 = new TPad("p2", "p2",0.0,0,1.0,0.54);
  p2->Draw();
  p2->cd();
  p2->Range(-0.025,-2.19897,0.225,0.30103);
  p2->SetFillColor(0);
  p2->SetBorderMode(0);
  p2->SetBorderSize(2);
  //p2->SetLogy();
  p2->SetTopMargin(0.035);
  p2->SetBottomMargin(0.18);
  p2->SetRightMargin(1.0);

  p2->SetFrameBorderMode(0);
  
  mm2plmm2pepem_cut->SetDirectory(0);
  mm2plmm2pepem_cut->SetLabelSize(0.095, "X");
  mm2plmm2pepem_cut->SetLabelSize(0.095, "Y");
  
  mm2plmm2pepem_cut->GetYaxis()->SetTitle("M_{x}^{2}(pe^{+}e^{-}) [GeV^{2}]");
  mm2plmm2pepem_cut->GetYaxis()->SetTitleSize(0.095);
  mm2plmm2pepem_cut->GetYaxis()->SetTitleOffset(0.65);
  mm2plmm2pepem_cut->GetYaxis()->SetRangeUser(-0.005,0.025);

  mm2plmm2pepem_cut->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  mm2plmm2pepem_cut->GetXaxis()->SetTitleSize(0.095);
  mm2plmm2pepem_cut->GetXaxis()->SetTitleOffset(0.8);
  mm2plmm2pepem_cut->SetTitle("");
  mm2plmm2pepem_cut->Draw("col");

  l3->Draw("same");
  tex->Draw("same");
  tex2->Draw("same");

  TCanvas *c2 = new TCanvas("c2", "c2",2240,45,1200,800);

  
  c2->cd();
  mm2plmE_2->SetDirectory(0);
  mm2plmE_2->SetLabelSize(0.05, "X");
  mm2plmE_2->SetLabelSize(0.05, "Y");
  mm2plmE_2->SetTitle("");
  mm2plmE_2->GetYaxis()->SetTitle("M_{E}(pe^{+}e^{-}) [GeV]");
  mm2plmE_2->GetYaxis()->SetTitleSize(0.05);
  mm2plmE_2->GetYaxis()->SetTitleOffset(0.85);
  mm2plmE_2->GetYaxis()->SetRangeUser(0.,1.);
  
  mm2plmE_2->GetXaxis()->SetTitle("M_{x}^{2}(p) [GeV^{2}]");
  mm2plmE_2->GetXaxis()->SetTitleSize(0.05);
  mm2plmE_2->GetXaxis()->SetTitleOffset(0.85);


  mm2plmE_2->Draw("col");
  
  TLine *l4 = new TLine(0,0.075,0.2,0.075);
  
  l4->SetLineWidth(7);
  l4->SetLineStyle(5);
  l4->SetLineColor(kOrange);
  l4->Draw("same");
  
  l3 = new TLine(0.07792,0.0,0.07792,1.0);
  l3->SetLineWidth(7);
  l3->SetLineStyle(5);
  l3->SetLineColor(kOrange);
  l3->Draw("same");
  
  TLatex *tex = new TLatex(0.045,0.35,"#pi^{0}");
  tex->SetTextColor(kWhite);
  tex->SetTextSize(0.12);
  tex->SetLineWidth(2);
  tex->Draw("same");
  
  TLatex *tex2 = new TLatex(0.12,.35,"#pi^{+}#pi^{-}");
  tex2->SetTextColor(kWhite);
  tex2->SetTextSize(0.12);
  tex2->SetLineWidth(2);
  tex2->Draw("same");
  
  
//
  /*
  c1->Print("mm2_ME_vs_mxp.pdf");
  c1->Print("mm2_ME_vs_mxp.C");
  c2->Print("mm2_vs_mxp_CUT.pdf");
  c2->Print("mm2_vs_mxp_CUT.C");
 */
  
}
