; FUN_2c511308 @ 0x2c511308 size=72
  push {r4,r5,r6,lr}
  sub sp,#0x8
  mov r6,r0
  mov r5,r1
  mov r4,r2
  bl 0x2c50f968
  cbz r0,0x2c51133a
  cbz r5,0x2c511336
  movw r3,#0x2c2c
  add.w r4,r4,r4, lsl #0x1
  add r3,r6
  add.w r2,r3,r4, lsl #0x2
  ldr.w r0,[r3,r4,lsl #0x2]
  ldr r1,[r2,#0x4]
  ldr r3,[r2,#0x8]
  str r0,[r5,#0x0]
  str r1,[r5,#0x4]
  str r3,[r5,#0x8]
  add sp,#0x8
  pop {r4,r5,r6,pc}
  ldr r2,[0x2c511354]
  movs r0,#0x3
  ldr r3,[0x2c511358]
  ldr r1,[0x2c51135c]
  strd r3,r2,[sp,#0x0]
  ldr r3,[0x2c511360]
  movw r2,#0x363
  bl 0x2c62c82c
