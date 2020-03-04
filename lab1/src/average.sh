#!/bin/bash
count=0
sum=0

for i in $@
do
  let "sum = sum + $i"
  let "count = count + 1"
  shift
done

if ((count == 0)); then
  echo "no parameters"
else
  let "sum = sum / count"
  echo "Count:" $count
  echo "Average:" $sum
fi
