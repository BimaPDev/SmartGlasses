; FUN_2c609e50 @ 0x2c609e50 size=20
  push {r4,lr}
  bl 0x2c601b5c
  ldr r0,[r0,#0x0]
  ldr r3,[r0,#0x2c]
  cbz r3,0x2c609e62
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
