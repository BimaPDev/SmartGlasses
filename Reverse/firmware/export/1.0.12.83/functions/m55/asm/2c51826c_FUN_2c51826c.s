; FUN_2c51826c @ 0x2c51826c size=28
  push {r4,lr}
  ldr r3,[0x2c518288]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c51827c
  bl 0x2c48dea0
  mov r0,r4
  movs r1,#0x8
  bl 0x2c64c9ce
  mov r0,r4
  pop {r4,pc}
