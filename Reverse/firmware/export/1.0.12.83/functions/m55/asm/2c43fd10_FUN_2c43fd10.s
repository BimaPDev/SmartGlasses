; FUN_2c43fd10 @ 0x2c43fd10 size=34
  push {r0,r1,r2,r4,r5,r6,lr}
  cmp r1,#0xef
  cmp r9,r10
  bmi 0x2c43fcc6
  ldr r7,[r2,#0x4c]
  ldr r3,[r5,#0x14]
  lsrs r6,r7,#0xa
  bkpt 0x43
  add r6,sp,#0x190
  subs r3,#0xe9
  str r6,[sp,#0x14]
  str r4,[r6,#0x38]
  ldr r2,[r5,#0x10]
  ldc p9,cr0,[r2,#0x25c]!
  b.w 0x2b46d5ce
