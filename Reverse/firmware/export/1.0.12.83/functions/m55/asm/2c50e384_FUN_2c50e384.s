; FUN_2c50e384 @ 0x2c50e384 size=20
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0xc]
  cbz r0,0x2c50e394
  ldr r1,[r4,#0x14]
  subs r1,r1,r0
  bl 0x2c64c9ce
  mov r0,r4
  pop {r4,pc}
