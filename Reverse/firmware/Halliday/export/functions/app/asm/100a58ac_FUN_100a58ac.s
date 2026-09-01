; FUN_100a58ac @ 0x100a58ac size=34
  push {r3,r4,r5,lr}
  ldr r5,[0x100a58d0]
  mov r4,r0
  ldrb r3,[r5,#0x2]
  tst r0,r3
  beq 0x100a58c8
  bl 0x100a6128
  ldrb r0,[r5,#0x2]
  bic.w r4,r0,r4
  movs r0,#0x0
  strb r4,[r5,#0x2]
  pop {r3,r4,r5,pc}
  mvn r0,#0x15
  b 0x100a58c6
