; FUN_10134596 @ 0x10134596 size=32
  push {r3,r4,r5,lr}
  mov r4,r1
  ldr r1,[r1,#0x0]
  ldrd r2,r3,[r1,#0x14]
  bl 0x100d04d8
  subs r5,r0,#0x0
  bge 0x101345ae
  ldr r0,[r4,#0x0]
  bl 0x100c1c90
  movs r3,#0x0
  mov r0,r5
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
