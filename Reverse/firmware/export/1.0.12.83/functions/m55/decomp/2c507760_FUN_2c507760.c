/* FUN_2c507760 @ 0x2c507760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c507760(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xce:
    if (*(char *)(param_1 + 100) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5079dc,0x1e9,_LAB_2c5079d8,_LAB_2c5079fc);
    }
    break;
  case 0xcf:
    if (*(char *)(param_1 + 100) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5079dc,0x1fe,_LAB_2c5079d8,_LAB_2c5079d4);
    }
    break;
  default:
    return 0;
  case 0xd2:
    if (*(char *)(param_1 + 100) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5079dc,0x1d8,_LAB_2c5079d8,_LAB_2c5079e0);
    }
    break;
  case 0xd3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5079dc,0x212,_LAB_2c5079d8,_LAB_2c5079ec);
  case 0xd4:
  case 0xdb:
  case 0xdc:
  case 0xe3:
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    return 1;
  case 0xda:
    *(undefined1 *)(param_1 + 100) = 1;
    if (*(char *)(param_1 + 0x65) == '\0') {
      if (*(char *)(param_1 + 0x66) == '\x01') {
        FUN_2c507484(param_1,1);
        FUN_2c5074dc(param_1,2);
      }
      else if (*(char *)(param_1 + 0x66) == '\x02') {
        FUN_2c5074dc(param_1,1);
        FUN_2c507484(param_1,2);
      }
      *(undefined1 *)(param_1 + 0x65) = 1;
      return 1;
    }
    break;
  case 0xdd:
    if (*(char *)(param_1 + 100) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5079dc,0x224,_LAB_2c5079d8,_LAB_2c5079f0);
    }
    break;
  case 0xde:
    if (*(char *)(param_1 + 100) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5079dc,0x22e,_LAB_2c5079d8,_LAB_2c5079f4);
    }
    break;
  case 0xdf:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5079dc,0x237,_LAB_2c5079d8,_LAB_2c5079f8);
  }
  return 1;
}

