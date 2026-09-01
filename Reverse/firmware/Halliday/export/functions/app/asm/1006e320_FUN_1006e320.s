; FUN_1006e320 @ 0x1006e320 size=96
  push {r4,r5,r6,lr}
  ldr r2,[r0,#0x4]
  ldrb r0,[r2,#0x8]
  mov.w r3,#0x20
  mrs r5,basepri
  msr basepri_max,r3
  isb #0xf
  ldrb r3,[r2,#0x8]
  cmp r3,#0x3
  beq 0x1006e35e
  ldr r3,[r2,#0x4]
  add.w r3,r3,#0x220
  str.w r1,[r3,r0,lsl #0x2]
  msr basepri,r5
  isb #0xf
  ldrb r3,[r2,#0x8]
  cmp r3,#0x3
  bne 0x1006e35a
  movs r0,#0xc8
  bl 0x1011598c
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  movs r3,#0x0
  movs r6,#0x1
  ldr r4,[0x1006e380]
  lsl.w r0,r6,r3
  tst r0,r1
  ittt ne
  ldr.ne.w r0,[r4,r3,lsl #0x2]
  bic.ne r0,r0,#0x10000
  str.ne.w r0,[r4,r3,lsl #0x2]
  adds r3,#0x1
  cmp r3,#0x5
  bne 0x1006e364
  b 0x1006e346
