/* FUN_1402ca08 @ 0x1402ca08 */

void FUN_1402ca08(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1402ca30;
  if (param_1 < 2) {
    *(undefined4 *)(DAT_1402ca2c + param_1 * 4) = param_2;
    uVar3 = DAT_1402ca38;
    iVar2 = DAT_1402ca34;
    *(undefined4 *)(iVar1 + param_1 * 4) = param_3;
    *(undefined4 *)(iVar2 + param_1 * 4) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1402ca3c,param_1);
}

