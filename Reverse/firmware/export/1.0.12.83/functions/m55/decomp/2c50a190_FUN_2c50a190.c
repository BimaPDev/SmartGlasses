/* FUN_2c50a190 @ 0x2c50a190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c50a190(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xce:
  case 0xd9:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1db,_LAB_2c50a2d8,_LAB_2c50a2d4);
  case 0xcf:
  case 0xd8:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1e2,_LAB_2c50a2d8,_LAB_2c50a2e0);
  default:
    return 0;
  case 0xd2:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1d4,_LAB_2c50a2d8,_LAB_2c50a2e4);
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
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1eb,_LAB_2c50a2d8,_LAB_2c50a2f0);
  case 0xdd:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1ef,_LAB_2c50a2d8,_LAB_2c50a2e8);
  case 0xde:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1f5,_LAB_2c50a2d8,_LAB_2c50a2ec);
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c50a2dc,0x1fb,_LAB_2c50a2d8,_LAB_2c50a2f4);
  }
}

