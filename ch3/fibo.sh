#!/bin/bash
a=0
b=1
echo -n "$a $b "
for ((i=2; i<10; i++)); do
    let c=a+b
    echo -n "$c "
    a=$b
    b=$c
done
echo
