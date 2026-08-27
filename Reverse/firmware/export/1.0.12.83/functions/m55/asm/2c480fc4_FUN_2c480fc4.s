; FUN_2c480fc4 @ 0x2c480fc4 size=40
  push {r4,r5,r6,r7,r8,lr}
  ldr r7,[0x2c481014]
  sub sp,#0x10
  ldr r3,[0x2c481018]
  mov r8,r0
  ldrb.w r2,[r7,#0x28]
  mov r6,r1
  ldr r4,[0x2c48101c]
  movw r1,#0x187
  str r3,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c481020]
  strd r4,r2,[sp,#0x4]
  ldr r2,[0x2c481024]
  bl 0x2c673d88
