<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="Order.aspx.vb" Inherits="WeymanAssignment9.Order" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    <h3>Pizza Sizes:</h3>
    </div>
        <asp:RadioButtonList ID="PizzaSize" runat="server">
            <asp:ListItem>Small</asp:ListItem>
            <asp:ListItem>Medium</asp:ListItem>
            <asp:ListItem>Large</asp:ListItem>
            <asp:ListItem Value="XLarge">Extra Large</asp:ListItem>
        </asp:RadioButtonList>
        <br /><h3>Toppings:</h3>
        <asp:CheckBoxList ID="Ptop" runat="server">
            <asp:ListItem>Pepperoni</asp:ListItem>
            <asp:ListItem>Bacon</asp:ListItem>
            <asp:ListItem>Sasuage</asp:ListItem>
            <asp:ListItem>Ham</asp:ListItem>
        </asp:CheckBoxList>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Calculate Price" />
        <br />
        <br />
        <asp:Label ID="Label1" runat="server" Text="Total Price:"></asp:Label>
        <asp:Label ID="lblprice" runat="server"></asp:Label>
    </form>
</body>
</html>
