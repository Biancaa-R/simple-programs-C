MOV R0, #10H
MOV R1,# 20H
MOV R2,#30H

;Reading m,n,p,q

MOV DPTR,#000H
MOVX A,@DPTR
MOV 30H,A
INC DPTR
MOVX A ,@DPTR
MOV 31H,A
INC DPTR
MOVX A ,@DPTR
MOV 32H,A
INC DPTR
MOVX A ,@DPTR
MOV 33H,A 


MOV 38H,#00H
ILP: MOV A ,38H
XRL A,30H
JZ EXITI

MOV 39H,#000H

JLP: MOV A,39H
XRL A ,33H
JZ EXITJ

MOV R7,#00H
MOV 3AH,#00H

KLP: MOV A,3AH
XRL A,32H
JZ EXITK



