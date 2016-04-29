Module Module1

    Sub Main()
        System.Console.WriteLine("Hello World!")
        System.Console.Write("Title: ")
        System.Console.WriteLine(My.Application.Info.Title)
        System.Console.Write("Description: ")
        System.Console.WriteLine(My.Application.Info.Description)
        System.Console.Write("Company Name: ")
        System.Console.WriteLine(My.Application.Info.CompanyName)
        System.Console.Write("Product Name: ")
        System.Console.WriteLine(My.Application.Info.ProductName)
        System.Console.Write("Copyright: ")
        System.Console.WriteLine(My.Application.Info.Copyright)
        System.Console.Write("Assembly Version: ")
        System.Console.WriteLine(My.Application.Info.Version)
        System.Console.WriteLine("Please press [Enter] to close.")
        Dim result As Integer
        Dim arg1 As Integer
        Dim arg2 As Integer
        arg1 = 6
        arg2 = 4
        result = arg2 * 10 - arg1 ^ 2 / arg2
        System.Console.WriteLine(result)
        System.Console.ReadLine()


    End Sub

End Module
