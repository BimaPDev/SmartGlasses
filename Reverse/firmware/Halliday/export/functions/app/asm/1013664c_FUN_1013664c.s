; FUN_1013664c @ 0x1013664c size=34
  push {r4,lr}
  mov r4,r1
  movs r1,#0x0
  bl 0x100d4588
  cbz r0,0x10136668
  ldrb.w r3,[r0,#0x39]
  bfi r3,r4,#0x1,#0x1
  strb.w r3,[r0,#0x39]
  movs r0,#0x0
  pop {r4,pc}
  mvn r0,#0x12
  b 0x10136666
