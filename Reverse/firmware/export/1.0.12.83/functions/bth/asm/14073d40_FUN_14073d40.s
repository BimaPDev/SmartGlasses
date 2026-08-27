; FUN_14073d40 @ 0x14073d40 size=88
  push {r4,r5,r6,r7,r8,lr}
  ldr r5,[0x14073da4]
  sub sp,#0x8
  ldr r0,[r5,#0x0]
  cbz r0,0x14073d9e
  ldr r6,[0x14073da8]
  ldr r7,[0x14073dac]
  ldr.w r8,[0x14073db0]
  b 0x14073d64
  add.w r4,r5,r4, lsl #0x2
  ldr r3,[r4,#0x4]
  cbz r3,0x14073d8c
  blx r3
  ldr r0,[r5,#0x0]
  cbz r0,0x14073d9e
  clz r4,r0
  rsb.w r4,r4,#0x1f
  uxtb r4,r4
  cmp r4,#0x6
  bls 0x14073d56
  strd r4,r0,[sp,#0x0]
  mov r3,r6
  movs r2,#0xc6
  mov r1,r7
  movs r0,#0x44
  add.w r4,r5,r4, lsl #0x2
  bl 0x1402a64c
  mov r3,r6
  movs r2,#0xd4
  mov r1,r8
  movs r0,#0x42
  bl 0x1402a64c
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
