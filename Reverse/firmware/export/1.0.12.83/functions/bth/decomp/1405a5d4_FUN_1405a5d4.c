/* FUN_1405a5d4 @ 0x1405a5d4 */

int FUN_1405a5d4(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1405a688;
  if (((param_1 < 2) && (iVar5 = *(int *)(DAT_1405a68c + param_1 * 4), iVar5 != 0)) &&
     ((int)((uint)*(byte *)(iVar5 + 0x43) << 0x1b) < 0)) {
    if ((param_3 == (undefined4 *)0x0) || (9 < *(byte *)((int)param_3 + 0x1a) - 7)) {
      iVar4 = 0x40;
    }
    else {
      iVar4 = FUN_1405c2cc();
      if (iVar4 == 0) {
        if ((*(int *)(iVar5 + 0x50) == 0) && (-1 < (int)((uint)*(byte *)(iVar5 + 0x43) << 0x1a))) {
          iVar4 = FUN_1405b26c(param_1,param_2,param_4,0x34,DAT_1405a690,&local_18);
          if (iVar4 == 0) {
            uVar1 = param_3[1];
            uVar2 = param_3[2];
            uVar3 = param_3[3];
            *(undefined4 *)(local_18 + 0x18) = *param_3;
            *(undefined4 *)(local_18 + 0x1c) = uVar1;
            *(undefined4 *)(local_18 + 0x20) = uVar2;
            *(undefined4 *)(local_18 + 0x24) = uVar3;
            uVar1 = param_3[5];
            uVar2 = param_3[6];
            *(undefined4 *)(local_18 + 0x28) = param_3[4];
            *(undefined4 *)(local_18 + 0x2c) = uVar1;
            *(undefined4 *)(local_18 + 0x30) = uVar2;
            *(byte *)(iVar5 + 0x43) = *(byte *)(iVar5 + 0x43) | 0x20;
          }
        }
        else {
          iVar4 = 0x4f;
        }
      }
      else {
        iVar4 = 0x42;
      }
    }
  }
  else {
    iVar4 = 0x43;
  }
  if (*DAT_1405a688 == local_14) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

