/* FUN_2c4ad778 @ 0x2c4ad778 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ad778(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _LAB_2c4ad7d8;
  param_3[4] = param_4;
  param_3[1] = param_4;
  param_3[5] = param_1;
  *(undefined1 *)(param_3 + 4) = 1;
  *param_3 = uVar1;
  *(undefined4 *)(param_2 + 0x14) = param_4;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)(param_2 + 8) = param_4;
  iVar2 = func_0x2c4b73b0(1,_LAB_2c4ad7dc,param_4);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4ad7f0,iVar2);
  }
  iVar2 = func_0x2c4b73dc(1);
  uVar1 = _LAB_2c4ad7e0;
  if (iVar2 == 0) {
    func_0x2c4b52ac(_LAB_2c4ad7e4);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x56,_LAB_2c4ad7ec,_LAB_2c4ad7e8,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4ad7f4,iVar2);
}

