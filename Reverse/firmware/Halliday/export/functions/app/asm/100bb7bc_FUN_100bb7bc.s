; FUN_100bb7bc @ 0x100bb7bc size=46
  mov.w r1,#0xffffffff
  push {r4,lr}
  ldr r0,[0x100bb7ec]
  bl 0x1011dbf4
  ldr r2,[0x100bb7f0]
  movs r1,#0x0
  ldrb r3,[r2,#0x0]
  ands r4,r3,#0x1
  beq 0x100bb7e2
  bfi r3,r1,#0x0,#0x1
  strb r3,[r2,#0x0]
  str r1,[r2,#0x4]
  bl 0x101367f4
  mov r4,r0
  bl 0x100bb580
  mov r0,r4
  pop {r4,pc}
