import mysql.connector
#PROGRAM FOR DATABASE CONNECTIVITY
def createDB():
    db=mysql.connector.connect(host='localhost',user='root',password='root')
    myCursor=db.cursor()
##    myCursor.execute("drop database if exists ReportCard")
    myCursor.execute("create database if not exists ReportCard")
    createTable()
def createTable():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    myCursor.execute("create table if not exists School \
                    (SchoolCode int primary key,\
                    AffilitedCode int unique,\
                    SchName varchar(30),\
                    address varchar(100),\
                    Session char(7))")
##    myCursor.execute("Create Table if not exists Session(SessionID int,\
##                    Session varchar(7))")
    myCursor.execute("Create Table if not exists Subject(SubCode char(5) primary key, SubName varchar(30))")
    myCursor.execute("Create Table if not exists Term(TermID int,Term char(3))")
    myCursor.execute("Create Table if not exists Student(ScholarNo int,\
                    Name varchar(15), Gender char(1),Class char(3),Sec char(1),\
                    Dob date, FName Varchar(15), MName varchar(15),House varchar(10),\
                    Contact varchar(10),AdharNo varchar(15), Stream varchar(12),SchoolCode int)")
    myCursor.execute("Create Table if not exists Marks(ScholarNo int,Term char(3),subCode char(5),\
                    TheoryMx double,TheoryObt double, PractMx double, PractObt double,\
                    TotalMx double, TotalOnt double,Stream varchar(12),SchoolCode int)")
def newSchool():
    showSchool()
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    myCursor.execute("Select * from School")
    SchCode=70763
    AffCode=2130837
    for x in myCursor:
        SchCode=x[0]
        AffCode=x[1]
    SchCode+=1
    AffCode+=1
    print("School Code :",SchCode)
    print("Affilitiation Code :",AffCode)
    Name=input("Enter School Name :").upper()
    add=input("Enter Address :").upper()
    sesID=input("Enter Session").upper()
    
    rec=(SchCode,AffCode,Name,add,sesID)
    myCursor.execute("Insert into school value(%s,%s,%s,%s,%s)",rec)
    db.commit()
    print(myCursor.rowcount," Record Saved.")
#******************* Edit School *************************
def editSchool():
    showSchool()
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    SchCode=input("Search School Code :")
    myCursor.execute("Select * from School where SchoolCode=%s",(SchCode,))
    for i in myCursor:
            i=list(i)
            print(i[0],"->",SchCode)
            
            if i[0]==int(SchCode):
                
                ch=input("Change School Name(Y/N): ")
                if ch=='y' or ch=='Y':
                    i[2]=input("Enter School Name: ")
                    i[2]=i[2].upper()
                
                ch=input("Change Address (Y/N): ")
                if ch=='y' or ch=='Y':
                    i[3]=input("Enter Address : ").upper

                ch=input("Change Session (Y/N): ")
                if ch=='y' or ch=='Y':
                    i[4]=input("Enter Session : ")
                    i[4]=i[4].upper()
                cmd="UPDATE SCHOOL SET schName=%s, address=%s, session=%s WHERE schoolCode=%s"
                val=(i[2],i[3],i[4],i[0])
                myCursor.execute(cmd,val)
                db.commit()
                print(myCursor.rowcount," Record updated.")

                break
            else:
               print("Record Not Found")
#******************* Delete School *************************
def delSchool():
    
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    SchCode=input("Search School Code :")
    myCursor.execute("Select * from School where SchoolCode=%s",(SchCode,))
    for i in myCursor:
            print("="*100)
            print("SchoolCode AffilatedCode  School Name\t\t\t\tAddress\t\t\t\t\tSession")
            print('='*100)
            for x in myCursor:
                print(x[0],"\t",x[1],"\t",x[2],"\t",x[3],"\t",x[4])
            print('-'*180)
    ch=input("Do you want to confirm delete record(s)").upper()
    if ch=='Y' or ch=='y':
        myCursor.execute("Delete  from School where SchoolCode=%s",(SchCode,))
        db.commit()
        print(myCursor.rowcount," Record deleted.")

    
#*********************showSchool***************************
def showSchool():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    myCursor.execute("Select * from School")
    print("="*100)
    print("SchoolCode AffilatedCode  School Name\t\t\t\tAddress\t\t\t\t\tSession")
    print('='*100)
    for x in myCursor:
        print(x[0],"\t",x[1],"\t",x[2],"\t",x[3],"\t",x[4])
    print('-'*180)

def newSubject():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    showSubject()
    while True:        
        ch=input("Do you want to add more subject (Y/N): ").upper()
        if(ch=='Y' or ch=='y'):
            subCode=input("Enter Subject Code : ")
            subName=input("Enter Subject Name : ").upper()
            rec=(subCode,subName)
            myCursor.execute("Insert into Subject value(%s,%s)",rec)
            db.commit()
            print(myCursor.rowcount," Record Saved.")
        else:
            break

def editSubject():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    subCode=input("Enter Subject code :")
    sql="Select * from Subject where subCode=%s"
    myCursor.execute(sql,(subCode,))
    for i in myCursor:
        i=list(i)
        if i[0]==subCode:
            ch=input("Change Subject Name(Y/N): ")
            if ch=='y' or ch=='Y':
                i[1]=input("Enter Subject Name: ")
                i[1]=i[1].upper()
            cmd="UPDATE Subject SET SubName=%s WHERE subCode =%s"
            val=(i[1],i[0])
            myCursor.execute(cmd,val)
            db.commit()
            print("Subject Updated")
            showSubject()
            break
    else:
        print("Record Not Found")

def showSubject():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    query="select * from Subject"
    myCursor.execute(query)
    print("\t","*"*60)
    print("\t\tSubject Code\t\t\tSubject Name")
    print("\t","*"*60)
    for x in myCursor:
        print("\t\t",x[0],"\t\t\t\t",x[1])    
    print("\t","*"*60)

def newStudent():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    myCursor.execute("Select * from Student")
    SchNo=100
    for x in myCursor:
        SchNo=x[0]
    SchNo+=1
    print("Scholar Number :",SchNo)
    stName=input("Student Name :").upper()
    Gender=input("Gender (M/F/T): ").upper()
    Class=input("Class : ").upper()
    Sec=input("Section : ").upper()
    Dob=input("Date of Birth (YYYY-MM-DD):")
    FName=input("Father's Name : ").upper()
    MName=input("Mother's Name : ").upper()
    House=input("House : ").upper()
    Contact=input("Mobile Number : ")
    AdharNo=input("Adhar Number : ")
    Stream=input("Stream : Scicence/Commerce").upper()
    SchoolCode=input("Enter School Code :")
    rec=(SchNo,stName,Gender,Class,Sec,Dob,FName,MName,House,Contact,AdharNo,Stream,SchoolCode)
    print("Insert into Student value(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)"%rec)
    myCursor.execute("Insert into Student value(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)",rec)
    db.commit()
    print(myCursor.rowcount," Record Saved.")
    showStudent()

def editStudent():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    SchNo=input("Enter the scholar no whose details to be changed : ")
    cmd="SELECT * FROM Student WHERE ScholarNo=%s"
    myCursor.execute(cmd,(SchNo,))
    for i in myCursor:
        i=list(i)
        if i[0]==int(SchNo):
            ch=input("Change Name(Y/N): ")
            if ch=='y' or ch=='Y':
                i[1]=input("Enter Name: ")
                i[1]=i[1].upper()

            ch=input("Change Gender (Y/N): ")
            if ch=='y' or ch=='Y':
                i[2]=input("Enter Gender : ").upper()

            ch=input("Change Class (Y/N): ")
            if ch=='y' or ch=='Y':
                i[3]=input("Enter Class : ")
                i[3]=i[3].upper()

            ch=input("Change Section(Y/N): ")
            if ch=='y' or ch=='Y':
                i[4]=input("Enter Section: ")
                i[4]=i[4].upper()

            ch=input("Change Date of Birth (Y/N): ")
            if ch=='y' or ch=='Y':
                i[5]=input("Enter Date of Birth: ")
                i[5]=i[5].upper()

            ch=input("Change Father's Name(Y/N): ")
            if ch=='y' or ch=='Y':
                i[6]=input("Enter Father's Name: ")
                i[6]=i[6].upper()

            ch=input("Change Mother's Name (Y/N): ")
            if ch=='y' or ch=='Y':
                i[7]=input("Enter Mother's Name : ").upper()

            ch=input("Change House (Y/N): ")
            if ch=='y' or ch=='Y':
                i[8]=input("Enter House : ")
                i[8]=i[8].upper()

            ch=input("Change Contact (Y/N): ")
            if ch=='y' or ch=='Y':
                i[9]=input("Enter Contact : ")

            ch=input("Change Adhar No. (Y/N): ")
            if ch=='y' or ch=='Y':
                i[10]=input("Enter Adhar No. : ")
                i[10]=i[10].upper()

            ch=input("Change Stream (Y/N): ")
            if ch=='y' or ch=='Y':
                i[11]=input("Enter Stream : ")
                i[11]=i[11].upper()

            ch=input("Change School Code (Y/N): ")
            if ch=='y' or ch=='Y':
                i[12]=input("Enter School Code: ")
                i[12]=i[12].upper()
            sql="UPDATE Student SET \
                    Name=%s, Gender=%s,Class=%s,Sec=%s,\
                    Dob=%s, FName=%s, MName=%s,House=%s,\
                    Contact =%s,AdharNo=%s, Stream=%s,SchoolCode=%s\
                    WHERE ScholarNo=%s"
            val=(i[1],i[2],i[3],i[4],i[5],i[6],i[7],i[8],i[9],i[10],i[11],i[12],i[0])
            myCursor.execute(sql,val)
            db.commit()
            print("Student Updated")
            break
    else:
        print("Record Not Found")

    showStudent()


def showStudent():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    myCursor.execute("Select * from Student")
    print("="*100)
    print("Scholar  Student's Name      Sex      Classs          Date of Birth      Father     Mother  House        Mobile           Adhar No      Stream      SchoolCode")
    print("="*100)
    for x in myCursor:
        print(x[0],"    ",x[1],"\t",x[2],"\t",x[3],"-",x[4],"\t",x[5],"\t",x[6],"\t",x[7],"\t",x[8],"\t",x[9],'  ',x[10],'\t',x[11],'   ',x[12])
    print("-"*180)    
def newMarks():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    SchNo=input("Scholar Number  :")
    myCursor.execute("Select * from Student Where ScholarNo=%s ", (SchNo,))
    print("*"*80)
    for x in myCursor:
        print("Student Name                      : ",x[1])
        print("Gender (M/F/T)                    : ",x[2])
        print("Class                                    : ",x[3])
        print("Section                                 : ",x[4])
        print("Date of Birth (YYYY-MM-DD) :",x[5])
        print("Father's Name                      : ",x[6])
        print("Mother's Name                     : ",x[7])
        print("Stream                                 : ",x[11])
        Stream=x[11]
    print("*"*80)
##    ch='Y'
##    n=int(input("How many numbered to be entered.. : "))
##    for i in range(n):
##        print("Subject    :",i+1)
    Term=input("Enter Term (I,II,III) : ").upper()
##    myCursor.execute("Select * from Subject")
    subCode=input("Enter Subject Code : ")
    TheoryMx=int(input("Maximum Marks : "))
    TheoryObt=int(input("Marks Obtained : "))
    PractMx=int(input("Practical/Internal Marks :"))
    PractObt=int(input("Practical/Internal Marks Obtained :  ")) 
    TotalMx=TheoryMx+PractMx
    print("Total Maximum Marks :",TotalMx)
    TotalObt=TheoryObt+PractObt
    print("Total Marks Obtained :",TotalObt)
    SchoolCode =input("School Code :")
    rec=(SchNo,Term,subCode, TheoryMx,TheoryObt,PractMx,PractObt,TotalMx,TotalObt,Stream,SchoolCode)
    sql="Insert into Marks values(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)"
    print(sql %rec)
    myCursor.execute(sql,rec)
    db.commit()
    print(myCursor.rowcount," Record Saved.")

def showMarks():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    s=input("Enter School Code :")
    sql="Select * From School where SchoolCode=%s"
    myCursor.execute(sql,(s,))
    SchNo=input("Scholar Number  :")
    term=input("Which term show marks ? ").upper()
    print("*"*80)
    for x in myCursor:        
        print("\t\t\t\t\t",x[2])
        print("\t\t\t\t\t",x[3])
        print("\t\tAffiliated Code :",x[1],"\t\tSchool Code: ",x[0],"\t\tSession : ",x[4])
    print("*"*80)
    print("\t\t")
    print("="*75)
    myCursor.execute("Select * from Student Where ScholarNo=%s ", (SchNo,))    
    for x in myCursor:
            print("\tScholar Number                   : ",x[0])
            print("\tStudent Name                      : ",x[1], "\t\t\tGender (M/F/T)                    : ",x[2])
            print("\tClass                                    : ",x[3],"-",x[4],"\t\t\tDate of Birth            :",x[5])
            print("\tFather's Name                      : ",x[6],"\tMother's Name                      : ",x[7])
            print("\tHouse                                   : ",x[8],"\t\t\tStream                                 : ",x[11])
    sql="select s.SubName,M.Term,M.TheoryMx,M.TheoryObt,M.PractMx,M.PractObt,M.TotalMx,M.TotalOnt, Sc.SchoolCode\
            from subject S,marks M,School Sc where m.scholarno=%s and S.subcode=M.subCode and Sc.SchoolCode =%s and M.Term=%s"
    rec=(SchNo,s,term)
    myCursor.execute(sql, rec)
    print("="*75)
    print()
    for y in myCursor:
        print("\tTerm : ",y[1])
        print("\t\t\t\tTheory (",y[2],")\tPractical(",y[4],")\tTotal(",y[6],")")
        print("\t\t\t",'-'*60)
        for x in myCursor:            
            print("\t\t",x[0],"\t\t",x[3],"\t\t",x[5],"\t\t",x[7])
    print("="*75)
    print()
#************************Delete Marks **********************
def delMarks():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    s=input("Enter School Code :")
    sql="Select * From School where SchoolCode=%s"
    myCursor.execute(sql,(s,))
    SchNo=input("Scholar Number  :")
    subCode=input("Subject Code : ")
    print("*"*80)
    for x in myCursor:        
        print("\t\t\t\t\t",x[2])
        print("\t\t\t\t\t",x[3])
        print("\t\tAffiliated Code :",x[1],"\t\tSchool Code: ",x[0],"\t\tSession : ",x[4])
    print("*"*80)
    print("\t\t")
    print("="*75)
    myCursor.execute("Select * from Student Where ScholarNo=%s ", (SchNo,))    
    for x in myCursor:
            print("\tScholar Number                   : ",x[0])
            print("\tStudent Name                      : ",x[1], "\t\t\tGender (M/F/T)                    : ",x[2])
            print("\tClass                                    : ",x[3],"-",x[4],"\t\t\tDate of Birth            :",x[5])
            print("\tFather's Name                      : ",x[6],"\tMother's Name                      : ",x[7])
            print("\tHouse                                   : ",x[8],"\t\t\tStream                                 : ",x[11])
    ch=input("Do you want to delete (Y/N)?").upper()
    if(ch=='y' or ch=='Y'):
        sql="Delete from marks where scholarno=%s and subcode=%s and SchoolCode =%s"
        rec=(SchNo,subCode,s)
        print(sql%rec)
        myCursor.execute(sql, rec)
        db.commit()
        print()
#***************Edit Marks*******************
def editMarks():
    db=mysql.connector.connect(host='localhost',user='root',password='root', database="ReportCard")
    myCursor=db.cursor()
    SchNo=input("Scholar Number  : ")
    SchoolCode=input("School Code : ")
    subCode=input("Subject Code : ")
    Term=input("Enter Term (I/II/III): ").upper()
    rec=(SchNo,SchoolCode,subCode,Term)
    sql="Select * from Marks Where ScholarNo=%s and SchoolCode=%s and subCode=%s and Term=%s "
    print(sql%rec)
    myCursor.execute(sql,rec)

    for i in myCursor:
        i=list(i)
        print(i)
        if i[0]==int(SchNo):
            ch=input("Change Term(Y/N): ")
            if ch=='y' or ch=='Y':
                i[1]=input("Enter Term: ")
                i[1]=i[1].upper()

            ch=input("Change subCode (Y/N): ")
            if ch=='y' or ch=='Y':
                i[2]=input("Enter subCode : ")

            ch=input("Change TheoryMx (Y/N): ")
            if ch=='y' or ch=='Y':
                i[3]=input("Enter TheoryMx : ")
                

            ch=input("Change TheoryObt(Y/N): ")
            if ch=='y' or ch=='Y':
                i[4]=input("Enter TheoryObt: ")
                

            ch=input("Change PractMx (Y/N): ")
            if ch=='y' or ch=='Y':
                i[5]=input("Enter PractMx: ")
                

            ch=input("Change PractObt(Y/N): ")
            if ch=='y' or ch=='Y':
                i[6]=input("Enter PractObt: ")
                
            
            i[7]=int(i[3])+int(i[5])
            print(i[7])
            i[8]=int(i[4])+int(i[6])
            print(i[8])
            ch=input("Change Stream (Y/N): ")
            if ch=='y' or ch=='Y':
                i[9]=input("Enter Stream : ").upper()

            ch=input("Change SchoolCode (Y/N): ")
            if ch=='y' or ch=='Y':
                i[10]=input("Enter SchoolCode : ")
                i[10]=i[10].upper()
            
            sql="UPDATE marks SET Term=%s, subCode=%s,TheoryMx=%s,TheoryObt=%s,PractMx=%s, PractObt=%s, TotalMx=%s,TotalOnt=%s, Stream =%s,SchoolCode=%s WHERE ScholarNo=%s  and subCode=%s and Term=%s and SchoolCode=%d"
            val=(i[1],i[2],i[3],i[4],i[5],i[6],i[7],i[8],i[9],i[10],i[0],i[2],i[1],i[10])
            print(sql%val)
            myCursor.execute(sql,val)
            db.commit()
            print("Marks Updated.")
            break
    else:
        print("Record Not Found")

#*******************************************


def menu():
    createDB()
    while True:        
        print("\t\t\t***************************REPORT CARD GENERATION***************************")
        print("\t\t\t*\t\t\t1. New School")
        print("\t\t\t*\t\t\t2. Edit School")
        print("\t\t\t*\t\t\t3. Show School")
        print("\t\t\t*\t\t\t4. Delete School")
        print("\t\t\t*\t\t\t5. New Student")
        print("\t\t\t*\t\t\t6. Show Student")
        print("\t\t\t*\t\t\t7. Edit Student")
        print("\t\t\t*\t\t\t8. New Subject")
        print("\t\t\t*\t\t\t9. Show Subject")
        print("\t\t\t*\t\t\t10. Edit Subject")
        print("\t\t\t*\t\t\t11. New Marks")
        print("\t\t\t*\t\t\t12. Show Marks")
        print("\t\t\t*\t\t\t13. Edit Marks")
        print("\t\t\t*\t\t\t14. Delete Marks")
        print("\t\t\t*\t\t\t15. Exit")
        ch=int(input("\t\t\t*\t\t\tEnter your choice :"))
        if(ch==1):
            newSchool()
        elif(ch==2):
            editSchool()
        elif(ch==3):
            showSchool()
        elif(ch==4):
            delSchool()
        elif(ch==5):
            newStudent()
        elif(ch==6):
            showStudent()
        elif(ch==7):
            editStudent()
        elif(ch==8):
            newSubject()
        elif(ch==9):
            showSubject()
        elif(ch==10):
            editSubject()
        elif(ch==11):
            newMarks()
        elif(ch==12):
            showMarks()
        elif(ch==13):
            editMarks()
        elif(ch==14):
            delMarks()
        else:
            break
menu()
    
##createDB()
##newSchool()
##newStudent()
##newMarks()
####editSubject()
##showMarks()
