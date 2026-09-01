; FUN_100b9094 @ 0x100b9094 size=98
  movs r3,#0x0
  push {r4,r5,r6,lr}
  add.w r6,r0,#0x36
  ldrb.w r4,[r6,r3,lsl #0x1]
  cmp r4,r1
  bne 0x100b90b0
  add.w r0,r0,r3, lsl #0x1
  strb.w r2,[r0,#0x37]
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  adds r3,#0x1
  cmp r3,#0x8
  bne 0x100b909c
  movs r4,#0x0
  ldrb.w r5,[r6,r4,lsl #0x1]
  cbnz r5,0x100b90cc
  add.w r4,r0,r4, lsl #0x1
  strb.w r1,[r4,#0x36]
  strb.w r2,[r4,#0x37]
  b 0x100b90ac
  adds r4,#0x1
  cmp r4,#0x8
  bne 0x100b90b8
  ldr r3,[0x100b90f8]
  ldr r0,[0x100b90fc]
  ldr r2,[0x100b9100]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x7f0000
  mov r3,r1
  orr r0,r0,#0x31
  ldr r1,[0x100b9104]
  bl 0x100a5b78
  mov.w r0,#0xffffffff
  b 0x100b90ae
