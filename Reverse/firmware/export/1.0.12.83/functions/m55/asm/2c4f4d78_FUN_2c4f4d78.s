; FUN_2c4f4d78 @ 0x2c4f4d78 size=46
  push {r4,lr}
  sub sp,#0x8
  cbz r0,0x2c4f4d94
  add.w r12,r2,r1, lsl #0x8
  ldr r0,[r0,#0x50]
  ldr r2,[sp,#0x10]
  mov r1,r3
  add r0,r12
  bl 0x2c674668
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
  ldr r4,[0x2c4f4dac]
  mov.w r1,#0x1d6
  ldr r3,[0x2c4f4db0]
  movs r0,#0x4
  ldr r2,[0x2c4f4db4]
  str r4,[sp,#0x0]
  bl 0x2c673d88
