/* FUN_100863a0 @ 0x100863a0 */

byte * FUN_100863a0(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  
  if (((param_2 < *(uint *)(DAT_100863d8 + 0x28)) || (*(int *)(DAT_100863d8 + 0x2c) != param_1)) ||
     ((0x800 / *(ushort *)(param_1 + 0xc) & 0xff) + *(uint *)(DAT_100863d8 + 0x28) <
      param_3 + param_2)) {
    pbVar1 = (byte *)0x0;
  }
  else {
    pbVar1 = (byte *)(DAT_100863d8 + 0x24);
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = (byte *)0x0;
    }
  }
  return pbVar1;
}

