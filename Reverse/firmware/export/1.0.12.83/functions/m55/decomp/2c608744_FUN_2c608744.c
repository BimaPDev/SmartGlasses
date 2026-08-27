/* FUN_2c608744 @ 0x2c608744 */

void FUN_2c608744(int param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c608804,0x471,DAT_2c608800,DAT_2c6087fc);
  }
  iVar3 = FUN_2c6041fc();
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      FUN_2c608744(*(undefined4 *)(**(int **)(param_1 + 8) + iVar1));
    } while (iVar3 != iVar5);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x22) << 0x1f) < 0) {
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfe;
    if ((*(byte *)(param_1 + 0x23) & 6) != 6) {
      FUN_2c60802c(param_1);
    }
    iVar5 = FUN_2c607214(param_1);
    if (iVar5 == 0) {
      FUN_2c607b48(param_1);
    }
    if (iVar3 != 0) {
      uVar2 = FUN_2c6033b4(param_1,0,10);
      uVar4 = (uint)uVar2;
      if ((uVar4 != 0) && (uVar4 <= *DAT_2c6087f4)) {
                    /* WARNING: Could not recover jumptable at 0x2c6087d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*DAT_2c6087f8 + (uVar4 + 0x1fffffff) * 8))
                  (param_1,*(undefined4 *)(*DAT_2c6087f8 + (uVar4 + 0x1fffffff) * 8 + 4));
        return;
      }
    }
  }
  return;
}

