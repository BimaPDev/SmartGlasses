/* FUN_2c50bdd4 @ 0x2c50bdd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c50bdd4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xce:
  case 0xd9:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x113,_LAB_2c50bf08,_LAB_2c50bf04);
  case 0xcf:
  case 0xd8:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x11a,_LAB_2c50bf08,_LAB_2c50bf10);
  default:
    return 0;
  case 0xd2:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x10c,_LAB_2c50bf08,_LAB_2c50bf14);
  case 0xd3:
    piVar2 = *(int **)(param_1 + 4);
    pcVar3 = *(code **)*piVar2;
    uVar1 = (*(code *)((undefined4 *)*piVar2)[3])(piVar2);
    (*pcVar3)(piVar2,uVar1);
    return 1;
  case 0xd4:
  case 0xe3:
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    return 1;
  case 0xda:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x123,_LAB_2c50bf08,_LAB_2c50bf20);
  case 0xdd:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x127,_LAB_2c50bf08,_LAB_2c50bf18);
  case 0xde:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x12d,_LAB_2c50bf08,_LAB_2c50bf1c);
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50bf0c,0x133,_LAB_2c50bf08,_LAB_2c50bf24);
  }
}

