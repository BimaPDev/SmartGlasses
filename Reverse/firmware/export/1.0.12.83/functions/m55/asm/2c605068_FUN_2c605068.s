; FUN_2c605068 @ 0x2c605068 size=40
  push {r4,lr}
  movs r2,#0x16
  movs r1,#0x0
  mov r4,r0
  bl 0x2c6033b4
  uxtb r0,r0
  cmp r0,#0x1
  beq 0x2c605086
  ldr r0,[r4,#0x8]
  cbz r0,0x2c605084
  ldrh r0,[r0,#0x10]
  rsbs r0,r0
  sxth r0,r0
  pop {r4,pc}
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c60460c
