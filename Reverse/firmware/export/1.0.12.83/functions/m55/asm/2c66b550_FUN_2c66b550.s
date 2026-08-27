; FUN_2c66b550 @ 0x2c66b550 size=34
  push {r4,lr}
  mov r4,r1
  ldrsh.w r1,[r1,#0xe]
  bl 0x2c6719c8
  cmp r0,#0x0
  itete ge
  ldr.ge r3,[r4,#0x54]
  ldrh.lt r3,[r4,#0xc]
  add.ge r3,r3,r0
  bic.lt r3,r3,#0x1000
  ite ge
  str.ge r3,[r4,#0x54]
  strh.lt r3,[r4,#0xc]
  pop {r4,pc}
