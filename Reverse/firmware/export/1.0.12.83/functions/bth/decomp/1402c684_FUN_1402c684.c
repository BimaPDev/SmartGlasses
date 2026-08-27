/* FUN_1402c684 @ 0x1402c684 */

uint FUN_1402c684(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1402c6c0;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c6c4,param_1);
  }
  if ((*(byte *)(DAT_1402c6c0 + param_1 * 0xc + 6) < 0x47) && (iVar2 = FUN_1402db00(), iVar2 != 1))
  {
    return 0;
  }
  return *(uint *)(*(int *)(iVar1 + param_1 * 0xc) + 0x30) & 1;
}

