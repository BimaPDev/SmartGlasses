; FUN_2c518028 @ 0x2c518028 size=20
  push {r4,lr}
  ldr r3,[0x2c51803c]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c518038
  bl 0x2c48dea0
  mov r0,r4
  pop {r4,pc}
