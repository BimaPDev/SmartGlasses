/* FUN_2c4ec7f4 @ 0x2c4ec7f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ec7f4(undefined4 param_1,uint param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  *_LAB_2c4ec868 = _LAB_2c4ec86c;
  *_LAB_2c4ec870 = (char)param_1;
  iVar3 = func_0x2c4ec460();
  piVar1 = _LAB_2c4ec874;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c4ec884,0x1ec,_LAB_2c4ec880,_LAB_2c4ec888,param_1);
  }
  if (param_2 < *(byte *)(iVar3 + 8)) {
    *(undefined1 *)(_LAB_2c4ec874 + 1) = param_3;
    uVar2 = _LAB_2c4ec878;
    iVar3 = *(int *)(iVar3 + 4);
    *(short *)((int)piVar1 + 6) = (short)param_2;
    *piVar1 = iVar3 + param_2 * 0x24;
    func_0x2c4ec178(uVar2);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c4ec884,0x1f0,_LAB_2c4ec880,_LAB_2c4ec87c,param_2);
}

