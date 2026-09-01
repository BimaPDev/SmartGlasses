; FUN_10130a60 @ 0x10130a60 size=30
  push {r4,lr}
  mov r4,r0
  ldr.w r0,[r0,#0xac]
  cbz r0,0x10130a74
  movs r2,#0x0
  movs r1,#0x1
  ldr.w r3,[r4,#0xa8]
  blx r3
  mov r0,r4
  bl 0x100a92e4
  movs r0,#0x0
  pop {r4,pc}
