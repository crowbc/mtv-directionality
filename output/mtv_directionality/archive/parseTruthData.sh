root -l -q /usr/WS1/mtv/software/ratpac-setup/mtv/output/readMCTruthNeutrons.C > truth.txt
sed -i '1,2d' truth.txt
sed -i '$d; $d' truth.txt
sed 's/\*//g' truth.txt > output.txt
chmod 660 output.txt
mv output.txt truth.txt
