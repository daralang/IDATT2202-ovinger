#!/usr/bin/env bash
# Bygger obl1.pdf fra obl1.md. Krever pandoc og xelatex:
#   sudo apt install pandoc texlive-xetex texlive-fonts-recommended
set -e
cd "$(dirname "$0")"
pandoc obl1.md -o obl1.pdf \
  --pdf-engine=xelatex \
  -H header.tex \
  -V geometry:margin=2.2cm \
  -V fontsize=11pt \
  -V colorlinks=true \
  -V lang=nb \
  --metadata title="OBL1 – IDATT2202 Operativsystemer"
echo "Skrev obl1.pdf"
