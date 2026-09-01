; FUN_100674c4 @ 0x100674c4 size=40
  push {r4,lr}
  cbz r0,0x100674cc
  ldr r4,[r0,#0x0]
  cbnz r4,0x100674d8
  movs r1,#0x45
  ldr r3,[0x100674ec]
  ldr r2,[0x100674f0]
  ldr r0,[0x100674f4]
  bl 0x10117c88
  ldrh r3,[r0,#0xc]
  mla r1,r2,r3,r1
  ldrb r2,[r0,#0xe]
  muls r2,r1
  it mi
  add.mi r2,#0x7
  add.w r0,r4,r2, asr #0x3
  pop {r4,pc}
