; FUN_1009b000 @ 0x1009b000 size=44
  push {r3,lr}
  ldr r3,[0x1009b02c]
  ldr r3,[r3,#0x0]
  and r3,r3,#0xff00ff
  bic r3,r3,#0xfd0000
  cmp.w r3,#0x20000
  bne 0x1009b02a
  cbnz r0,0x1009b01c
  bl 0x1008bbb4
  ldr r0,[r0,#0x0]
  movs r2,#0x0
  pop.w {r3,lr}
  movs r1,#0x4
  ldr r0,[r0,#0x4c]
  b.w 0x1009af58
  pop {r3,pc}
