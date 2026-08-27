; FUN_2c4f4db8 @ 0x2c4f4db8 size=48
  push {r4,lr}
  sub sp,#0x8
  cbz r0,0x2c4f4dd6
  mov r3,r1
  ldr r0,[r0,#0x50]
  mov.w r2,#0x100
  movs r1,#0xff
  add.w r0,r0,r3, lsl #0x8
  bl 0x2c674268
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
  ldr r4,[0x2c4f4df0]
  mov.w r1,#0x1f0
  ldr r3,[0x2c4f4df4]
  movs r0,#0x4
  ldr r2,[0x2c4f4df8]
  str r4,[sp,#0x0]
  bl 0x2c673d88
