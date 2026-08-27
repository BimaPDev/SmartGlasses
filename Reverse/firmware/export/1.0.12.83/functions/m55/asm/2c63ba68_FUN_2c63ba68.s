; FUN_2c63ba68 @ 0x2c63ba68 size=36
  push {r4,r5,r6,lr}
  ldr r5,[0x2c63bad8]
  sub sp,#0x8
  ldrb r3,[r5,#0x0]
  cmp r3,r0
  bne 0x2c63ba78
  add sp,#0x8
  pop {r4,r5,r6,pc}
  ldr r1,[0x2c63badc]
  mov r4,r0
  ldr r3,[0x2c63bae0]
  ldr r2,[0x2c63bae4]
  strd r1,r0,[sp,#0x0]
  movs r1,#0xa8
  movs r0,#0x4
  bl 0x2c673d88
