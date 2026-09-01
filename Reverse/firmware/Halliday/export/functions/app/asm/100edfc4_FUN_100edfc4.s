; FUN_100edfc4 @ 0x100edfc4 size=44
  push {r3,r4,r5,lr}
  mov.w r1,#0xffffffff
  ldr r0,[0x100edff0]
  bl 0x1011dbf4
  ldr r4,[0x100edff4]
  add.w r5,r4,#0x1c
  ldr r3,[r4,#0x0]
  cbnz r3,0x100edfe4
  pop.w {r3,r4,r5,lr}
  ldr r0,[0x100edff0]
  b.w 0x10113e2c
  mov.w r1,#0xffffffff
  mov r0,r5
  bl 0x1011dbde
  b 0x100edfd6
