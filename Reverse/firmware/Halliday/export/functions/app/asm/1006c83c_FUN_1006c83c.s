; FUN_1006c83c @ 0x1006c83c size=74
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  mov.w r0,#0xffffffff
  mov.w r1,#0xffffffff
  bl 0x1006b9c8
  mov r0,r4
  bl 0x1006b990
  cbz r0,0x1006c85a
  ldr r3,[r0,#0x4]
  cbnz r3,0x1006c87a
  ldr r3,[0x1006c888]
  ldr r2,[r3,#0x4]
  cbz r2,0x1006c866
  ldr r2,[r3,#0xc]
  cbnz r2,0x1006c880
  movs r2,#0x1
  str.w r4,[r3,r2,lsl #0x3]
  movs r4,#0x0
  add.w r3,r3,r2, lsl #0x3
  str r5,[r3,#0x4]
  bl 0x1006b9bc
  mov r0,r4
  pop {r3,r4,r5,pc}
  mvn r4,#0x77
  b 0x1006c872
  mvn r4,#0x1b
  b 0x1006c872
