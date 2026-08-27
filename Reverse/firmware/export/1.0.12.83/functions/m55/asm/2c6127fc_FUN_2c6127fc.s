; FUN_2c6127fc @ 0x2c6127fc size=40
  push {r4,lr}
  bl 0x2c62c928
  ldr r0,[0x2c612824]
  bl 0x2c62c938
  cbz r0,0x2c612822
  movs r1,#0x14
  mov r4,r0
  bl 0x2c62c3b0
  ldr r0,[0x2c612828]
  ldr r1,[0x2c61282c]
  ldr r2,[0x2c612830]
  ldr r3,[0x2c612834]
  strd r0,r1,[r4,#0x0]
  strd r2,r3,[r4,#0x8]
  pop {r4,pc}
