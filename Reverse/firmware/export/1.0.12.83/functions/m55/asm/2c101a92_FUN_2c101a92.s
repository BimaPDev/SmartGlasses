; FUN_2c101a92 @ 0x2c101a92 size=22
  push {r0,lr}
  adr r3,[0x2c101e80]
  subs r1,#0xed
  vld2.16 {d18,d20},[r1:64],r1
  ldr r1,[r0,r5]
  lsls r1,r4,#0x1b
  lsls r0,r4,#0x1
  movs r2,#0x32
  tst r0,r1
  lsls r1,r4,#0x18
