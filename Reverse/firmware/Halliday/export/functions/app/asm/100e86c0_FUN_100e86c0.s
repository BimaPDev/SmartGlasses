; FUN_100e86c0 @ 0x100e86c0 size=174
  push {r4,r5,r6,lr}
  cbnz r0,0x100e86e2
  ldr r2,[0x100e8770]
  ldr r3,[0x100e8774]
  ldr r0,[0x100e8778]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x100e877c]
  ldr r1,[0x100e8780]
  bl 0x100a5b78
  mov.w r0,#0xffffffff
  pop {r4,r5,r6,pc}
  ldr r4,[r0,#0x8]
  ldr r5,[r0,#0x3c]
  add r4,r2
  cmp r4,r5
  ldr r3,[r0,#0xc]
  bhi 0x100e8730
  ldr r5,[r0,#0x0]
  ldr.w r6,[r3,r5,lsl #0x2]
  str r4,[r0,#0x8]
  cbnz r6,0x100e871c
  str.w r1,[r3,r5,lsl #0x2]
  ldr r1,[r0,#0x0]
  cmp r2,#0x1
  add r1,r2
  str r1,[r0,#0x4]
  bls 0x100e8712
  movs r1,#0x1
  mov.w r5,#0xffffffff
  cmp r1,r2
  ldr r4,[r0,#0x0]
  bne 0x100e8726
  ldr r3,[r0,#0x0]
  str.w r3,[r0,#0xc8]
  mov r0,r3
  b 0x100e86e0
  ldr r4,[r0,#0x4]
  str r4,[r0,#0x0]
  str.w r1,[r3,r4,lsl #0x2]
  b 0x100e86fc
  add r4,r1
  str.w r5,[r3,r4,lsl #0x2]
  adds r1,#0x1
  b 0x100e870c
  ldr r4,[r0,#0x4]
  str r4,[r0,#0x0]
  add r4,r2
  cmp r5,r4
  str r4,[r0,#0x4]
  itt ls
  mov.ls r4,#0x0
  strd.ls r4,r2,[r0,#0x0]
  ldr r4,[r0,#0x0]
  cmp r2,#0x1
  str.w r1,[r3,r4,lsl #0x2]
  bls 0x100e8758
  movs r1,#0x1
  mov.w r5,#0xffffffff
  cmp r1,r2
  ldr r4,[r0,#0x0]
  bne 0x100e8764
  ldr r3,[r0,#0x3c]
  ldr r2,[r0,#0x8]
  cmp r2,r3
  bcs 0x100e8712
  str r3,[r0,#0x8]
  b 0x100e8712
  add r4,r1
  str.w r5,[r3,r4,lsl #0x2]
  adds r1,#0x1
  b 0x100e8752
