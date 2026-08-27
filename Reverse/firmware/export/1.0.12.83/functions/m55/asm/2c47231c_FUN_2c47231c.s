; FUN_2c47231c @ 0x2c47231c size=92
  push {r4,r5,r6,r7,lr}
  mov r5,r2
  mov r4,r1
  sub sp,#0x1c
  mov r1,r3
  mov r7,r3
  bl 0x2c473450
  add.w r3,r5,r5, lsl #0x1
  lsls r6,r5,#0x1
  add.w r3,r4,r3, lsl #0x2
  ldr r2,[r3,#0x1c]
  cmp r2,r0
  bcc 0x2c472350
  subs r0,r2,r0
  str r0,[r3,#0x1c]
  add r5,r6
  add.w r4,r4,r5, lsl #0x2
  ldr r3,[r4,#0x20]
  subs r3,#0x1
  str r3,[r4,#0x20]
  add sp,#0x1c
  pop {r4,r5,r6,r7,pc}
  cmp r5,#0xb
  bhi 0x2c472380
  ldr r3,[0x2c472384]
  ldr.w r3,[r3,r5,lsl #0x2]
  str r2,[sp,#0x8]
  mov.w r1,#0x334
  ldr r2,[0x2c472388]
  strd r0,r3,[sp,#0xc]
  ldr r3,[0x2c47238c]
  movs r0,#0x4
  strd r3,r7,[sp,#0x0]
  ldr r3,[0x2c472390]
  bl 0x2c673d88
  ldr r3,[0x2c472394]
  b 0x2c47235a
