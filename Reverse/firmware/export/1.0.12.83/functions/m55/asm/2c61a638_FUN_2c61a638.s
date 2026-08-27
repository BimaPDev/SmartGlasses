; FUN_2c61a638 @ 0x2c61a638 size=44
  push {r4,lr}
  mov r4,r1
  movs r1,#0x14
  add.w r0,r4,#0x30
  bl 0x2c62c928
  ldrb.w r3,[r4,#0x3c]
  movs r2,#0x0
  mov.w r1,#0xffffffff
  bic r3,r3,#0xf
  strh r2,[r4,#0x2c]
  orr r3,r3,#0x9
  strd r1,r2,[r4,#0x24]
  strb.w r3,[r4,#0x3c]
  pop {r4,pc}
