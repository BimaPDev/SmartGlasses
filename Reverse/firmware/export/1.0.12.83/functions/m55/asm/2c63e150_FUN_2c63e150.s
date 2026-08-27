; FUN_2c63e150 @ 0x2c63e150 size=24
  push {r3,r4,r5,lr}
  ldr r3,[0x2c63e168]
  ldr r4,[r3,#0x0]
  cbz r4,0x2c63e166
  mov r5,r0
  ldr r3,[r4,#0x0]
  mov r0,r5
  blx r3
  ldr r4,[r4,#0x4]
  cmp r4,#0x0
  bne 0x2c63e15a
  pop {r3,r4,r5,pc}
