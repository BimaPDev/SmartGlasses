/* FUN_2c5eebf4 @ 0x2c5eebf4 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eebf4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eecbc,0xb7,_LAB_2c5eecb8);
  }
  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eecbc,0xbe,_LAB_2c5eecb8);
  }
  FUN_2c606abc(param_1[3],1);
  FUN_2c606e74(param_1[3],0xff,0);
  if (param_1[5] != 0) {
    FUN_2c606abc(param_1[5],1);
    FUN_2c606e74(param_1[5],0xff,0);
    iVar1 = param_1[1];
    if (iVar1 == 0) {
      if (*(char *)((int)param_1 + 0xa9) != '\0') {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5eecbc,0xcf,_LAB_2c5eecb8);
    }
    if (*(char *)((int)param_1 + 0xa9) != '\0') {
      iVar4 = *DAT_2c606ab8;
      iVar2 = FUN_2c607214();
      FUN_2c607df0(iVar1);
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
      FUN_2c607df0(iVar1);
      iVar3 = FUN_2c607214(iVar1);
      if (iVar3 != iVar2) {
        FUN_2c6041d4(iVar1);
        FUN_2c607248();
        FUN_2c607248(iVar1);
      }
      if (*DAT_2c606ab8 != iVar4) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
    FUN_2c606abc();
    FUN_2c603c40(param_1[1],0x60,0xff,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5eecbc,0xc4,_LAB_2c5eecb8);
}

