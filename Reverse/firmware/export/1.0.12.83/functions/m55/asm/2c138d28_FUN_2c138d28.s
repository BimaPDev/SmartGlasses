; FUN_2c138d28 @ 0x2c138d28 size=80
  push {r4,lr}
  ldr r2,[r0,#0x40]
  mov r3,r0
  ldrsb r2,[r2,r1]
  cmp r2,#0x0
  blt 0x2c138d62
  movs r0,#0x1
  lsr.w r12,r2,#0x5
  ldr r4,[0x2c138d7c]
  and r2,r2,#0x1f
  lsl.w r2,r0,r2
  add.w r12,r12,#0x60
  str.w r2,[r4,r12,lsl #0x2]
  ldr r2,[r3,#0x40]
  ldrsb r2,[r2,r1]
  cmp r2,#0x0
  blt 0x2c138d62
  and r12,r2,#0x1f
  lsl.w r0,r0,r12
  lsrs r2,r2,#0x5
  str.w r0,[r4,r2,lsl #0x2]
  movs r0,#0x2c
  ldr r2,[r3,#0x38]
  mla r2,r0,r1,r2
  ldr r0,[r2,#0x1c]
  cbz r0,0x2c138d76
  mov r0,r1
  ldr r3,[r3,#0x1c]
  blx r3
  movs r0,#0x0
  pop {r4,pc}
