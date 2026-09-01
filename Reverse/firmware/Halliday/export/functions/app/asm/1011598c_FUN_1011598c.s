; FUN_1011598c @ 0x1011598c size=40
  push {r3,r4,r5,lr}
  mov r4,r0
  cbz r0,0x101159b2
  bl 0x10061948
  mov r5,r0
  ldr r0,[0x101159b4]
  movs r3,#0x0
  umull r0,r1,r4,r0
  ldr r2,[0x101159b8]
  bl 0x10004238
  mov r4,r0
  bl 0x10061948
  subs r3,r0,r5
  cmp r3,r4
  bcc 0x101159a8
  pop {r3,r4,r5,pc}
