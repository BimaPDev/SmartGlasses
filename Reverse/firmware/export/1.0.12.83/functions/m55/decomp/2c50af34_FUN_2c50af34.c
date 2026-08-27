/* FUN_2c50af34 @ 0x2c50af34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c50af34(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xce:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50b078,0x112,_LAB_2c50b074,_LAB_2c50b070);
  case 0xcf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50b078,0x118,_LAB_2c50b074,_LAB_2c50b07c);
  default:
    return 0;
  case 0xd2:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50b078,0x10c,_LAB_2c50b074,_LAB_2c50b080);
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
    FUN_2c62c82c(4,_LAB_2c50b078,0x121,_LAB_2c50b074,_LAB_2c50b08c);
  case 0xdd:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50b078,0x125,_LAB_2c50b074,_LAB_2c50b084);
  case 0xde:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50b078,299,_LAB_2c50b074,_LAB_2c50b088);
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c50b078,0x131,_LAB_2c50b074,_LAB_2c50b090);
  }
}

