; FUN_10138e8a @ 0x10138e8a size=32
  push {r4,r5,r6,lr}
  movs r5,#0x1c
  mov r4,r0
  movs r6,#0x0
  mla r5,r5,r1,r0
  cmp r4,r5
  bne 0x10138e9c
  pop {r4,r5,r6,pc}
  ldr r0,[r4,#0x14]
  cbz r0,0x10138ea6
  bl 0x10139058
  str r6,[r4,#0x14]
  adds r4,#0x1c
  b 0x10138e96
