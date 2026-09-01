; FUN_100fad58 @ 0x100fad58 size=34
  push {r4,r5,r6,lr}
  ldr r6,[r0,#0x14]
  mov r4,r0
  mov r5,r1
  cbz r6,0x100fad70
  movs r3,#0x0
  mov r2,r3
  blx r6
  cbnz r0,0x100fad76
  movs r0,#0x0
  str r5,[r4,#0x8]
  pop {r4,r5,r6,pc}
  ldr r3,[r0,#0x4]
  cmp r3,r1
  bcs 0x100fad6a
  movs r0,#0x55
  pop {r4,r5,r6,pc}
