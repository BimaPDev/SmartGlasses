; FUN_10134816 @ 0x10134816 size=40
  push {r4,r5,r6,lr}
  ldrh.w r5,[sp,#0x10]
  mov r6,r2
  cmp r2,r5
  bhi 0x10134838
  subs r4,r5,r2
  cmp r4,r1
  it ge
  mov.ge r4,r1
  uxth r5,r4
  mov r2,r5
  adds r1,r3,r6
  bl 0x1011ea40
  mov r0,r5
  pop {r4,r5,r6,pc}
  mvn r5,#0x6
  b 0x10134834
