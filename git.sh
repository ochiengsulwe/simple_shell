#!/bin/bash
clear
echo "Enter file to push"
read FILE
echo "Enter commit message"
read COMMIT

git add $FILE
git commit -m "$COMMIT"
git push
