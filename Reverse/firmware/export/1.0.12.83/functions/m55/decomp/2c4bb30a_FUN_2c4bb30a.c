/* FUN_2c4bb30a @ 0x2c4bb30a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4bb30a(int param_1)

{
  int iVar1;
  int iVar2;
  bool in_ZR;
  bool in_CY;
  
  iVar1 = _LAB_2c4bb344;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb348,param_1);
  }
  if ((*(byte *)(_LAB_2c4bb344 + param_1 * 0xc + 6) < 0x93) &&
     (iVar2 = func_0x2c6744f8(), iVar2 != 1)) {
    return 0;
  }
  return *(uint *)(*(int *)(iVar1 + param_1 * 0xc) + 0x30) & 1;
}

