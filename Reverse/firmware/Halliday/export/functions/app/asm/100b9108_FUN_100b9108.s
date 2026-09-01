; FUN_100b9108 @ 0x100b9108 size=68
  movs r2,#0x0
  push {r4,lr}
  add.w r3,r0,#0x36
  ldrb.w r4,[r3,r2,lsl #0x1]
  cmp r4,r1
  bne 0x100b9122
  add.w r0,r0,r2, lsl #0x1
  ldrb.w r0,[r0,#0x37]
  pop {r4,pc}
  adds r2,#0x1
  cmp r2,#0x8
  bne 0x100b9110
  ldr r3,[0x100b914c]
  ldr r0,[0x100b9150]
  ldr r2,[0x100b9154]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x8e0000
  mov r3,r1
  orr r0,r0,#0x31
  ldr r1,[0x100b9158]
  bl 0x100a5b78
  mov.w r0,#0xffffffff
  b 0x100b9120
