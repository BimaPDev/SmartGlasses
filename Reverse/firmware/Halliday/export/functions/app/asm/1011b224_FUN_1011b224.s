; FUN_1011b224 @ 0x1011b224 size=36
  push {r3,lr}
  ldr r3,[r0,#0x8]
  ldr r0,[r0,#0x0]
  ldrd r2,r1,[r3,#0x0]
  str r2,[r1,#0x0]
  str r1,[r2,#0x4]
  movs r2,#0x0
  ldrh r1,[r3,#0x8]
  strd r2,r2,[r3,#0x0]
  ldrh r3,[r3,#0xa]
  add r1,r3
  adds r1,#0xc
  bl 0x1011a1b6
  movs r0,#0x1
  pop {r3,pc}
