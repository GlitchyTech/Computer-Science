program test;

var
otv, kol: real;

begin
kol := 0;
writeln('��� ��������� ������� �����.');
writeln('1)�������������');
writeln('2)�������������.');
writeln('3)������������');
writeln('4)������������.');
writeln('');
readln(otv);
if otv = 2 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('��� ����� ������� ��������� �� ��������� DC?');
writeln('1)SuperMan.');
writeln('2)Joker.');
writeln('3)Batman.');
writeln('4)������ �����.');
writeln('');
readln(otv);

if otv = 3 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('������� ����� 2+2*2?');
writeln('1)8.');
writeln('2)6.');
writeln('3)10.');
writeln('4)4.');
writeln('');
readln(otv);
if otv = 2 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('����������,����������� ������?');
writeln('1)��� �����.');
writeln('2)�������-����.');
writeln('3)���������.');
writeln('4)������.?');
writeln('');
readln(otv);
if otv = 4 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('');
writeln('��������� ��� �����?');
writeln('1)�������.');
writeln('2)������.');
writeln('3)����.');
writeln('4)�����.');
writeln('');
readln(otv);
if otv = 4 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('��� �������� ����� ������� ��������?');
writeln('1)������.');
writeln('2)�����.');
writeln('3)���.');
writeln('4)������.');
writeln('');
readln(otv);
if otv = 2 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('������� ������� ������?');
writeln('"?');
writeln('1)10 �����. ');
writeln('2)8 �����.');
writeln('3)20 �����.');
writeln('4)12 �����.');
writeln('');
readln(otv);
if otv = 1 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('�������-���...');
writeln('1)24:00.');
writeln('2)06:00.');
writeln('3)12:00.');
writeln('4)8:00.');
writeln('');
readln(otv);
if otv = 1 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln(''); 
writeln('��� �������.') ;
writeln('1)�����.');
writeln('2)���������.');
writeln('3)����.');
writeln('4)�������.');
writeln('');
readln(otv);
if otv = 3 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
writeln('');
writeln('����� ������� ���� �������');
writeln('1)�������.');
writeln('2)������.');
writeln('3)�������� ������.');
writeln('4)����.');
writeln('');
readln(otv);
if otv = 2 then
begin
writeln('���������!');
kol := kol + 1;
end
else
begin
writeln('�����������.');
end;
writeln('');
if (kol >= 0) and (kol < 3) then
writeln('�����');
if (kol >= 3) and (kol < 5) then
writeln('���������');
if (kol >= 5) and (kol < 7) then
writeln('������.');
if (kol >= 7) and (kol < 10) then
writeln('�������.');
if kol = 10 then
writeln('�� �������?');
writeln(kol, ' ���������� �������')
end.