; FUN_1013c736 @ 0x1013c736 size=32
  movs r3,#0x0
  push {r4,lr}
  ldrd r4,r2,[r0,#0x9c]
  subs r2,#0x4
  cmp r3,r2
  bcc 0x1013c74a
  movs r0,#0x0
  str r3,[r1,#0x0]
  pop {r4,pc}
  adds r0,r4,r3
  ldrb r0,[r0,#0x4]
  cmp r0,#0xaa
  bne 0x1013c744
  adds r3,#0x1
  b 0x1013c740
