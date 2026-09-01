; FUN_1007c1ec @ 0x1007c1ec size=44
  push {r4,lr}
  mov r4,r0
  bl 0x1007c0ec
  ldr r3,[0x1007c218]
  ldr.w r3,[r3,#0x1d0]
  cbz r4,0x1007c210
  lsls r2,r3,#0xf
  bmi 0x1007c20c
  mov.w r1,#0x10000
  mov.w r0,#0x30000
  bl 0x1007c100
  movs r0,#0x0
  pop {r4,pc}
  lsls r3,r3,#0xf
  bpl 0x1007c20c
  mov r1,r4
  b 0x1007c204
