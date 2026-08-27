; FUN_2c614f94 @ 0x2c614f94 size=42
  push {r4,r5,r6,lr}
  ldrb r4,[r1,#0x10]
  ldrh.w r5,[sp,#0x10]
  cmp r4,#0x2
  ldrh.w r6,[sp,#0x14]
  bls 0x2c614fbc
  ldrsh.w r4,[r1,#0x4]
  cbz r4,0x2c614fbc
  cmp r5,r6
  beq 0x2c614fbc
  ldr r4,[r0,#0x10]
  strd r5,r6,[sp,#0x10]
  mov r12,r4
  pop.w {r4,r5,r6,lr}
  bx r12
  pop {r4,r5,r6,pc}
