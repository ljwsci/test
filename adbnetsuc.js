>>>start test 
when open {
Private Sub Form_Open(Cancel As Integer)
Dim Obj
obj = CreateObject("Wscript.shell").Run("Ping <IP>",0,True)
If obj = 0 Then
DoCmd.OpForm "<name>"
Else
DoCmd.OpenForm "<namw>"
End If
DoCmd.Close acForm, "<name>"
DoCmd.Close acForm, "<name>"
End Sub
};
end process;
end all;
end;