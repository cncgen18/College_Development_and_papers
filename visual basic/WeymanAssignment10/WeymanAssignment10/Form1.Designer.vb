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
        Me.components = New System.ComponentModel.Container()
        Me.DataGridView1 = New System.Windows.Forms.DataGridView()
        Me.CollegeDataSet = New WeymanAssignment10.collegeDataSet()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.numOfStudents = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.ComboBox1 = New System.Windows.Forms.ComboBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.lblPercent = New System.Windows.Forms.Label()
        Me.CollegeDataSetBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.CollegeMajorsBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.CollegeMajorsTableAdapter = New WeymanAssignment10.collegeDataSetTableAdapters.CollegeMajorsTableAdapter()
        Me.DepartmentDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.DegreeDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.NumberInDegreeDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.CollegeMajorsBindingSource3 = New System.Windows.Forms.BindingSource(Me.components)
        CType(Me.DataGridView1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.CollegeDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.CollegeDataSetBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.CollegeMajorsBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.CollegeMajorsBindingSource3, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'DataGridView1
        '
        Me.DataGridView1.AutoGenerateColumns = False
        Me.DataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.DataGridView1.Columns.AddRange(New System.Windows.Forms.DataGridViewColumn() {Me.DepartmentDataGridViewTextBoxColumn, Me.DegreeDataGridViewTextBoxColumn, Me.NumberInDegreeDataGridViewTextBoxColumn})
        Me.DataGridView1.DataSource = Me.CollegeMajorsBindingSource
        Me.DataGridView1.Location = New System.Drawing.Point(13, 13)
        Me.DataGridView1.Name = "DataGridView1"
        Me.DataGridView1.Size = New System.Drawing.Size(352, 138)
        Me.DataGridView1.TabIndex = 0
        '
        'CollegeDataSet
        '
        Me.CollegeDataSet.DataSetName = "collegeDataSet"
        Me.CollegeDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(17, 159)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(134, 13)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "Total Number of Students: "
        '
        'numOfStudents
        '
        Me.numOfStudents.AutoSize = True
        Me.numOfStudents.Location = New System.Drawing.Point(158, 159)
        Me.numOfStudents.Name = "numOfStudents"
        Me.numOfStudents.Size = New System.Drawing.Size(0, 13)
        Me.numOfStudents.TabIndex = 2
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(16, 175)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(38, 13)
        Me.Label2.TabIndex = 3
        Me.Label2.Text = "Majors"
        '
        'ComboBox1
        '
        Me.ComboBox1.DataSource = Me.CollegeMajorsBindingSource3
        Me.ComboBox1.DisplayMember = "Degree"
        Me.ComboBox1.FormattingEnabled = True
        Me.ComboBox1.Location = New System.Drawing.Point(61, 175)
        Me.ComboBox1.Name = "ComboBox1"
        Me.ComboBox1.Size = New System.Drawing.Size(121, 21)
        Me.ComboBox1.TabIndex = 4
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(19, 207)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(207, 13)
        Me.Label3.TabIndex = 5
        Me.Label3.Text = "Percentage of Students in Selected Major:"
        '
        'lblPercent
        '
        Me.lblPercent.AutoSize = True
        Me.lblPercent.Location = New System.Drawing.Point(233, 207)
        Me.lblPercent.Name = "lblPercent"
        Me.lblPercent.Size = New System.Drawing.Size(0, 13)
        Me.lblPercent.TabIndex = 6
        '
        'CollegeDataSetBindingSource
        '
        Me.CollegeDataSetBindingSource.DataSource = Me.CollegeDataSet
        Me.CollegeDataSetBindingSource.Position = 0
        '
        'CollegeMajorsBindingSource
        '
        Me.CollegeMajorsBindingSource.DataMember = "CollegeMajors"
        Me.CollegeMajorsBindingSource.DataSource = Me.CollegeDataSetBindingSource
        '
        'CollegeMajorsTableAdapter
        '
        Me.CollegeMajorsTableAdapter.ClearBeforeFill = True
        '
        'DepartmentDataGridViewTextBoxColumn
        '
        Me.DepartmentDataGridViewTextBoxColumn.DataPropertyName = "Department"
        Me.DepartmentDataGridViewTextBoxColumn.HeaderText = "Department"
        Me.DepartmentDataGridViewTextBoxColumn.Name = "DepartmentDataGridViewTextBoxColumn"
        '
        'DegreeDataGridViewTextBoxColumn
        '
        Me.DegreeDataGridViewTextBoxColumn.DataPropertyName = "Degree"
        Me.DegreeDataGridViewTextBoxColumn.HeaderText = "Degree"
        Me.DegreeDataGridViewTextBoxColumn.Name = "DegreeDataGridViewTextBoxColumn"
        '
        'NumberInDegreeDataGridViewTextBoxColumn
        '
        Me.NumberInDegreeDataGridViewTextBoxColumn.DataPropertyName = "Number in Degree"
        Me.NumberInDegreeDataGridViewTextBoxColumn.HeaderText = "Number in Degree"
        Me.NumberInDegreeDataGridViewTextBoxColumn.Name = "NumberInDegreeDataGridViewTextBoxColumn"
        '
        'CollegeMajorsBindingSource3
        '
        Me.CollegeMajorsBindingSource3.DataMember = "CollegeMajors"
        Me.CollegeMajorsBindingSource3.DataSource = Me.CollegeDataSetBindingSource
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(377, 322)
        Me.Controls.Add(Me.lblPercent)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.ComboBox1)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.numOfStudents)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.DataGridView1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        CType(Me.DataGridView1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.CollegeDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.CollegeDataSetBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.CollegeMajorsBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.CollegeMajorsBindingSource3, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents DataGridView1 As System.Windows.Forms.DataGridView
    Friend WithEvents CollegeDataSet As WeymanAssignment10.collegeDataSet
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents numOfStudents As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents ComboBox1 As System.Windows.Forms.ComboBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents lblPercent As System.Windows.Forms.Label
    Friend WithEvents CollegeDataSetBindingSource As System.Windows.Forms.BindingSource
    Friend WithEvents CollegeMajorsBindingSource As System.Windows.Forms.BindingSource
    Friend WithEvents CollegeMajorsTableAdapter As WeymanAssignment10.collegeDataSetTableAdapters.CollegeMajorsTableAdapter
    Friend WithEvents DepartmentDataGridViewTextBoxColumn As System.Windows.Forms.DataGridViewTextBoxColumn
    Friend WithEvents DegreeDataGridViewTextBoxColumn As System.Windows.Forms.DataGridViewTextBoxColumn
    Friend WithEvents NumberInDegreeDataGridViewTextBoxColumn As System.Windows.Forms.DataGridViewTextBoxColumn
    Friend WithEvents CollegeMajorsBindingSource3 As System.Windows.Forms.BindingSource

End Class
