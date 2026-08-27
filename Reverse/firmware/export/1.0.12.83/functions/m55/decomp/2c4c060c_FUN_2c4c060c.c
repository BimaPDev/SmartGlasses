/* FUN_2c4c060c @ 0x2c4c060c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c060c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = _LAB_2c4c0650;
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4c0654,param_1,param_3,param_4,param_4);
  }
  if (*(char *)(_LAB_2c4c064c + param_2) != '\0') {
    if (param_2 == 0) {
      *(undefined4 *)(_LAB_2c4c0650 + 0x30) = 1;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 2;
    }
    else {
      *(undefined4 *)(_LAB_2c4c0650 + 0x2c) = 0;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 1;
    }
    *(uint *)(_LAB_2c4c0650 + 0x10) = *(uint *)(_LAB_2c4c0650 + 0x10) | 0x8000;
    return 0;
  }
  return 1;
}

