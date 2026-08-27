; FUN_2c63ab06 @ 0x2c63ab06 size=42
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0x14
  cbnz r0,0x2c63ab12
  add sp,#0x14
  pop {r4,r5,pc}
  ldrb r2,[r0,#0x2]
  ldrb r3,[r0,#0x1]
  ldr r1,[0x2c63addc]
  ldrb r0,[r0,#0x0]
  strd r3,r2,[sp,#0x8]
  strd r1,r0,[sp,#0x0]
  ldr r3,[0x2c63ade0]
  movw r1,#0x113
  ldr r2,[0x2c63ade4]
  movs r0,#0x4
  bl 0x2c673d88
