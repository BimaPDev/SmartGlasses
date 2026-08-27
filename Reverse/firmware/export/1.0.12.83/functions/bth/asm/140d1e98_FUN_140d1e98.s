; FUN_140d1e98 @ 0x140d1e98 size=28
  ldr r3,[r0,#0x4]
  push {r4,lr}
  cmp r2,r3
  bcs 0x140d1eac
  ldr r4,[r0,#0x0]
  ldrb r4,[r4,r2]
  cmp r4,r1
  bne 0x140d1eb0
  adds r2,#0x1
  b 0x140d1e9c
  mov.w r2,#0xffffffff
  mov r0,r2
  pop {r4,pc}
