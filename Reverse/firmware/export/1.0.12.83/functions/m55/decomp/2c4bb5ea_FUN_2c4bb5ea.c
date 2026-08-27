/* FUN_2c4bb5ea @ 0x2c4bb5ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4bb5ea(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb630,param_1);
  }
  iVar1 = *(int *)(_LAB_2c4bb620 + param_1 * 0xc);
  iVar2 = *(int *)(iVar1 + 0x38);
  if (((-1 < iVar2 << 0x19) && (param_2 << 0x19 < 0)) && (*(char *)(_LAB_2c4bb624 + param_1) != -1))
  {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb62c,_LAB_2c4bb628);
  }
  *(int *)(iVar1 + 0x38) = param_2;
  return iVar2;
}

