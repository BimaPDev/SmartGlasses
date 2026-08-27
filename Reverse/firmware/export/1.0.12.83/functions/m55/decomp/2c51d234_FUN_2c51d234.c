/* FUN_2c51d234 @ 0x2c51d234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c51d234(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_2c602618(param_2);
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8));
  switch(uVar1) {
  case 0xce:
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar3 = 0x13d;
      uVar1 = _LAB_2c51d3fc;
LAB_2c51d30c:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51d3e8,uVar3,DAT_2c51d3ec,uVar1);
    }
    break;
  case 0xcf:
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar3 = 0x143;
      uVar1 = _LAB_2c51d408;
LAB_2c51d348:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51d3e8,uVar3,DAT_2c51d3ec,uVar1);
    }
    break;
  default:
    return 0;
  case 0xd3:
    if (iVar2 != 0) {
      iVar2 = FUN_2c5efa10();
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c51d3e8,0x152,DAT_2c51d3ec,_LAB_2c51d40c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51d3e8,0x14f,DAT_2c51d3ec,_LAB_2c51d410);
    }
    break;
  case 0xd4:
  case 0xe3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c51d3e8,0x149,DAT_2c51d3ec,_LAB_2c51d3e4);
  case 0xda:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c51d3e8,0x158,DAT_2c51d3ec,_LAB_2c51d3f0);
  case 0xdd:
    if (*(char *)(param_1 + 0x58) != '\0') {
      uVar3 = 0x15d;
      uVar1 = DAT_2c51d414;
      goto LAB_2c51d30c;
    }
    break;
  case 0xde:
    if (*(char *)(param_1 + 0x58) != '\0') {
      uVar3 = 0x163;
      uVar1 = _LAB_2c51d3f4;
      goto LAB_2c51d348;
    }
    break;
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c51d3e8,0x168,DAT_2c51d3ec,_LAB_2c51d3f8);
  }
  return 1;
}

