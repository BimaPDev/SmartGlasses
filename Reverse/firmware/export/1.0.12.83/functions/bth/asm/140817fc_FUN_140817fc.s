; FUN_140817fc @ 0x140817fc size=26
  push {r4,lr}
  bl 0x1407eb80
  mov r4,r0
  cbz r0,0x14081822
  movs r0,#0x42
  ldrb.w r3,[r4,#0x27]
  ldr r2,[0x14081824]
  ldr r1,[0x14081828]
  bl 0x1402a64c
  pop {r4,pc}
