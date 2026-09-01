; FUN_100a5880 @ 0x100a5880 size=40
  push {r3,r4,r5,lr}
  mov r4,r0
  cbz r1,0x100a589c
  ldr r5,[0x100a58a8]
  ldrb r3,[r5,#0x2]
  tst r0,r3
  bne 0x100a58a2
  bl 0x100a6108
  cbnz r0,0x100a589a
  ldrb r3,[r5,#0x2]
  orrs r4,r3
  strb r4,[r5,#0x2]
  pop {r3,r4,r5,pc}
  mvn r0,#0x15
  b 0x100a589a
  mvn r0,#0x77
  b 0x100a589a
