; FUN_10065aa4 @ 0x10065aa4 size=34
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x10065ac8]
  bl 0x10112e84
  str r0,[r4,#0x0]
  cbz r0,0x10065ac0
  ldr r3,[r0,#0x8]
  mov r2,r4
  ldr r3,[r3,#0x10]
  ldr r1,[0x10065acc]
  blx r3
  movs r0,#0x0
  pop {r4,pc}
  mvn r0,#0x12
  b 0x10065abe
