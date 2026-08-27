; FUN_2c670968 @ 0x2c670968 size=34
  push {r4,lr}
  mov r4,r1
  movs r1,#0x1
  bl 0x2c6706e0
  mov r2,r0
  cbnz r0,0x2c670982
  ldr r3,[0x2c67098c]
  mov.w r1,#0x140
  ldr r0,[0x2c670990]
  bl 0x2c668484
  movs r3,#0x1
  str r4,[r0,#0x14]
  str r3,[r0,#0x10]
  pop {r4,pc}
