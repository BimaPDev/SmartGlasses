/* FUN_1402bda8 @ 0x1402bda8 */

void FUN_1402bda8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_140e5178();
  uVar3 = uVar1 >> 4;
  if (uVar1 >> 4 < param_2) {
    uVar3 = uVar3 << 1;
  }
  if (param_1 == 0) {
    FUN_1402df44();
  }
  else if (param_1 == 1) {
    FUN_1402dff4();
  }
  uVar3 = ((param_2 >> 1) + uVar3 * 0x40) / param_2;
  uVar1 = uVar3 >> 6;
  if (uVar1 - 1 < 0xfffe) {
    iVar2 = *(int *)(DAT_1402be08 + param_1 * 0xc);
    *(uint *)(iVar2 + 0x24) = uVar1;
    *(uint *)(iVar2 + 0x28) = uVar3 & 0x3f;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1402be0c,param_2);
}

