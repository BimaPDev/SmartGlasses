; FUN_2c0bc438 @ 0x2c0bc438 size=20
  push {r2,r4,r5,r6,lr}
  pop {r0,r2,r4,r7}
  ldr r7,[0x2c0bc5a4]
  subs r5,#0xad
  movs r7,#0x39
  cbnz r6,0x2c0bc4c2
  str r3,[r3,#0x60]
  pop {r3,r5,pc}
  subs r5,#0xef
  b 0x2c0bc7bc
