; FUN_10053974 @ 0x10053974 size=44
  push {r0,r1,r2,r3,r4,lr}
  movs r3,#0x0
  strd r1,r0,[sp,#0x0]
  str r3,[sp,#0xc]
  bl 0x10057234
  ldrd r1,r2,[sp,#0x0]
  cbz r0,0x10053994
  mov r0,r2
  bl 0x1013da00
  add sp,#0x14
  pop.w pc
  mov r3,r1
  ldr r0,[0x100539a0]
  add r1,sp,#0xc
  bl 0x1011a066
  b 0x1005398e
