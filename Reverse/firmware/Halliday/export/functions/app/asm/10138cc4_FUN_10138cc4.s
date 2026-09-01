; FUN_10138cc4 @ 0x10138cc4 size=52
  push {r4,r5,r6,lr}
  ldrd r5,r0,[r0,#0x10]
  movs r4,#0x0
  subs r0,#0x1
  cmp r4,r0
  ble 0x10138cd8
  mov.w r0,#0xffffffff
  b 0x10138cf6
  adds r3,r4,r0
  add.w r3,r3,r3, lsr #0x1f
  asrs r3,r3,#0x1
  lsls r6,r3,#0x4
  ldr r6,[r5,r6]
  cmp r6,r1
  bls 0x10138cec
  subs r0,r3,#0x1
  b 0x10138cce
  bcs 0x10138cf2
  adds r4,r3,#0x1
  b 0x10138cce
  movs r0,#0x0
  str r3,[r2,#0x0]
  pop {r4,r5,r6,pc}
