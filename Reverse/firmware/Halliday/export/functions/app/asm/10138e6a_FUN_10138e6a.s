; FUN_10138e6a @ 0x10138e6a size=32
  push {r4,r5,r6,lr}
  movs r5,#0xc
  mov r4,r0
  movs r6,#0x0
  mla r5,r5,r1,r0
  cmp r4,r5
  bne 0x10138e7c
  pop {r4,r5,r6,pc}
  ldr r0,[r4,#0x8]
  cbz r0,0x10138e86
  bl 0x100eb908
  str r6,[r4,#0x8]
  adds r4,#0xc
  b 0x10138e76
