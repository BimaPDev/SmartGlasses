; FUN_1011f206 @ 0x1011f206 size=60
  push {r4,r5,lr}
  ldr r4,[r0,#0x10]
  adds r5,r1,#0x1
  ldr r0,[r4,#0x0]
  ldr r4,[r4,#0x4]
  add.w r0,r0,r5, lsl #0x8
  cmp r4,r1
  bls 0x1011f23c
  mov.w r4,#0x20
  mrs r1,basepri
  msr basepri_max,r4
  isb #0xf
  str r2,[r0,#0x8]
  str r3,[r0,#0x10]
  ldr r3,[sp,#0xc]
  str r3,[r0,#0x18]
  msr basepri,r1
  isb #0xf
  movs r0,#0x0
  pop {r4,r5,pc}
  mvn r0,#0x15
  b 0x1011f23a
