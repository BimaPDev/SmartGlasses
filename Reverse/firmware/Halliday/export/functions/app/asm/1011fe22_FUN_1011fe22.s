; FUN_1011fe22 @ 0x1011fe22 size=36
  movs r0,#0x0
  push {r4,lr}
  bl 0x1011fe86
  bl 0x1007b2e4
  cmp r0,#0x0
  ble 0x1011fe42
  bl 0x1011feb0
  mov r4,r0
  movs r0,#0x1
  bl 0x1011fe86
  mov r0,r4
  pop {r4,pc}
  movs r4,#0x0
  b 0x1011fe38
