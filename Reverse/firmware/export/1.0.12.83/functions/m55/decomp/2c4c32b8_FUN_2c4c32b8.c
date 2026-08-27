/* FUN_2c4c32b8 @ 0x2c4c32b8 */

void FUN_2c4c32b8(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = DAT_2c4c333c;
  piVar1 = DAT_2c4c3324;
  if (param_1 != 0) {
    if (*DAT_2c4c3320 == 0) {
      iVar4 = 0;
      puVar5 = DAT_2c4c333c;
      if (0 < *DAT_2c4c3324) {
        do {
          uVar3 = FUN_2c4c3104(*puVar5);
          if (param_1 <= uVar3) {
            if (iVar4 < *piVar1) {
              iVar4 = FUN_2c4c2cd8(puVar2[iVar4],param_1);
              goto LAB_2c4c32fa;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < *piVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c3338,DAT_2c4c3334,iVar4);
    }
    iVar4 = FUN_2c4c2cd8(*DAT_2c4c3328,param_1);
LAB_2c4c32fa:
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c3330,DAT_2c4c332c,param_1);
    }
  }
  return;
}

