; FUN_2c4db1e0 @ 0x2c4db1e0 size=40
  push {r4,r5,lr}
  cbz r0,0x2c4db206
  subs r1,r0,#0x1
  ldr r4,[0x2c4db208]
  ldr r0,[0x2c4db20c]
  ldrsb.w r3,[r1,#0x1]!
  cbz r3,0x2c4db206
  uxtb r2,r3
  sub.w r5,r2,#0x41
  cmp r5,#0x19
  itt ls
  add.ls.w r3,r2,#0x20
  sxtb.ls r3,r3
  eors r0,r3
  muls r0,r4
  b 0x2c4db1ea
  pop {r4,r5,pc}
