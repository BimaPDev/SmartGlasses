; FUN_100deb94 @ 0x100deb94 size=22
  ldr r2,[0x100debac]
  mov r3,r0
  ldr r0,[r2,#0x0]
  cbnz r0,0x100deb9e
  bx lr
  ldrb r2,[r0,#0x0]
  cmp.w r3,r2, lsr #0x2
  beq 0x100deb9c
  ldr r0,[r0,#0xc]
  b 0x100deb9a
