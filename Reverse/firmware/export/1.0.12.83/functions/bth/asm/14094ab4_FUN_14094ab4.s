; FUN_14094ab4 @ 0x14094ab4 size=40
  push {r4,lr}
  ldr.w r4,[r0,#0x350]
  sub sp,#0x8
  cbz r4,0x14094ad4
  bl 0x140755e4
  mov r0,r4
  bl 0x14079a70
  str r0,[sp,#0x4]
  bl 0x1407561c
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
  ldr r1,[0x14094ae4]
  movs r0,#0x40
  bl 0x1402a64c
