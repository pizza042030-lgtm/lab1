#!/bin/bash
echo "=== for문: 2단 ==="
for i in 1 2 3 4 5 6 7 8 9; do
    echo "2 x $i = $((2*i))"
done

echo "=== while문: 3단 ==="
i=1
while [ $i -le 9 ]; do
    echo "3 x $i = $((3*i))"
    i=$((i+1))
done

echo "=== until문: 4단 ==="
i=1
until [ $i -gt 9 ]; do
    echo "4 x $i = $((4*i))"
    i=$((i+1))
done
