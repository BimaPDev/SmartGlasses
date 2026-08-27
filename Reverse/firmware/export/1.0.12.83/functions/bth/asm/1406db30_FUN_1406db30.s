; FUN_1406db30 @ 0x1406db30 size=24
  mov r2,r1
  push {r4,lr}
  movs r1,#0x2
  mov r4,r0
  add.w r0,r2,#0xc
  bl 0x14073fdc
  cbz r0,0x1406db46
  strh r4,[r0,#0x8]
  adds r0,#0xc
  pop {r4,pc}
