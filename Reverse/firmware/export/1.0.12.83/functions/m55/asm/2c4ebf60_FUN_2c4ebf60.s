; FUN_2c4ebf60 @ 0x2c4ebf60 size=26
  push {r4,lr}
  ldr r4,[r0,#0xc]
  cbz r4,0x2c4ebf78
  ldr r3,[r4,#0x4]
  cbz r3,0x2c4ebf6e
  ldr r0,[r4,#0x8]
  blx r3
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c62bea8
  pop {r4,pc}
