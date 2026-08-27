; FUN_2c4bedd8 @ 0x2c4bedd8 size=64
  cmp r0,#0x1f
  lsr.w r1,r0,#0x4
  push {r3,lr}
  bhi 0x2c4bee0c
  lsls r3,r0,#0x1c
  and r2,r0,#0xf
  bmi 0x2c4bee12
  ldr r0,[0x2c4bee18]
  movs r3,#0x1
  ldr.w r1,[r0,r1,lsl #0x2]
  lsls r3,r2
  add.w r2,r1,r2, lsl #0x5
  uxtb r3,r3
  ldr.w r0,[r2,#0x110]
  bic r0,r0,#0x1
  str.w r0,[r2,#0x110]
  str r3,[r1,#0x8]
  str r3,[r1,#0x10]
  pop {r3,pc}
  ldr r0,[0x2c4bee1c]
  bl 0x2c673ca8
  ldr r0,[0x2c4bee20]
  bl 0x2c673ca8
