/* FUN_1405b3f4 @ 0x1405b3f4 */

void FUN_1405b3f4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_28;
  uint local_24;
  
  local_24 = *DAT_1405b474;
  uVar2 = param_2;
  if (param_1 < 2) {
    if (param_5 == 0) {
      iVar1 = 0x4d;
    }
    else {
      iVar1 = *(int *)(DAT_1405b478 + param_1 * 4);
      if ((iVar1 == 0) || ((int)((uint)*(byte *)(iVar1 + 0x43) << 0x1d) < 0)) {
        iVar1 = 0x43;
      }
      else {
        uVar3 = FUN_1406d628(iVar1,0x20,DAT_1405b47c,&local_28);
        uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
        iVar1 = (int)uVar3;
        if (iVar1 == 0) {
          *(int *)(local_28 + 0xc) = param_5;
          *(undefined4 *)(local_28 + 0x10) = param_2;
          *(undefined4 *)(local_28 + 0x18) = param_3;
          *(undefined4 *)(local_28 + 0x1c) = 0;
          *(char *)(local_28 + 0x14) = (char)param_1;
          *(undefined4 *)(local_28 + 8) = param_4;
        }
      }
    }
  }
  else if (param_5 == 0) {
    iVar1 = 0x4d;
  }
  else {
    iVar1 = 0x43;
  }
  if ((*DAT_1405b474 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar1,uVar2,*DAT_1405b474 ^ local_24,0);
}

