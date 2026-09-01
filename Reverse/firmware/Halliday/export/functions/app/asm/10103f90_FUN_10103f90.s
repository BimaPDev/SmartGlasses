; FUN_10103f90 @ 0x10103f90 size=108
  ldr r3,[r0,#0x14]
  ldr r2,[r0,#0x8]
  push {r4,r5,r6,lr}
  ldr r4,[r0,#0x28]
  subs r2,r2,r3
  ldr.w r3,[r4,r2,lsl #0x2]
  mov r6,r0
  ldr r5,[r0,#0x4]
  add.w r4,r4,r2, lsl #0x2
  cbnz r3,0x10103fb4
  b 0x10103fba
  add.w r4,r3,#0xc
  beq 0x10103fea
  ldr r3,[r3,#0xc]
  cbz r3,0x10103fba
  ldr r2,[r3,#0x0]
  cmp r2,r5
  ble 0x10103faa
  ldrd r2,r3,[r6,#0x30]
  cmp r3,r2
  bge 0x10103fe0
  ldr r2,[r6,#0x2c]
  adds r1,r3,#0x1
  str r1,[r6,#0x34]
  ldr r0,[r6,#0x1c]
  ldr r1,[r6,#0x20]
  lsls r6,r3,#0x4
  str r5,[r2,r6]
  add.w r3,r2,r3, lsl #0x4
  ldr r2,[r4,#0x0]
  strd r1,r0,[r3,#0x4]
  str r2,[r3,#0xc]
  str r3,[r4,#0x0]
  pop {r4,r5,r6,pc}
  ldr r0,[0x10103ffc]
  bl 0x101188d0
  ldr r3,[r6,#0x34]
  b 0x10103fc2
  ldr r1,[r3,#0x8]
  ldr r2,[r3,#0x4]
  ldrd r4,r0,[r6,#0x1c]
  add r1,r4
  add r2,r0
  strd r2,r1,[r3,#0x4]
  pop {r4,r5,r6,pc}
