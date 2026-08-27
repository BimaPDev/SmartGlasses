; FUN_2c575494 @ 0x2c575494 size=42
  push {r4,r5,r6,lr}
  mov r5,r2
  sub sp,#0x20
  ldr r3,[0x2c575514]
  mov r6,r1
  ldr r2,[0x2c575518]
  mov r4,r0
  movs r0,#0x4
  strd r1,r5,[sp,#0x8]
  ldr r1,[0x2c57551c]
  strd r2,r3,[sp,#0x0]
  movs r2,#0xaa
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x1c]
  mov.w r1,#0x0
  ldr r1,[0x2c575520]
  bl 0x2c62c82c
