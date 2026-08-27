; FUN_2c5f6a50 @ 0x2c5f6a50 size=34
  cbz r0,0x2c5f6a70
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  ldr r5,[0x2c5f6a74]
  cbz r0,0x2c5f6a66
  cmp r0,r5
  beq 0x2c5f6a66
  ldr r3,[r4,#0x0]
  ldr r3,[r3,#0x8]
  blx r3
  movs r3,#0x0
  strd r5,r3,[r4,#0x4]
  str r3,[r4,#0xc]
  pop {r3,r4,r5,pc}
  bx lr
