; FUN_1011feca @ 0x1011feca size=22
  cmp r0,#0x0
  ble 0x1011fedc
  adds r0,#0x1
  lsls r0,r0,#0x8
  it mi
  addw.mi r0,r0,#0xfff
  asrs r0,r0,#0xc
  bx lr
  movs r0,#0x0
  bx lr
