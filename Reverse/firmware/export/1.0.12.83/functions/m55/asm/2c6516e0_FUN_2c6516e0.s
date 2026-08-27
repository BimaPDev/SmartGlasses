; FUN_2c6516e0 @ 0x2c6516e0 size=52
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r3
  mov r7,r2
  mov r5,r0
  mov r6,r1
  ldr r3,[0x2c651714]
  mov r2,r4
  mov r1,r7
  bl 0x2c6513b0
  mov r3,r4
  mov r2,r7
  mov r1,r6
  mov r0,r5
  bl 0x2c6515d4
  cbz r4,0x2c651710
  ldr r0,[r5,#0x0]
  mov r1,r4
  ldr r2,[sp,#0x18]
  add.w r0,r0,r6, lsl #0x2
  bl 0x2c651418
  mov r0,r5
  pop {r3,r4,r5,r6,r7,pc}
