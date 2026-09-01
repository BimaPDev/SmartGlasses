; FUN_101314ec @ 0x101314ec size=60
  push {r5,lr}
  mov r5,r0
  cbz r0,0x10131508
  bl 0x100a735c
  cmp r5,r0
  bcs 0x10131514
  bl 0x100a735c
  lsls r5,r5,#0x4
  cmp r5,r0
  bcc 0x10131518
  udiv r5,r5,r0
  uxtb r1,r5
  movs r0,#0x1
  pop.w {r5,lr}
  b.w 0x10136a60
  movs r5,#0xf
  b 0x10131508
  movs r5,#0x1
  b 0x10131508
  orr.w r2,r1,r0, lsl #0x10
  movs r1,#0x42
  movs r0,#0xcc
  b.w 0x100d4440
