mul() {
  expr $1 \* $2
}

main() {
  i=3
  j=2
  k=`mul $i $j`
  if [ $k -gt 5 ] ; then
    echo ">5"
  else
    echo "<=5"
  fi
}

main
