; FUN_2c5ff374 @ 0x2c5ff374 size=30
  push {r3,r4,r5,lr}
  ldr r3,[0x2c5ff394]
  ldr r5,[r3,#0x0]
  cbz r5,0x2c5ff390
  mov r4,r0
  cbz r0,0x2c5ff390
  bl 0x2c602ea8
  mov r1,r5
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x2c5ff1c8
  pop {r3,r4,r5,pc}
