/* FUN_2c472dbc @ 0x2c472dbc */

void FUN_2c472dbc(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c472e24,DAT_2c472e20,0x262,param_4,param_4);
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = iVar3;
    *(int *)(iVar3 + 8) = iVar2;
    iVar3 = param_1 + (param_4 + param_3 * 0x20) * 4;
    if (((*(int *)(iVar3 + 0x60) == param_2) && (*(int *)(iVar3 + 0x60) = iVar2, param_1 == iVar2))
       && (iVar2 = param_1 + param_3 * 4, uVar1 = *(uint *)(iVar2 + 0x14) & ~(1 << (param_4 & 0xff))
          , *(uint *)(iVar2 + 0x14) = uVar1, uVar1 == 0)) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~(1 << (param_3 & 0xff));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c472e24,DAT_2c472e20,0x263,param_4,param_4);
}

