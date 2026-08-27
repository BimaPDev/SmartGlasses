; FUN_2c45d8a0 @ 0x2c45d8a0 size=20
  strh r0,[r3,#0x38]
  orrs.w r1,r9,r11, lsl #0x13
  svc 0xb7
  strd pc,r7,[r7,#-0x2dc]!
  adr r2,[0x2c45d40c]
  push {r0,r1,r2,r5,r6,lr}
  lsrs r1,r4,#0x4
  b 0x2c45d3d0
