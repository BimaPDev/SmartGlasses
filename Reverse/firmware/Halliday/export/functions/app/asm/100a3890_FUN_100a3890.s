; FUN_100a3890 @ 0x100a3890 size=32
  push {r4,lr}
  mov r4,r1
  ldr r0,[0x100a38b0]
  bl 0x10112e84
  cbz r0,0x100a38ae
  ldr r3,[r0,#0x8]
  cbz r4,0x100a38aa
  ldr r3,[r3,#0x0]
  cbz r3,0x100a38ae
  pop.w {r4,lr}
  bx r3
  ldr r3,[r3,#0x4]
  b 0x100a38a2
  pop {r4,pc}
