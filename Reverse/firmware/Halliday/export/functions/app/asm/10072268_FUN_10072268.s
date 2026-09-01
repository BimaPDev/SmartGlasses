; FUN_10072268 @ 0x10072268 size=28
  push {r3,lr}
  ldr r3,[0x10072284]
  bl 0x1011c672
  mov r1,r0
  cbnz r0,0x10072280
  ldr r0,[0x10072288]
  bl 0x10119dc2
  mvn r0,#0x15
  pop {r3,pc}
  movs r0,#0x0
  b 0x1007227e
