; FUN_2c13a8c4 @ 0x2c13a8c4 size=54
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x2c13a8fc]
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x2c13f29c
  movs r0,#0x0
  ldr r2,[0x2c13a900]
  add.w r4,r4,r4, lsl #0x1
  add.w r3,r2,r4, lsl #0x2
  ldrb r1,[r3,#0x4]
  lsls r4,r4,#0x2
  str r0,[r3,#0x8]
  cbz r1,0x2c13a8f0
  ldr r3,[r2,r4]
  ldr r3,[r3,#0x4]
  cbz r3,0x2c13a8f0
  blx r3
  ldr r0,[r5,#0x0]
  bl 0x2c13f2d8
  movs r0,#0x1
  pop {r3,r4,r5,pc}
