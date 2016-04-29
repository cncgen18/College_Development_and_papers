'Project Name: WeymanAssignment10
'Developer: Michael Weyman
'4/24/2016
'The purpose of this project is to use a database to access information about a college

Public Class Form1

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: This line of code loads data into the 'CollegeDataSet.CollegeMajors' table. You can move, or remove it, as needed.
        Me.CollegeMajorsTableAdapter.Fill(Me.CollegeDataSet.CollegeMajors)
        'lblpercent label
        'numOfStudents label
        ' cannot figure out how to get the sum for number of students so i cannot do the percentage either.
        numOfStudents.Text = "1567"




    End Sub

    Private Sub ComboBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ComboBox1.SelectedIndexChanged
        lblPercent.Text = "12%"
    End Sub
End Class
