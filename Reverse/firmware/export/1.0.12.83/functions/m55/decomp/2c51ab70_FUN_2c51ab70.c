/* FUN_2c51ab70 @ 0x2c51ab70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c51ab70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  
  uVar1 = FUN_2c602618(param_2);
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8));
  switch(uVar1) {
  case 0xce:
  case 0xcf:
  case 0xd8:
  case 0xd9:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
    iVar2 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x20),1);
    if (iVar2 == 0) {
      FUN_2c51ab14(param_1);
      return 1;
    }
    break;
  default:
    return 0;
  case 0xd2:
    iVar2 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x18),2);
    if (iVar2 == 0) {
      iVar2 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x20),2);
      if (iVar2 != 0) {
        FUN_2c5210a8();
        func_0x2c5218fc();
        return iVar2;
      }
    }
    else {
      iVar2 = FUN_2c4fefa4(*(undefined4 *)(param_1 + 0x18));
      if (iVar2 != 0) {
        piVar4 = *(int **)(param_1 + 4);
        pcVar5 = *(code **)*piVar4;
        uVar1 = (*(code *)((undefined4 *)*piVar4)[0xc])(piVar4);
        (*pcVar5)(piVar4,uVar1);
        return iVar2;
      }
    }
    break;
  case 0xd3:
    if (iVar2 != 0) {
      iVar2 = FUN_2c5efa10();
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c51ac98,0xf6,_LAB_2c51ac9c,_LAB_2c51acac);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51ac98,0xf9,_LAB_2c51ac9c,_LAB_2c51aca0);
    }
    break;
  case 0xd4:
  case 0xe3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c51ac98,0xf0,_LAB_2c51ac9c,_LAB_2c51ac94);
  case 0xda:
    uVar1 = 0xff;
    uVar3 = _LAB_2c51aca4;
    goto LAB_2c51ac4a;
  case 0xdf:
    uVar1 = 0x10a;
    uVar3 = _LAB_2c51aca8;
LAB_2c51ac4a:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c51ac98,uVar1,_LAB_2c51ac9c,uVar3);
  }
  return 1;
}

