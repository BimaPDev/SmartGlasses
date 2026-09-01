; FUN_10096ec8 @ 0x10096ec8 size=32
  push {r4,lr}
  mov r4,r1
  mov r0,r1
  bl 0x10096e9c
  ldrb.w r3,[r4,#0x54]
  lsls r3,r3,#0x1c
  bmi 0x10096ee2
  ldr r1,[0x10096ee8]
  ldr r0,[r4,#0x2c]
  bl 0x10094268
  movs r3,#0x0
  str r3,[r4,#0x2c]
  pop {r4,pc}
