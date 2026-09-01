; FUN_101281b0 @ 0x101281b0 size=80
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  ldrd r6,r7,[r3,#0x0]
  mov r5,r3
  ldrd r9,r0,[sp,#0x24]
  mla r3,r2,r7,r6
  add.w r3,r1,r3, lsl #0x1
  ldrd r0,r1,[r0,#0x0]
  mla r8,r1,r9,r0
  ldr r0,[r5,#0x8]
  ldr r1,[sp,#0x20]
  adds r4,r0,#0x1
  subs r4,r4,r6
  add.w r8,r1,r8, lsl #0x1
  lsls r4,r4,#0x1
  lsls r6,r2,#0x1
  lsl.w r9,r9,#0x1
  ldr r2,[r5,#0xc]
  cmp r2,r7
  bge 0x101281ec
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  mov r1,r8
  mov r0,r3
  mov r2,r4
  bl 0x1011ea40
  mov r3,r0
  add r8,r9
  add r3,r6
  adds r7,#0x1
  b 0x101281e2
