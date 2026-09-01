; FUN_1011dd4a @ 0x1011dd4a size=42
  movs r3,#0x0
  push {r0,r1,r2,lr}
  strd r3,r3,[sp,#0x0]
  bics r3,r1,#0x2
  beq 0x1011dd60
  movs r0,#0x0
  add sp,#0xc
  pop.w pc
  mov r2,sp
  movs r1,#0x3
  ldr r0,[r0,#0xc]
  bl 0x1011dcde
  ldr r3,[sp,#0x4]
  cmp r3,#0x0
  beq 0x1011dd58
  ldr r0,[r3,#0x38]
  b 0x1011dd5a
