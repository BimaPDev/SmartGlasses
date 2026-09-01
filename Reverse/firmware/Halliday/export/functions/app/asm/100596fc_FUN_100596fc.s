; FUN_100596fc @ 0x100596fc size=36
  push {r4,lr}
  mov r4,r0
  bl 0x1011aea4
  cbz r0,0x10059712
  ldr r0,[r4,#0x14]
  ldr r1,[0x10059720]
  pop.w {r4,lr}
  b.w 0x1011ae5e
  add.w r0,r4,#0x8
  bl 0x1011ae78
  cmp r0,#0x0
  bne 0x10059706
  pop {r4,pc}
