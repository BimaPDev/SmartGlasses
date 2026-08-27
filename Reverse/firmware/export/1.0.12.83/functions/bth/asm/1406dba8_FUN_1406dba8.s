; FUN_1406dba8 @ 0x1406dba8 size=46
  push {r4,lr}
  ldrh r3,[r0,#0xa]
  mov r4,r0
  cbz r3,0x1406dbc6
  mov r1,lr
  ldr r0,[r0,#0x4]
  movs r2,#0x76
  bl 0x14075b28
  sub.w r0,r4,#0xc
  pop.w {r4,lr}
  b.w 0x14074168
  ldr r0,[r0,#0x4]
  bl 0x14078458
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x14074168
