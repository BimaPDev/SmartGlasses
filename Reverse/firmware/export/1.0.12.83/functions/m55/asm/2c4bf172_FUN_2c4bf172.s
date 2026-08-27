; FUN_2c4bf172 @ 0x2c4bf172 size=48
  push {r3,lr}
  bhi 0x2c4bf196
  lsls r3,r0,#0x1c
  and r2,r0,#0xf
  bmi 0x2c4bf19c
  ldr r3,[0x2c4bf1a4]
  movs r0,#0x1
  ldr.w r3,[r3,r1,lsl #0x2]
  lsls r0,r2
  ldr r2,[r3,#0x1c]
  ands r0,r2
  uxtb r0,r0
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
  ldr r0,[0x2c4bf1a8]
  bl 0x2c673ca8
  ldr r0,[0x2c4bf1ac]
  bl 0x2c673ca8
