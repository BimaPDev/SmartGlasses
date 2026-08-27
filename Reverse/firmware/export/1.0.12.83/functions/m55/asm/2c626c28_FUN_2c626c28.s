; FUN_2c626c28 @ 0x2c626c28 size=24
  push {r4,lr}
  mov r4,r1
  ldr r0,[0x2c626c40]
  movs r1,#0xa
  mov r2,r4
  bl 0x2c62bdd8
  str r0,[r4,#0x64]
  pop.w {r4,lr}
  b.w 0x2c62be40
