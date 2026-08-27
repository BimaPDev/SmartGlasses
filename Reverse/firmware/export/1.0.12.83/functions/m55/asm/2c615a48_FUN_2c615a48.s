; FUN_2c615a48 @ 0x2c615a48 size=50
  push {r4,r5,r6,lr}
  bl 0x2c602400
  mov r5,r0
  bl 0x2c6041d4
  bl 0x2c615964
  mov r4,r0
  movs r1,#0x1
  mov r0,r5
  bl 0x2c6041dc
  ldrsb.w r3,[r4,#0x2]
  ldr r5,[0x2c615a7c]
  subs r3,#0x1
  ldrh r2,[r4,#0x0]
  ldr r1,[0x2c615a80]
  ldr.w r3,[r5,r3,lsl #0x2]
  pop.w {r4,r5,r6,lr}
  b.w 0x2c638814
