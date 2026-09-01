; FUN_10072238 @ 0x10072238 size=26
  push {r3,lr}
  ldr r2,[0x10072254]
  bl 0x1011c5d8
  cbnz r0,0x1007224e
  ldr r0,[0x10072258]
  bl 0x10119dc2
  mvn r0,#0x15
  pop {r3,pc}
  movs r0,#0x0
  b 0x1007224c
