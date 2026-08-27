; FUN_2c5efe08 @ 0x2c5efe08 size=42
  push {r3,r4,r5,lr}
  ldr r4,[r0,#0x0]
  mov r5,r0
  cbz r4,0x2c5efe1c
  mov r0,r4
  ldr r4,[r4,#0x8]
  bl 0x2c5efc00
  cmp r4,#0x0
  bne 0x2c5efe10
  movs r3,#0x0
  mov r1,r5
  ldr r0,[r5,#0x10]
  strb r3,[r5,#0x8]
  str r3,[r5,#0xc]
  strd r3,r3,[r5,#0x0]
  pop.w {r3,r4,r5,lr}
  b.w 0x2c5fee30
