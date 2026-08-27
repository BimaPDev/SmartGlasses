; FUN_2c4f4d38 @ 0x2c4f4d38 size=46
  push {r4,lr}
  sub sp,#0x8
  cbz r0,0x2c4f4d54
  ldr r4,[r0,#0x50]
  add.w r1,r2,r1, lsl #0x8
  mov r0,r3
  ldr r2,[sp,#0x10]
  add r1,r4
  bl 0x2c674668
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
  ldr r4,[0x2c4f4d6c]
  mov.w r1,#0x198
  ldr r3,[0x2c4f4d70]
  movs r0,#0x4
  ldr r2,[0x2c4f4d74]
  str r4,[sp,#0x0]
  bl 0x2c673d88
