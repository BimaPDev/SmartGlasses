; FUN_2c016974 @ 0x2c016974 size=34
  push {r3,lr}
  and r3,r0,#0x2c000000
  cmp.w r3,#0x2c000000
  beq 0x2c01698a
  and r3,r0,#0x28000000
  cmp.w r3,#0x28000000
  bne 0x2c01698e
  movs r0,#0x0
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c016998]
  bl 0x2c00dfac
