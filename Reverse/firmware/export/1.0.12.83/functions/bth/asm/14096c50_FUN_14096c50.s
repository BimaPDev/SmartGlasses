; FUN_14096c50 @ 0x14096c50 size=42
  push {r3,r4,r5,lr}
  mov r5,r1
  bl 0x14096b4c
  cbz r0,0x14096c72
  mov r4,r0
  bl 0x140755e4
  add.w r0,r4,#0x10
  mov r1,r5
  bl 0x14088cf8
  mov r4,r0
  bl 0x1407561c
  cbz r4,0x14096c76
  movs r0,#0x1
  pop {r3,r4,r5,pc}
  movs r0,#0x2
  pop {r3,r4,r5,pc}
