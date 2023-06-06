>>>start requry
Like IIf (IsNull([Forms]![Windowsname]![words]),'*','*'&[Forms]![Windowsname]![words]&'*');
set name = words;
end requry;
>>>start VBA_R {
    Private Sub <idname>
    Me.s_windowsname.Requery
    End Sub
};
end process VBA_R;
>>>start VBA_C {
    Private Sub <idcrname>
    Me.wordsname.Value = IsNull
    Me.s_windowsname.Requery
    End Sub
};
end process VBA_C;