; FUN_2c63d77c @ 0x2c63d77c size=68
  push {r4,lr}
  sub sp,#0x8
  bls 0x2c63d798
  ldr r0,[0x2c63d7c0]
  movw r1,#0x1f1
  ldr r3,[0x2c63d7c4]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c63d7c8]
  bl 0x2c673d88
  add sp,#0x8
  pop {r4,pc}
  movs r2,#0x1
  ldr r4,[0x2c63d7cc]
  movs r3,#0x5
  mov r1,r2
  ldr.w r0,[r4,r0,lsl #0x2]
  bl 0x2c63d2cc
  cmp r0,#0x0
  beq 0x2c63d794
  bl 0x2c63bb94
  cmp r0,#0x0
  beq 0x2c63d794
  movs r0,#0x5
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c63b8cc
