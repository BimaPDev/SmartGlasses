/* FUN_2c4c2978 @ 0x2c4c2978 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c2978(int *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = _LAB_2c4c29d0;
  iVar3 = *param_3;
  uVar4 = *param_4 - iVar3;
  if ((param_2 & 3) != 0) {
    param_2 = (param_2 & 0xfffffffc) + 4;
  }
  if (param_2 <= uVar4) {
    *param_3 = param_2 + iVar3;
    uVar2 = _LAB_2c4c29d8;
    iVar3 = iVar3 + _LAB_2c4c29d4;
    *param_1 = iVar3;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x49,_LAB_2c4c29e0,_LAB_2c4c29dc,uVar1,uVar2,iVar3,param_2,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4c29e4,param_2,uVar4);
}

