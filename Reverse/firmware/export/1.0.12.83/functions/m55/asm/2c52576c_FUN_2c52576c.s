; FUN_2c52576c @ 0x2c52576c size=50
  push {r4,lr}
  mov r4,r0
  ldr r1,[0x2c5257a0]
  movw r0,#0x1f43
  mov r2,r4
  bl 0x2c620f0c
  str r0,[r4,#0x30]
  bl 0x2c525874
  bl 0x2c5259cc
  cbz r0,0x2c525794
  bl 0x2c525874
  bl 0x2c5259cc
  bl 0x2c526d40
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c525698
