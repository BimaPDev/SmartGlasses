/* FUN_2c4babcc @ 0x2c4babcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4babcc(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_2c674348();
  uVar4 = uVar2 >> 4;
  bVar1 = uVar2 >> 4 < param_2;
  if (bVar1) {
    uVar4 = uVar4 << 1;
  }
  if (param_1 == 0) {
    func_0x2c674358(bVar1);
  }
  else if (param_1 == 1) {
    func_0x2c674548();
  }
  uVar2 = ((param_2 >> 1) + uVar4 * 0x40) / param_2;
  uVar4 = uVar2 >> 6;
  if (uVar4 - 1 < 0xfffe) {
    iVar3 = *(int *)(_LAB_2c4bac30 + param_1 * 0xc);
    *(uint *)(iVar3 + 0x24) = uVar4;
    *(uint *)(iVar3 + 0x28) = uVar2 & 0x3f;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bac34,param_2);
}

