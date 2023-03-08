import datetime

class StudentRecord():
    def __init__(self):
        self.name = None
        self.classId = None
        self.dateOfBirth = None
        self.gender = None


myStudent = StudentRecord()

myStudent.name = "Ahmad Sayed"
myStudent.classId = "5A"
myStudent.dateOfBirth = datetime.datetime(2010, 3, 21)
myStudent.gender = True

