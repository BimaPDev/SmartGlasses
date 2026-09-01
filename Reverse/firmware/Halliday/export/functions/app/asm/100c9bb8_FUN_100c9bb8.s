; FUN_100c9bb8 @ 0x100c9bb8 size=26
  push {r3,r4,r5,lr}
  mov r5,r0
  ldr r3,[0x100c9bd4]
  ldr r4,[r3,#0x0]
  cbnz r4,0x100c9bc4
  pop {r3,r4,r5,pc}
  ldr r3,[r4,#0x8]
  cbz r3,0x100c9bce
  mov r0,r5
  ldrb r1,[r5,#0xc]
  blx r3
  ldr r4,[r4,#0x2c]
  b 0x100c9bc0
