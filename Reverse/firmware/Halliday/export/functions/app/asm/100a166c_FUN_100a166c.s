; FUN_100a166c @ 0x100a166c size=20
  push {r0,r1,r2,lr}
  strd r0,r1,[sp,#0x0]
  mov r1,sp
  ldr r0,[0x100a1680]
  bl 0x100a0350
  add sp,#0xc
  pop.w pc
