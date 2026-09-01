; FUN_10069234 @ 0x10069234 size=26
  push {r4,lr}
  ldr r0,[0x10069250]
  add r2,r1
  cmp r1,r2
  bne 0x10069242
  movs r0,#0x0
  pop {r4,pc}
  ldrb.w r3,[r1],#0x1
  ldrh r4,[r0,#0x24]
  add r3,r4
  strh r3,[r0,#0x24]
  b 0x1006923a
