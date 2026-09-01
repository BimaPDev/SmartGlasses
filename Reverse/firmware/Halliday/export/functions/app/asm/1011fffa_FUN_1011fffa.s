; FUN_1011fffa @ 0x1011fffa size=32
  push {r3,lr}
  mov r2,r0
  bl 0x1007ddd0
  uxtb r0,r0
  cmp r0,#0x1
  bhi 0x10120018
  ldr r3,[r2,#0x0]
  ldr r2,[r3,#0x0]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x8000000
  orr.w r1,r3,r1, lsl #0x1b
  str r1,[r2,#0x0]
  pop {r3,pc}
