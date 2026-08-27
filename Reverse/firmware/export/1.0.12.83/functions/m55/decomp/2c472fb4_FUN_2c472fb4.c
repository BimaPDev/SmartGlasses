/* FUN_2c472fb4 @ 0x2c472fb4 */

uint FUN_2c472fb4(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1 + param_2;
  uVar3 = *(uint *)(param_1 + 4) & 0xfffffffc;
  if (iVar1 + 0xcU != (iVar1 + 0xfU & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c473054,DAT_2c473050,0x2ad);
  }
  uVar4 = (uVar3 - param_2) - 4;
  if (param_2 + 4 + uVar4 == uVar3) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 3 | uVar4;
    if (0xb < (uVar4 & 0xfffffffc)) {
      *(uint *)(param_1 + 4) = param_2 | *(uint *)(param_1 + 4) & 3;
      uVar3 = *(uint *)(iVar1 + 8) & 0xfffffffc;
      puVar2 = (uint *)(iVar1 + 0xcU + uVar3);
      if (uVar3 != 0) {
        puVar2[-1] = iVar1 + 4U;
        *puVar2 = *puVar2 | 2;
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 1;
        return iVar1 + 4U;
      }
      FUN_2c472ee0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c473054,DAT_2c473050,0x2b2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c473054,DAT_2c473050,0x2b0);
}

