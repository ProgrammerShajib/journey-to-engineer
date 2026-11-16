class StudentDatabase:
    __student_list = []

    @classmethod
    def add_student(cls, student):
        cls.__student_list.append(student)

    @classmethod
    def get_all_students(cls):
        return cls.__student_list

    @classmethod
    def find_student_by_id(cls, student_id):
        for student in cls.__student_list:
            if student.get_student_id() == student_id:
                return student
        raise ValueError(f"Student with ID '{student_id}' not found in the database!")


class Student:
    def __init__(self, student_id, name, department, is_enrolled):
        student_id = str(student_id)
        if any(s.get_student_id() == student_id for s in StudentDatabase.get_all_students()):
            raise ValueError(f"Student ID '{student_id}' already exists!")

        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = is_enrolled

        StudentDatabase.add_student(self)

    def get_student_id(self):
        return self.__student_id

    def enroll_student(self):
        if not self.__is_enrolled:
            self.__is_enrolled = True
            print(f"{self.__name} (ID: {self.__student_id}) has been enrolled successfully!")
        else:
            raise ValueError(f"{self.__name} (ID: {self.__student_id}) is already enrolled!")

    def drop_student(self):
        if self.__is_enrolled:
            self.__is_enrolled = False
            print(f"{self.__name} (ID: {self.__student_id}) has dropped out!")
        else:
            raise ValueError(f"{self.__name} (ID: {self.__student_id}) is not currently enrolled!")

    def view_student_info(self):
        status = "Enrolled" if self.__is_enrolled else "Not Enrolled"
        print(f"Student ID: {self.__student_id} | Name: {self.__name} | Department: {self.__department} | Status: {status}")


s1 = Student(1152, "Sajib", "CSE", True)
s2 = Student(1153, "Ayesha", "EEE", False)
s3 = Student(1154, "Tanvir", "BBA", True)


# Menu-driven system
while True:
    print("\n--- Student Management System ---")
    print("1. View All Students")
    print("2. Enroll Student")
    print("3. Drop Student")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ").strip()

    if choice == "1":
        students = StudentDatabase.get_all_students()
        if not students:
            print("No students found in the database!")
        else:
            print("\n---- All Students ----")
            for student in students:
                student.view_student_info()

    elif choice == "2":
        target_id = input("Enter the student ID to enroll: ").strip()
        try:
            student = StudentDatabase.find_student_by_id(target_id)
            student.enroll_student()
        except ValueError as e:
            print(f"Error: {e}")

    elif choice == "3":
        target_id = input("Enter the student ID to drop: ").strip()
        try:
            student = StudentDatabase.find_student_by_id(target_id)
            student.drop_student()
        except ValueError as e:
            print(f"Error: {e}")

    elif choice == "4":
        print("Exiting program. Goodbye!")
        break

    else:
        print("Invalid choice! Please enter a number between 1 and 4.")
