; FUN_1012d630 @ 0x1012d630 size=36
  push {r4,lr}
  movs r1,#0x2
  mov r4,r0
  bl 0x100a0310
  cbz r0,0x1012d652
  ldrb r3,[r4,#0xc]
  ands r0,r3,#0x2
  beq 0x1012d652
  mov r0,r4
  bl 0x1012d608
  cmp r0,#0x0
  ite gt
  mov.gt r0,#0x0
  mov.le r0,#0x1
  pop {r4,pc}
