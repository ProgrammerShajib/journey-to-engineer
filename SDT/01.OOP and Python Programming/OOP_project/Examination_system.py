
class Exam:

    # Class Attribute
    exam_category = "Academic Examination"

    # Constructor
    def __init__(self, exam_name, questions):

        self.exam_name = exam_name
        self.questions = questions

        self.total_marks = sum(
            question["marks"]
            for question in questions.values()
        )

        # Stores all student results
        self.results = {}

    # Display Questions
    def show_questions(self):

        print(f"\nExam: {self.exam_name}")

        for question_id, data in self.questions.items():

            print(
                f"\nQuestion {question_id}: "
                f"{data['question']}"
            )

            for option in data["options"]:
                print("-", option)

            print("Marks:", data["marks"])

    # Evaluate Student Answers
    def evaluate_answers(self, student):

        marks = 0

        for question_id, data in self.questions.items():

            student_answer = student.answers.get(
                question_id
            )

            if student_answer == data["answer"]:
                marks += data["marks"]

        # Update student's marks
        student.marks = marks

        # Save result in Exam
        self.results[student.student_id] = {
            "name": student.name,
            "marks": marks,
            "total_marks": self.total_marks
        }

        return marks


class Student:

    # Class Attribute
    school_name = "Premier University"

    # Constructor
    def __init__(self, name, student_id):

        self.name = name
        self.student_id = student_id

        self.answers = {}
        self.marks = None

    # Attend Exam
    def attend_exam(self, exam, answers):

        if self.marks is not None:
            return "You have already completed this exam!"

        # Validate question IDs
        for question_id in answers:

            if question_id not in exam.questions:
                return "Invalid question ID!"

        self.answers = answers

        result = exam.evaluate_answers(self)

        return (
            f"{self.name} completed the exam. "
            f"Marks: {result}/{exam.total_marks}"
        )

    # Get Marks
    def get_marks(self):

        if self.marks is None:
            return "You have not attended the exam yet."

        return self.marks

    # Object Representation
    def __repr__(self):

        return (
            f"Student(name={self.name!r}, "
            f"student_id={self.student_id!r}, "
            f"marks={self.marks})"
        )


# ----------------------------------
# Creating Exam Questions
# ----------------------------------

questions = {

    1: {
        "question": "What is Python?",
        "options": (
            "A Programming Language",
            "A Game",
            "A Browser"
        ),
        "answer": "A Programming Language",
        "marks": 10
    },

    2: {
        "question": "Which data structure is mutable?",
        "options": (
            "Tuple",
            "List",
            "String"
        ),
        "answer": "List",
        "marks": 10
    },

    3: {
        "question": "Which method is a constructor?",
        "options": (
            "__init__()",
            "__repr__()",
            "print()"
        ),
        "answer": "__init__()",
        "marks": 10
    }
}


# ----------------------------------
# Creating Exam Object
# ----------------------------------

python_exam = Exam(
    "Python OOP Examination",
    questions
)


# ----------------------------------
# Creating Student Objects
# ----------------------------------

student1 = Student("Rahim", "ST101")
student2 = Student("Karim", "ST102")
student3 = Student("Sakib", "ST103")


# ----------------------------------
# Showing Questions
# ----------------------------------

python_exam.show_questions()


# ----------------------------------
# Student Answers
# ----------------------------------

rahim_answers = {
    1: "A Programming Language",
    2: "List",
    3: "__init__()"
}

karim_answers = {
    1: "A Programming Language",
    2: "Tuple",
    3: "__init__()"
}

sakib_answers = {
    1: "A Game",
    2: "List",
    3: "print()"
}


# ----------------------------------
# Attend Examination
# ----------------------------------

print("\nExamination Results:")

print(
    student1.attend_exam(
        python_exam,
        rahim_answers
    )
)

print(
    student2.attend_exam(
        python_exam,
        karim_answers
    )
)

print(
    student3.attend_exam(
        python_exam,
        sakib_answers
    )
)


# ----------------------------------
# Get Student Marks
# ----------------------------------

print("\nIndividual Marks:")

print(student1.name, student1.get_marks())
print(student2.name, student2.get_marks())
print(student3.name, student3.get_marks())


# ----------------------------------
# Display All Results
# ----------------------------------

print("\nComplete Examination Result:")

for student_id, result in python_exam.results.items():

    print(
        student_id,
        result["name"],
        result["marks"],
        "/",
        result["total_marks"]
    )


# ----------------------------------
# Object Representation
# ----------------------------------

print(student1)
print(student2)
print(student3)
