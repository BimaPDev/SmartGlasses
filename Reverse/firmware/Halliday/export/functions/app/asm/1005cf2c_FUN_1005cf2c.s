; FUN_1005cf2c @ 0x1005cf2c size=34
  push {r4,lr}
  mov r4,r0
  bl 0x1011b96c
  mov r0,r4
  bl 0x1011b9ae
  ldr r3,[r4,#0x1c]
  cbz r3,0x1005cf44
  mov r0,r4
  bl 0x1011ba00
  pop.w {r4,lr}
  ldr r0,[0x1005cf50]
  b.w 0x10113fd0
