; FUN_10136d20 @ 0x10136d20 size=90
  push {r4,r5,lr}
  mov r4,r1
  sub sp,#0x14
  cbz r0,0x10136d36
  bl 0x10136574
  mov r5,r0
  cbnz r0,0x10136d3c
  movs r0,#0x0
  add sp,#0x14
  pop {r4,r5,pc}
  bl 0x10136580
  b 0x10136d2c
  add.w r3,sp,#0xf
  str r3,[sp,#0x0]
  add.w r2,sp,#0xd
  add.w r3,sp,#0xe
  add r1,sp,#0xc
  bl 0x100d5748
  cbnz r0,0x10136d72
  cbz r4,0x10136d72
  ldrb.w r3,[sp,#0xd]
  ldrb.w r2,[sp,#0xc]
  lsls r3,r3,#0x2
  orr.w r3,r3,r2, lsl #0x4
  ldrb.w r2,[sp,#0xf]
  orrs r3,r2
  ldrb.w r2,[sp,#0xe]
  orr.w r3,r3,r2, lsl #0x1
  strb r3,[r4,#0x0]
  mov r0,r5
  bl 0x100d55bc
  b 0x10136d32
