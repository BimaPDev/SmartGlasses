; FUN_101247a0 @ 0x101247a0 size=34
  push {r4,lr}
  mov r4,r0
  bl 0x10087650
  movs r2,#0x64
  ldr r3,[r0,#0x0]
  movs r0,#0x0
  ldrb r3,[r3,#0x19]
  rsb.w r3,r3,#0x64
  cbnz r4,0x101247b8
  pop {r4,pc}
  add r0,r4
  muls r4,r3
  sdiv r4,r4,r2
  b 0x101247b4
