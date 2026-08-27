; FUN_2c5458f0 @ 0x2c5458f0 size=24
  push {r4,lr}
  str r2,[r0,#0x0]
  mov r4,r0
  ldr.w r1,[r3,#0x8]!
  adds r3,#0x8
  cmp r1,r3
  beq 0x2c545906
  movs r0,#0x0
  cdp2 p6,0xb,cr4,cr13,cr0,0x1
  pop {r4,pc}
