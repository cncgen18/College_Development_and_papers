'Project Name: WeymanAssignment6
'Developer: Michael Weyman
'3/27/2016
'The purpose of this project is to calculate the compound interest of an amount over so many years
Public Class Form1

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Application.Exit()
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim years As Integer
        Dim principle As Integer
        Dim IRate As Double
        Dim i As Integer
        Dim total As Double
        years = intYears.Text
        principle = intAmount.Text
        IRate = decRate.Text
        showAmount.Items.Clear()
        If years < 0 Or principle < 0 Or IRate < 0 Then
            MsgBox("please enter positive values!")
        Else
            For i = 0 To years - 1
                total = principle * (1 + IRate)
                showAmount.Items.Add("$" & total)
                principle = total
            Next

        End If
    End Sub

End Class
