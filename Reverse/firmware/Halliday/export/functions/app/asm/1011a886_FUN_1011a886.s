; FUN_1011a886 @ 0x1011a886 size=40
  push {r4,lr}
  mov r4,r0
  bl 0x1005608c
  cmp r4,#0x7
  bhi 0x1011a8ac
  ldr r2,[r0,#0x4c]
  mov.w r0,#0x12c
  ldr r3,[r2,#0x8]
  bic r3,r3,#0xe00000
  orr.w r3,r3,r4, lsl #0x15
  str r3,[r2,#0x8]
  pop.w {r4,lr}
  b.w 0x1011a866
  pop {r4,pc}
