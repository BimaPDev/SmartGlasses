/* FUN_2c504ed4 @ 0x2c504ed4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c504ed4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c505030;
  uStack_18 = FUN_2c602618(param_2,param_2,param_3,0);
  switch(uStack_18) {
  case 0xce:
  case 0xcf:
    if ((*(char *)(param_1 + 0x18) == '\0') && (iVar1 = func_0x2c63e1f0(), iVar1 != 0)) {
      (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),_DAT_2c505040,1);
      FUN_2c602340(iVar1,0xd,&uStack_18);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    break;
  case 0xd3:
    piVar3 = *(int **)(param_1 + 4);
    pcVar4 = *(code **)*piVar3;
    uVar2 = (*(code *)((undefined4 *)*piVar3)[3])(piVar3);
    (*pcVar4)(piVar3,uVar2);
    break;
  case 0xd4:
  case 0xe3:
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    break;
  case 0xda:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50503c,0x8f,_LAB_2c505038,_LAB_2c505058);
  case 0xdd:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50503c,0x94,_LAB_2c505038,_LAB_2c505034);
  case 0xde:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50503c,0x9c,_LAB_2c505038,_LAB_2c50505c);
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50503c,0xa4,_LAB_2c505038,_LAB_2c505060);
  }
  if (*_LAB_2c505030 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

