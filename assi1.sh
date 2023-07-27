echo "1. Create database \n2. Delete record \n3. Insert entry \n4. Delete database \n5. Display database \n6. Modify database\n7. to get avg marks of student \nPress any key to exit"
read ch
while true
do 
case "$ch" in 
1)echo "Roll No.|Name|Maths|English|Science|City" | cat > stud.db;;
2)echo "Enter Name of the student"
	read patt
	touch temp.db
	grep -v "$patt" stud.db  > temp.db
	rm stud.db
	mv temp.db stud.db;;
3)echo "Enter student details in the following format: \n<Roll no.> <Name> <Maths marks> <English marks> <Science marks> <City>"
	read det
	echo $det | cat >> stud.db ;;
4)rm stud.db
	echo "Roll No.|Name|Maths|English|Science|City" | cat > stud.db;;
5)cat stud.db;;
6)echo "Enter Name of the student"
	read patt
	touch temp.db
	grep -v "$patt" stud.db  > temp.db
	rm stud.db
	mv temp.db stud.db
	echo "Enter modified details in the following format: \n<Roll no.> <Name> <Maths marks> <English marks> <Science marks> <City>"
	read det
	echo $det | cat >> stud.db ;;
7)echo "Enter Name of the student"
	read patt
	grep "$patt" stud.db > avg.txt
	m1= cut -f3 -d " " avg.txt
	m2= cut -f4 -d " " avg.txt
	m3= cut -f5 -d " " avg.txt
	echo $m1+$m2+$m3 | bc;;
*)echo "Bye:)"
exit;;
esac
echo "1. Create database \n2. Delete record \n3. Insert entry \n4. Delete database \n5. Display database \n6. Modify \nPress any key to exit"
read ch
done
