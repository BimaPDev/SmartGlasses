/* FUN_2c50db04 @ 0x2c50db04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c50db04(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *DAT_2c50dc74;
  uStack_18 = FUN_2c602618(param_2,param_2,param_3,0);
  switch(uStack_18) {
  case 0xce:
  case 0xcf:
    FUN_2c50d948(param_1);
    if ((*(char *)(param_1 + 0x18) == '\0') && (iVar2 = func_0x2c640258(), iVar2 != 0)) {
      piVar4 = *(int **)(param_1 + 8);
      pcVar6 = *(code **)(*piVar4 + 0x4c);
      iVar3 = FUN_2c63f82c();
      if (iVar3 == 1) {
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
      }
      (*pcVar6)(piVar4,_LAB_2c50dc88,uVar5);
      uVar5 = 1;
      FUN_2c602340(iVar2,0xd,&uStack_18);
      break;
    }
  case 0xd2:
    uVar5 = 1;
    break;
  default:
    uVar5 = 0;
    break;
  case 0xd3:
    piVar4 = *(int **)(param_1 + 4);
    uVar5 = 1;
    pcVar6 = *(code **)*piVar4;
    uVar1 = (*(code *)((undefined4 *)*piVar4)[3])(piVar4);
    (*pcVar6)(piVar4,uVar1);
    break;
  case 0xd4:
  case 0xe3:
    uVar5 = 1;
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    break;
  case 0xda:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50dc80,0xb2,_LAB_2c50dc7c,_LAB_2c50dc78);
  case 0xdd:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50dc80,0xb7,_LAB_2c50dc7c,_LAB_2c50dc84);
  case 0xde:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50dc80,0xbf,_LAB_2c50dc7c,_LAB_2c50dc8c);
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50dc80,199,_LAB_2c50dc7c,_LAB_2c50dc90);
  }
  if (*DAT_2c50dc74 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar5;
}

