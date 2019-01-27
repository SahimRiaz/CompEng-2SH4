public  class Student{

	private int id;
	private int grade;
	private String name;

//constructor; initializes id to n, name to someName and grade to 0
	public Student (int n, String someName ){
		.............
	}

	//sets the grade to mark if 0<=mark <=100; if mark is < 0, grade is set to 0; if mark > 100; grade is set to 100.
	public void setGrade( int mark ){
		...............
	}

	//returns grade
	public int getGrade( ){
		..................
    }


	//returns ID
	public int getId( ){
		.................
    }

    //returns the student's name
    public String getName(){
       .................
    }

	// increases grade by adding to it the bonus, up to the limit of 100, and returns the new grade
	public int increaseGrade( int bonus ){
		......................
	}

	//compares the grades of this student and that student
	//and returns true if this student has higher grade, false otherwise
	public boolean gradeIsHigher(Student that){
        .............................
	}

	//static method that returns the highest grade of the students in array a
	public static int highestGrade(Student[] a){
        ..................
	}

	//returns a string representation of the object
	//(example: The student Robert Ford has the iD 6574 and the grade 100)
	public String toString(){
       ..................
	}

} // end of class definition
