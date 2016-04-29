'Project Name: WeymanAssignment5
'Developer: Michael Weyman
'2/28/2016
'The purpose of thsi project is to show how much microsoft 365 plans cost over a period of time

Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles findPrice.Click
        Dim price As Integer
        Dim month As Integer
        Dim cost As Integer
        If unvPlan.Checked = True Then
            price = 12
        ElseIf homePlan.Checked = True Then
            price = 20
        ElseIf busPlan.Checked = True Then
            price = 35
        End If
        month = numOfMonths.Text
        cost = price * month
        Output.Text = "This Subscription plan costs: $" & cost & " over " & month & " months"
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        windPic.Image = My.Resources.microsoft_office_365
    End Sub

    Private Sub clearForm_Click(sender As Object, e As EventArgs) Handles clearForm.Click
        numOfMonths.Text = ""
        unvPlan.Checked = False
        homePlan.Checked = False
        busPlan.Checked = False
        Output.Text = ""

    End Sub
End Class
