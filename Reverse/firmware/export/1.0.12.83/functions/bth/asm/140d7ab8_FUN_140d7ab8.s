; FUN_140d7ab8 @ 0x140d7ab8 size=24
  push {r4,lr}
  ldr r4,[r0,#0x4]
  cmp r4,r1
  bcs 0x140d7ac8
  subs r1,r1,r4
  bl 0x140d7aa4
  pop {r4,pc}
  bls 0x140d7ac6
  bl 0x140d7770
  b 0x140d7ac6
