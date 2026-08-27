; FUN_2c6584ee @ 0x2c6584ee size=34
  push {r3,r4,r5,lr}
  mov r4,r1
  ldr r3,[r0,#0x20]
  mov r5,r0
  movs r1,#0x1
  mov r0,r4
  bl 0x2c668a98
  cmp r0,#0x0
  itet gt
  add.gt r4,r4,r0
  mov.le.w r3,#0xffffffff
  ldrb.gt.w r3,[r4,#-0x1]
  str r3,[r5,#0x24]
  pop {r3,r4,r5,pc}
