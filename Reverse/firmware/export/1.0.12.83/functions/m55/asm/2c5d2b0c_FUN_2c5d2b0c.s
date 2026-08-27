; FUN_2c5d2b0c @ 0x2c5d2b0c size=40
  push {r4,lr}
  mov r0,r1
  bl 0x2c621080
  cbz r0,0x2c5d2b32
  mov r4,r0
  adds r0,#0x98
  bl 0x2c5da888
  movs r1,#0x64
  mov r2,r4
  ldr r0,[0x2c5d2b34]
  bl 0x2c62bdd8
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c62be70
  pop {r4,pc}
