; FUN_2c6410f0 @ 0x2c6410f0 size=40
  push {r3,r4,r5,lr}
  ldr r5,[0x2c641118]
  ldr r0,[r5,#0x0]
  cbz r0,0x2c641100
  bl 0x2c607e50
  mov r4,r0
  cbnz r0,0x2c641106
  movs r4,#0x0
  mov r0,r4
  pop {r3,r4,r5,pc}
  ldr r0,[r5,#0x0]
  bl 0x2c602bc4
  ldr r0,[r5,#0x0]
  movs r1,#0x1
  bl 0x2c606a28
  mov r0,r4
  pop {r3,r4,r5,pc}
