; FUN_100ae7e8 @ 0x100ae7e8 size=40
  push {r0,r1,r2,r3,r4,r5,r6,lr}
  movs r2,#0x4
  movs r3,#0x10
  mov r0,sp
  strd r2,r3,[sp,#0x0]
  bl 0x100ae7a4
  mov r1,r0
  cbz r0,0x100ae804
  movs r0,#0x0
  add sp,#0x1c
  pop.w pc
  movs r2,#0x30
  ldr r0,[0x100ae810]
  bl 0x1011ea48
  ldr r0,[0x100ae810]
  b 0x100ae7fe
