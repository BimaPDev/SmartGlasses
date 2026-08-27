; FUN_140d1676 @ 0x140d1676 size=24
  ldr r3,[r0,#0x0]
  push {r4,lr}
  ldr r3,[r3,#0x24]
  mov r4,r0
  blx r3
  adds r3,r0,#0x1
  ittt ne
  ldr.ne r3,[r4,#0x8]
  ldr.ne.w r0,[r3],#0x4
  str.ne r3,[r4,#0x8]
  pop {r4,pc}
