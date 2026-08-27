/* FUN_2c4bbedc @ 0x2c4bbedc */

void FUN_2c4bbedc(undefined4 param_1,uint param_2,int param_3,int param_4,ushort param_5,
                 ushort param_6,undefined2 *param_7,undefined2 *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (uint)param_6;
  uVar5 = (uint)param_5;
  uVar2 = (uint)((ulonglong)DAT_2c4bbfcc * (ulonglong)(uVar1 * param_3 + 999) >> 0x20);
  if ((uVar5 + 7 & 0xffff) < uVar2 >> 6) {
    uVar2 = uVar2 >> 6;
    uVar4 = uVar2 & 0xffff;
  }
  else {
    uVar4 = uVar5 + 8 & 0xffff;
    uVar2 = uVar4;
  }
  uVar3 = (uint)((ulonglong)DAT_2c4bbfcc * (ulonglong)(uVar1 * param_4 + 999) >> 0x20);
  uVar6 = uVar3 >> 6;
  if (uVar3 >> 6 < (uVar5 + 6 & 0xffff) + (uVar5 + 5 & 0xffff)) {
    uVar6 = uVar5 * 2 + 0xb & 0xffff;
    uVar3 = uVar6;
  }
  else {
    uVar3 = uVar6 & 0xffff;
  }
  if (param_2 < uVar2 + uVar6) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x15c,DAT_2c4bbfd4,DAT_2c4bbfdc,DAT_2c4bbfd8,DAT_2c4bbfd0,param_1,param_2,uVar2,uVar6,
          uVar1);
  }
  uVar2 = param_2 + 1 >> 1;
  if (uVar4 < uVar3) {
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
    }
    if (uVar4 < param_2 - uVar3) {
      uVar4 = param_2 - uVar3;
    }
  }
  else {
    if (uVar4 < uVar2) {
      uVar4 = uVar2;
    }
    if (uVar3 < param_2 - uVar4) {
      uVar3 = param_2 - uVar4;
    }
  }
  uVar4 = uVar4 - 1;
  uVar2 = (uVar3 - uVar5) - 6;
  if ((uVar4 < 0x10000) && (uVar2 < 0x10000)) {
    *param_7 = (short)uVar4;
    *param_8 = (short)uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4bbfe0,DAT_2c4bbfd0,param_1,uVar4,uVar2);
}

