'Project Name: WeymanAssignment7
'Developer: Michael Weyman
'4/3/2016
'The purpose of this project is to calculate the compound interest of an amount over so many years

Public Class Form1

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        PictureBox1.Image = My.Resources.bmi
        Calculate.Visible = False
    End Sub

    Private Sub Calculate_Click(sender As Object, e As EventArgs) Handles Calculate.Click
        Dim intHeight As Integer
        Dim intWeight As Integer
        Dim dblBMI As Double
        Try
            intHeight = Height.Text
            intWeight = Weight.Text
            If metOrImp.SelectedItem = "Metric System" Then
                dblBMI = (intWeight / (intHeight * intHeight)) * 703
            End If
            If metOrImp.SelectedItem = "Imperial" Then
                dblBMI = (intWeight / (intHeight * intHeight))
            End If
            MsgBox("Your BMI is: " & dblBMI.ToString("N2"))
        Catch ex As Exception
            MessageBox.Show(ex.Message)
        End Try

    End Sub

    Private Sub metOrImp_SelectedIndexChanged(sender As Object, e As EventArgs) Handles metOrImp.SelectedIndexChanged
        Calculate.Visible = True
        If metOrImp.SelectedItem = "Metric System" Then
            Label5.Text = "m"
            Label6.Text = "kg"
        End If
        If metOrImp.SelectedItem = "Imperial" Then
            Label5.Text = "in"
            Label6.Text = "lbs"
        End If
    End Sub
End Class
