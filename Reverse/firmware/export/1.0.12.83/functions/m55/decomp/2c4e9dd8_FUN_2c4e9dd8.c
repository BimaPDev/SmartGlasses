/* FUN_2c4e9dd8 @ 0x2c4e9dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9dd8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9e44;
  if (iVar2 == 0) {
    FUN_2c644080(*_LAB_2c4e9e40);
    return 0;
  }
  iVar4 = *_LAB_2c4e9e44;
  *(char *)(iVar4 + 0x2b0) = (char)param_1;
  *(short *)(iVar4 + 0x2b1) = (short)param_2;
  uVar3 = func_0x2c4c2878(0,iVar4 + 0x2b0,3);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar4 + 0x2ac) = uVar3;
                    /* WARNING: Subroutine does not return */
  TRACE(4,699,_LAB_2c4e9e54,_LAB_2c4e9e50,_LAB_2c4e9e48,_LAB_2c4e9e4c,param_1,param_2,
        *(undefined4 *)(iVar2 + 0x2ac));
}

