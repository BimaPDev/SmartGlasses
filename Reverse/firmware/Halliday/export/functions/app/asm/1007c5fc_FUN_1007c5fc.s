; FUN_1007c5fc @ 0x1007c5fc size=28
  ldr r1,[0x1007c618]
  movs r3,#0xf
  mov r2,r1
  push {r4,lr}
  ldrb.w r4,[r1,r3,lsl #0x2]
  cmp r4,r0
  ble 0x1007c610
  subs r3,#0x1
  bne 0x1007c604
  add.w r3,r2,r3, lsl #0x2
  ldrh r0,[r3,#0x2]
  pop {r4,pc}
