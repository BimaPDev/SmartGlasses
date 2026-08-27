/* FUN_2c4fb1c8 @ 0x2c4fb1c8 */

undefined4 FUN_2c4fb1c8(uint param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = DAT_2c4fb2c0;
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4fb2dc,DAT_2c4fb2d4,param_1);
  }
  iVar4 = param_1 * 0x6c + DAT_2c4fb2c0;
  if (*(char *)(DAT_2c4fb2c0 + param_1 * 0x6c) != '\0') {
    if (*(char *)(iVar4 + 2) != '\0') {
      return 0;
    }
    iVar5 = *(int *)(iVar4 + 0x5c);
    if (iVar5 != 0) {
      uVar6 = *(int *)(iVar4 + 0x30) * *(int *)(iVar4 + 0x3c) * param_2[2];
      uVar2 = FUN_2c4c34c8(iVar5);
      if (uVar2 < uVar6) {
        uVar2 = *DAT_2c4fb2c4;
        uVar6 = uVar2 + 1;
        *DAT_2c4fb2c4 = uVar6;
        if ((uVar2 & uVar6) == 0) {
          uVar3 = FUN_2c674198();
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x45e,DAT_2c4fb2d0,DAT_2c4fb2cc,DAT_2c4fb2d8,DAT_2c4fb2d4,uVar6,uVar3);
        }
      }
      else {
        FUN_2c4c3424(iVar5,*param_2,uVar6);
        *DAT_2c4fb2c4 = 0;
      }
      uVar6 = param_2[2] * *(int *)(param_1 * 0x6c + iVar1 + 0x30);
      uVar2 = FUN_2c4c34c0(iVar5 + 0x14);
      if (uVar6 <= uVar2) {
        FUN_2c4c3474(iVar5 + 0x14,param_2[1],uVar6);
        return 0;
      }
      if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x46b,DAT_2c4fb2d0,DAT_2c4fb2cc,DAT_2c4fb2c8);
      }
      FUN_2c674668(param_2[1],*param_2,uVar6);
    }
  }
  return 0;
}

