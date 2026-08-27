; FUN_2c65afee @ 0x2c65afee size=40
  push {r4,r5,lr}
  sub sp,#0x1c
  mov r5,r0
  add r4,sp,#0x10
  stm r4,{r2,r3}
  movs r3,#0x4c
  str r3,[sp,#0x8]
  ldrb.w r3,[sp,#0x2c]
  str r3,[sp,#0x4]
  ldr r3,[sp,#0x28]
  str r3,[sp,#0x0]
  ldm.w r4,{r2,r3}
  bl 0x2c65adec
  mov r0,r5
  add sp,#0x1c
  pop {r4,r5,pc}
