#!/bin/bash

outfile=word_count.dat
if [ -e $outfile ];
then
echo "*** Replacing word_count.dat ***"
rm $outfile
touch $outfile
fi

texcount intro.tex >> $outfile
texcount Experimental_Setup.tex >> $outfile
texcount Event_Selection.tex >> $outfile
texcount Particle_ID.tex >> $outfile
texcount Monte_Carlo.tex >> $outfile
texcount Systematics.tex >> $outfile
texcount Compare_theory.tex >> $outfile
texcount THEORY_COMPARE/handbag.tex >> $outfile
texcount THEORY_COMPARE/CCR_compare.tex >> $outfile
