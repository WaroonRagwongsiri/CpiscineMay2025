cat /etc/passwd  | awk -F':'  '{ print $1 $2 $3 $4 $6 $7 }' | sed '1d'
