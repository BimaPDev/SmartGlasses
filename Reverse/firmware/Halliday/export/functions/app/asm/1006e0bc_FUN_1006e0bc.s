; FUN_1006e0bc @ 0x1006e0bc size=82
  push {r4,r5,lr}
  ldr r3,[r0,#0x4]
  ldrb r2,[r3,#0x8]
  mov.w r0,#0x20
  mrs r4,basepri
  msr basepri_max,r0
  isb #0xf
  ldrb r0,[r3,#0x8]
  cmp r0,#0x3
  beq 0x1006e0f0
  ldr r3,[r3,#0x4]
  add.w r3,r3,#0x230
  ldr.w r3,[r3,r2,lsl #0x2]
  str r3,[r1,#0x0]
  msr basepri,r4
  isb #0xf
  movs r0,#0x0
  pop {r4,r5,pc}
  movs r3,#0x0
  ldr r5,[0x1006e110]
  str r3,[r1,#0x0]
  ldr.w r2,[r5,r3,lsl #0x2]
  ldr r0,[r1,#0x0]
  ubfx r2,r2,#0x10,#0x1
  lsls r2,r3
  adds r3,#0x1
  orrs r2,r0
  cmp r3,#0x5
  str r2,[r1,#0x0]
  bne 0x1006e0f6
  b 0x1006e0e4
