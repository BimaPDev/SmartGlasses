; FUN_14057d48 @ 0x14057d48 size=28
  push {r4,lr}
  mov r4,r0
  ldrh.w r1,[r0,#0x54]
  adds r0,#0x48
  bl 0x14058860
  ldrb.w r3,[r4,#0x57]
  orr r3,r3,#0x2
  strb.w r3,[r4,#0x57]
  pop {r4,pc}
