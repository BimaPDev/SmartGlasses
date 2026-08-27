; FUN_14097fcc @ 0x14097fcc size=44
  push {r4,lr}
  cbz r0,0x14097fec
  mov r4,r0
  bl 0x140755e4
  mov r0,r4
  bl 0x14081cb4
  mov r4,r0
  bl 0x1407561c
  cmp r4,#0x0
  ite eq
  mov.eq r0,#0x1
  mov.ne r0,#0x2
  pop {r4,pc}
  mov.w r2,#0x1e0
  ldr r1,[0x14097ff8]
  ldr r0,[0x14097ffc]
  bl 0x1402b0f8
