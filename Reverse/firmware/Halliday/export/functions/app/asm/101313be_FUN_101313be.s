; FUN_101313be @ 0x101313be size=34
  push {r4,lr}
  mov r4,r0
  bl 0x100a735c
  cbz r4,0x101313d8
  cmp r4,#0x7e
  bhi 0x101313d6
  mla r0,r4,r0,r0
  cmp r0,#0x7f
  bls 0x101313dc
  lsrs r0,r0,#0x7
  pop {r4,pc}
  mov r0,r4
  b 0x101313d6
  movs r0,#0x1
  b 0x101313d6
