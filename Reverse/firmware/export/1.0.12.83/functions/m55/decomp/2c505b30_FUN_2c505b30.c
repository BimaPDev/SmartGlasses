/* FUN_2c505b30 @ 0x2c505b30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c505b30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xce:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,0x171,_LAB_2c505c70,_LAB_2c505c6c);
  case 0xcf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,0x177,_LAB_2c505c70,_LAB_2c505c78);
  default:
    return 0;
  case 0xd2:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,0x16b,_LAB_2c505c70,_LAB_2c505c7c);
  case 0xd3:
    piVar2 = *(int **)(param_1 + 4);
    pcVar3 = *(code **)*piVar2;
    uVar1 = (*(code *)((undefined4 *)*piVar2)[0xc])(piVar2);
    (*pcVar3)(piVar2,uVar1);
    return 1;
  case 0xd4:
  case 0xe3:
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    return 1;
  case 0xda:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,0x180,_LAB_2c505c70,_LAB_2c505c88);
  case 0xdd:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,0x184,_LAB_2c505c70,_LAB_2c505c80);
  case 0xde:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,0x18a,_LAB_2c505c70,_LAB_2c505c84);
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c505c74,400,_LAB_2c505c70,_LAB_2c505c8c);
  }
}

