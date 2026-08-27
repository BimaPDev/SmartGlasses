/* FUN_2c4e9b44 @ 0x2c4e9b44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9b44(undefined1 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  FUN_2c4e9504();
  iVar5 = FUN_2c4e9950();
  piVar2 = _LAB_2c4e9be4;
  if (iVar5 == 0) {
    FUN_2c644080(*_LAB_2c4e9bf8);
    return 1;
  }
  iVar5 = func_0x2c4c2878(0,*_LAB_2c4e9be4 + 0x2b0,3);
  uVar3 = _LAB_2c4e9be8;
  iVar6 = *piVar2;
  if (*(int *)(iVar6 + 0x2ac) == iVar5) {
    if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined2 *)0x0)) {
      *param_1 = *(undefined1 *)(iVar6 + 0x2b0);
      uVar4 = _LAB_2c4e9bec;
      uVar1 = *(undefined2 *)(iVar6 + 0x2b1);
      *param_2 = uVar1;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2d7,_LAB_2c4e9bf4,_LAB_2c4e9bf0,uVar4,uVar3,*param_1,uVar1);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x2d0,_LAB_2c4e9bf4,_LAB_2c4e9bf0,_LAB_2c4e9c00);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(1,0x2cb,_LAB_2c4e9bf4,_LAB_2c4e9bf0,_LAB_2c4e9bfc,iVar5,*(int *)(iVar6 + 0x2ac));
}

