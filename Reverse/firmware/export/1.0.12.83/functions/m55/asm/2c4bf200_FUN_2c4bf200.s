; FUN_2c4bf200 @ 0x2c4bf200 size=74
  cmp r0,#0x1f
  lsr.w r1,r0,#0x4
  push {r3,lr}
  bhi 0x2c4bf23c
  lsls r2,r0,#0x1c
  and r3,r0,#0xf
  bmi 0x2c4bf242
  ldr r2,[0x2c4bf24c]
  ldr.w r2,[r2,r1,lsl #0x2]
  add.w r2,r2,r3, lsl #0x5
  ldr.w r0,[r2,#0x10c]
  ldr.w r1,[r2,#0x108]
  ubfx r0,r0,#0x0,#0xc
  mov r3,r1
  cbz r3,0x2c4bf23a
  ldrd r3,r2,[r3,#0x8]
  ubfx r2,r2,#0x0,#0xc
  cmp r1,r3
  add r0,r2
  bne 0x2c4bf22a
  pop {r3,pc}
  ldr r0,[0x2c4bf250]
  bl 0x2c673ca8
  mov r2,r3
  ldr r0,[0x2c4bf254]
  bl 0x2c673ca8
