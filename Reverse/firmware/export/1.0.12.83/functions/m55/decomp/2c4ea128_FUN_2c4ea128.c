/* FUN_2c4ea128 @ 0x2c4ea128 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ea128(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4ea210;
  if (iVar2 == 0) {
    FUN_2c644080(*_LAB_2c4ea220);
    return 1;
  }
  iVar2 = func_0x2c4c2878(0,*_LAB_2c4ea210 + 0x14c,0x15c);
  if (*(int *)(*piVar1 + 0x148) == iVar2) {
    switch(param_1) {
    case 1:
      uVar3 = 0xa8;
      break;
    case 2:
      uVar3 = 0x30;
      break;
    case 3:
      uVar3 = 0x24;
      break;
    case 4:
      uVar3 = 0x24;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x15d,_LAB_2c4ea218,_LAB_2c4ea21c,_LAB_2c4ea22c,param_1);
    }
    if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x161,_LAB_2c4ea218,_LAB_2c4ea21c,_LAB_2c4ea228,param_3);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x164,_LAB_2c4ea218,_LAB_2c4ea21c,_LAB_2c4ea214,param_1,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(1,0x142,_LAB_2c4ea218,_LAB_2c4ea21c,_LAB_2c4ea224);
}

