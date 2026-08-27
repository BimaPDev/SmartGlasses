; FUN_2c4db958 @ 0x2c4db958 size=36
  push {r4,lr}
  bl 0x2c4db8c8
  ldr r3,[r0,#0x0]
  mov.w r1,#0x220
  ldr r3,[r3,#0xc]
  blx r3
  mov r4,r0
  bl 0x2c4db76c
  cbz r4,0x2c4db978
  ldr r3,[r4,#0x0]
  ldr.w r3,[r3,#-0xc]
  add r4,r3
  mov r0,r4
  pop {r4,pc}
