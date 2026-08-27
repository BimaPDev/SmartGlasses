; FUN_2c487804 @ 0x2c487804 size=44
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  ldr r0,[0x2c487afc]
  sub sp,#0x28
  ldr.w r9,[0x2c487b7c]
  movs r1,#0xb5
  ldr r6,[0x2c487b00]
  ldr r3,[0x2c487b04]
  ldr r2,[0x2c487b08]
  ldr r7,[0x2c487b0c]
  strd r0,r9,[sp,#0x0]
  ldr r0,[0x2c487b10]
  subs r7,r7,r6
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x24]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c673d88
