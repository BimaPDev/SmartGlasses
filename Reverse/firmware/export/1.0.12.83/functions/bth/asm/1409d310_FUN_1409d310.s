; FUN_1409d310 @ 0x1409d310 size=60
  push {r4,lr}
  mov r4,r0
  bic.w r4,r4,r4, asr #0x1f
  cmp r4,#0x10
  it ge
  mov.ge r4,#0x10
  ldr r2,[0x1409d34c]
  sub sp,#0x8
  ldr r3,[0x1409d350]
  str r2,[sp,#0x0]
  movw r1,#0x1d4e
  ldr r2,[0x1409d354]
  movs r0,#0x4
  str r4,[sp,#0x4]
  bl 0x1402a6e8
  ldr r3,[0x1409d358]
  ldr r2,[0x1409d35c]
  ldrh r3,[r3,#0x0]
  strb r4,[r2,#0x0]
  lsls r3,r3,#0x18
  bmi 0x1409d346
  mov r0,r4
  bl 0x1409cfbc
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
