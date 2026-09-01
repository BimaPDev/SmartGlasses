; FUN_1007ab70 @ 0x1007ab70 size=84
  subs r3,r0,#0x0
  push {r4,lr}
  ldr r2,[0x1007abc4]
  blt 0x1007abae
  movw r1,#0x44b
  cmp r3,r1
  ble 0x1007ab84
  ldrh r0,[r2,#0xc]
  pop {r4,pc}
  movs r1,#0x64
  sdiv r1,r3,r1
  cmp r1,#0xa
  bne 0x1007abb2
  ldrh.w r0,[r2,#0x58]
  ldrh r2,[r2,#0xc]
  cmp r0,r2
  bcs 0x1007ab82
  movs r4,#0x64
  subs r1,r2,r0
  udiv r2,r3,r4
  mls r3,r4,r2,r3
  muls r3,r1
  udiv r3,r3,r4
  add r0,r3
  b 0x1007ab82
  movs r1,#0x0
  mov r3,r1
  add.w r0,r2,r1, lsl #0x1
  add.w r2,r2,r1, lsl #0x1
  ldrh.w r0,[r0,#0x44]
  ldrh.w r2,[r2,#0x46]
  b 0x1007ab94
