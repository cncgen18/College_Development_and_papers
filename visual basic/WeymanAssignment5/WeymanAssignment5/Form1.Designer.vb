<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Title = New System.Windows.Forms.Label()
        Me.InputMessage = New System.Windows.Forms.Label()
        Me.numOfMonths = New System.Windows.Forms.TextBox()
        Me.unvPlan = New System.Windows.Forms.RadioButton()
        Me.homePlan = New System.Windows.Forms.RadioButton()
        Me.busPlan = New System.Windows.Forms.RadioButton()
        Me.Output = New System.Windows.Forms.Label()
        Me.findPrice = New System.Windows.Forms.Button()
        Me.clearForm = New System.Windows.Forms.Button()
        Me.windPic = New System.Windows.Forms.PictureBox()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        CType(Me.windPic, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'Title
        '
        Me.Title.AutoSize = True
        Me.Title.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Title.Location = New System.Drawing.Point(13, 13)
        Me.Title.Name = "Title"
        Me.Title.Size = New System.Drawing.Size(219, 20)
        Me.Title.TabIndex = 0
        Me.Title.Text = "Price Comparison of Plans"
        '
        'InputMessage
        '
        Me.InputMessage.AutoSize = True
        Me.InputMessage.Font = New System.Drawing.Font("Microsoft Sans Serif", 11.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.InputMessage.Location = New System.Drawing.Point(34, 57)
        Me.InputMessage.Name = "InputMessage"
        Me.InputMessage.Size = New System.Drawing.Size(136, 18)
        Me.InputMessage.TabIndex = 1
        Me.InputMessage.Text = "Number of Months:"
        '
        'numOfMonths
        '
        Me.numOfMonths.Location = New System.Drawing.Point(177, 54)
        Me.numOfMonths.Name = "numOfMonths"
        Me.numOfMonths.Size = New System.Drawing.Size(55, 20)
        Me.numOfMonths.TabIndex = 2
        '
        'unvPlan
        '
        Me.unvPlan.AutoSize = True
        Me.unvPlan.BackColor = System.Drawing.Color.Snow
        Me.unvPlan.Location = New System.Drawing.Point(57, 96)
        Me.unvPlan.Name = "unvPlan"
        Me.unvPlan.Size = New System.Drawing.Size(95, 17)
        Me.unvPlan.TabIndex = 3
        Me.unvPlan.TabStop = True
        Me.unvPlan.Text = "University Plan"
        Me.unvPlan.UseVisualStyleBackColor = False
        '
        'homePlan
        '
        Me.homePlan.AutoSize = True
        Me.homePlan.BackColor = System.Drawing.Color.Snow
        Me.homePlan.Location = New System.Drawing.Point(57, 120)
        Me.homePlan.Name = "homePlan"
        Me.homePlan.Size = New System.Drawing.Size(119, 17)
        Me.homePlan.TabIndex = 4
        Me.homePlan.TabStop = True
        Me.homePlan.Text = "Home Premium plan"
        Me.homePlan.UseVisualStyleBackColor = False
        '
        'busPlan
        '
        Me.busPlan.AutoSize = True
        Me.busPlan.BackColor = System.Drawing.Color.Snow
        Me.busPlan.Location = New System.Drawing.Point(57, 144)
        Me.busPlan.Name = "busPlan"
        Me.busPlan.Size = New System.Drawing.Size(119, 17)
        Me.busPlan.TabIndex = 5
        Me.busPlan.TabStop = True
        Me.busPlan.Text = "Small Business Plan"
        Me.busPlan.UseVisualStyleBackColor = False
        '
        'Output
        '
        Me.Output.AutoSize = True
        Me.Output.Font = New System.Drawing.Font("Microsoft Sans Serif", 11.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Output.Location = New System.Drawing.Point(54, 244)
        Me.Output.Name = "Output"
        Me.Output.Size = New System.Drawing.Size(0, 18)
        Me.Output.TabIndex = 6
        '
        'findPrice
        '
        Me.findPrice.Location = New System.Drawing.Point(70, 305)
        Me.findPrice.Name = "findPrice"
        Me.findPrice.Size = New System.Drawing.Size(82, 23)
        Me.findPrice.TabIndex = 7
        Me.findPrice.Text = "Calculate"
        Me.findPrice.UseVisualStyleBackColor = True
        '
        'clearForm
        '
        Me.clearForm.Location = New System.Drawing.Point(332, 305)
        Me.clearForm.Name = "clearForm"
        Me.clearForm.Size = New System.Drawing.Size(75, 23)
        Me.clearForm.TabIndex = 8
        Me.clearForm.Text = "Clear"
        Me.clearForm.UseVisualStyleBackColor = True
        '
        'windPic
        '
        Me.windPic.Location = New System.Drawing.Point(306, 22)
        Me.windPic.Name = "windPic"
        Me.windPic.Size = New System.Drawing.Size(182, 173)
        Me.windPic.TabIndex = 9
        Me.windPic.TabStop = False
        '
        'PictureBox1
        '
        Me.PictureBox1.BackColor = System.Drawing.Color.Snow
        Me.PictureBox1.Location = New System.Drawing.Point(40, 91)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(158, 84)
        Me.PictureBox1.TabIndex = 10
        Me.PictureBox1.TabStop = False
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.OrangeRed
        Me.ClientSize = New System.Drawing.Size(514, 351)
        Me.Controls.Add(Me.windPic)
        Me.Controls.Add(Me.clearForm)
        Me.Controls.Add(Me.findPrice)
        Me.Controls.Add(Me.Output)
        Me.Controls.Add(Me.busPlan)
        Me.Controls.Add(Me.homePlan)
        Me.Controls.Add(Me.unvPlan)
        Me.Controls.Add(Me.numOfMonths)
        Me.Controls.Add(Me.InputMessage)
        Me.Controls.Add(Me.Title)
        Me.Controls.Add(Me.PictureBox1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        CType(Me.windPic, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Title As System.Windows.Forms.Label
    Friend WithEvents InputMessage As System.Windows.Forms.Label
    Friend WithEvents numOfMonths As System.Windows.Forms.TextBox
    Friend WithEvents unvPlan As System.Windows.Forms.RadioButton
    Friend WithEvents homePlan As System.Windows.Forms.RadioButton
    Friend WithEvents busPlan As System.Windows.Forms.RadioButton
    Friend WithEvents Output As System.Windows.Forms.Label
    Friend WithEvents findPrice As System.Windows.Forms.Button
    Friend WithEvents clearForm As System.Windows.Forms.Button
    Friend WithEvents windPic As System.Windows.Forms.PictureBox
    Friend WithEvents PictureBox1 As System.Windows.Forms.PictureBox

End Class
