; FUN_1011aca2 @ 0x1011aca2 size=24
  ldr r2,[r0,#0x10]
  push {r4,lr}
  mov r4,r0
  ldr r3,[r0,#0x8]
  ldr r2,[r2,#0x0]
  ldr r1,[r0,#0x0]
  ldr r0,[r0,#0xc]
  blx r3
  movs r2,#0x0
  ldr r3,[r4,#0x10]
  str r2,[r3,#0x0]
  pop {r4,pc}
