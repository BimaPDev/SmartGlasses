; FUN_100f62e4 @ 0x100f62e4 size=104
  push {r4,r5,r6,r7,r8,lr}
  ldrh r4,[r3,#0x8]
  mov r5,r3
  mov r7,r0
  mov r6,r1
  mov r8,r2
  bl 0x10138cb0
  cmp r4,r0
  bge 0x100f632e
  ldrd r12,r0,[r8,#0x0]
  movs r1,#0x4
  ldrh r3,[r5,#0x8]
  ldr r4,[r5,#0xc]
  rsb r2,r3,r3, lsl #0x3
  str.w r12,[r4,r2,lsl #0x2]
  add.w r2,r4,r2, lsl #0x2
  str r0,[r2,#0x4]
  ldrd r4,r0,[r7,#0x0]
  strd r4,r0,[r2,#0x8]
  adds r3,#0x1
  ldrd r4,r0,[r6,#0x0]
  strd r4,r0,[r2,#0x10]
  strh r3,[r5,#0x8]
  movs r0,#0x0
  str r1,[r2,#0x18]
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r2,[0x100f634c]
  ldr r3,[0x100f6350]
  ldr r0,[0x100f6354]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x100f6358]
  ldr r1,[0x100f635c]
  bl 0x100a5b78
  movs r0,#0x0
  pop.w {r4,r5,r6,r7,r8,pc}
