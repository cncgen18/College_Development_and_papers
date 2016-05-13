'Project Name: WeymanAssignment9
'Developer: Michael Weyman
'4/24/2016
'The purpose of this project is to calculate the price of pizzas in a webpage

Public Class Order
    Inherits System.Web.UI.Page

    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load

    End Sub

    Protected Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim sm As Double
        Dim med As Double
        Dim lg As Double
        Dim xlg As Double
        Dim toppings As Double
        Dim Price As Double
        Dim selected As Integer
        sm = 7.99
        med = 9.99
        lg = 12.99
        xlg = 15.99
        toppings = 0.99
        selected = Ptop.Items.Count
        Select Case PizzaSize.SelectedValue
            Case "Small"
                Price = sm + selected * toppings
                lblprice.Text = ("your total is: $" & Price)
            Case "Medium"
                Price = med + selected * toppings
                lblprice.Text = ("your total is: $" & Price)
            Case "Large"
                Price = lg + selected * toppings
                lblprice.Text = ("your total is: $" & Price)
            Case "XLarge"
                Price = xlg + selected * toppings
                lblprice.Text = ("your total is: $" & Price)
        End Select
    End Sub

End Class