; FUN_1011b100 @ 0x1011b100 size=28
  ldr r3,[r0,#0x4]
  push {r4,lr}
  ldr r3,[r3,#0x0]
  ldr r4,[r3,#0x0]
  mov r0,r4
  bl 0x1011b0a8
  ldr r3,[r4,#0x8]
  ldr r3,[r3,#0x2c]
  cbz r3,0x1011b118
  mov r0,r4
  blx r3
  movs r0,#0x0
  pop {r4,pc}
