; FUN_2c4df32a @ 0x2c4df32a size=40
  push {r4,lr}
  ldr r3,[r0,#0x10]
  mov r4,r0
  cbz r3,0x2c4df342
  mov r1,r0
  ldr.w r3,[r1],#0x10
  ldr.w r0,[r3,#-0xc]
  add r0,r4
  bl 0x2c4de692
  ldr r3,[r4,#0x0]
  ldr.w r0,[r3,#-0xc]
  add r0,r4
  pop.w {r4,lr}
  b.w 0x2c4dd094
