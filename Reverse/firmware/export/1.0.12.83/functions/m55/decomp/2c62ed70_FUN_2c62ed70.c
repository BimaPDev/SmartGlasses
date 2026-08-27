/* FUN_2c62ed70 @ 0x2c62ed70 */

uint FUN_2c62ed70(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (uint)((ulonglong)DAT_2c62ee58 * (ulonglong)(param_2 * 0xff & 0xffff) >> 0x20);
  uVar3 = (uVar2 & 0x1fff) >> 5;
  uVar4 = ((uint)((ulonglong)DAT_2c62ee58 * (ulonglong)(param_3 * 0xff & 0xffff) >> 0x20) & 0x1fff)
          >> 5;
  if (uVar3 != 0) {
    uVar1 = (uint)((ulonglong)DAT_2c62ee5c * (ulonglong)((uint)(param_1 * 0xff) >> 3) >> 0x20);
    uVar7 = (uVar4 * (0xff - uVar3) & 0xffff) >> 8;
    uVar6 = ((uint)((ulonglong)DAT_2c62ee60 * (ulonglong)((uVar1 & 0x3ffff) >> 2) >> 0x20) & 0x7ff)
            >> 3;
    uVar1 = (uVar6 * -0x2b + (uVar1 >> 2)) * 6 & 0xff;
    uVar5 = (uVar4 * (0xff - ((int)(short)(ushort)(byte)((uVar2 << 0x13) >> 0x18) *
                              (int)(short)uVar1 >> 8)) & 0xffff) >> 8;
    uVar1 = (uVar4 * (0xff - ((int)((0xff - uVar1) * uVar3) >> 8)) & 0xffff) >> 8;
    uVar2 = uVar1;
    uVar3 = uVar4;
    switch(uVar6) {
    case 1:
      uVar2 = uVar4;
      uVar3 = uVar5;
      break;
    case 2:
      uVar2 = uVar4;
      uVar3 = uVar7;
      uVar7 = uVar1;
      break;
    case 3:
      uVar2 = uVar5;
      uVar3 = uVar7;
      uVar7 = uVar4;
      break;
    case 4:
      uVar2 = uVar7;
      uVar3 = uVar1;
      uVar7 = uVar4;
    }
    return uVar7 | uVar2 << 8 | uVar3 << 0x10 | 0xff000000;
  }
  return uVar4 | uVar4 << 8 | uVar4 << 0x10 | 0xff000000;
}

