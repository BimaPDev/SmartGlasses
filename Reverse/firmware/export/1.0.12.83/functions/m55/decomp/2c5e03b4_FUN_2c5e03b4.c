/* FUN_2c5e03b4 @ 0x2c5e03b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e03b4(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  
  local_14 = *_LAB_2c5e046c;
  local_18 = FUN_2c5dd26c();
  if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e0478,0xbe,_LAB_2c5e0474,_LAB_2c5e0480,param_2);
  }
  iVar2 = FUN_2c5ddff8(param_1,param_2);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e0478,0xc5,_LAB_2c5e0474,_LAB_2c5e0470,param_2);
  }
  bVar1 = FUN_2c5deec4(local_18);
  *(byte *)(local_18 + 0x1e) = bVar1 ^ 1;
  if (*(int **)(param_1 + 0x24) == (int *)(*(int *)(param_1 + 0x2c) + -4)) {
    FUN_2c5de330(param_1 + 0xc,&local_18);
  }
  else {
    **(int **)(param_1 + 0x24) = local_18;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e0478,0xce,_LAB_2c5e0474,_LAB_2c5e047c,param_2);
}

