/* FUN_2c533720 @ 0x2c533720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c533720(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_4 + 0x14);
  uVar4 = *(undefined4 *)(param_4 + 0xc);
  lVar1 = (longlong)_LAB_2c53378c;
  iVar2 = FUN_2c5e8cf4(3,param_2,(int)(lVar1 * iVar3));
  if (iVar2 != 0) {
    FUN_2c5332dc(param_1,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5330e0,0x194,_LAB_2c5330e4,_LAB_2c5330dc,
                 iVar3 + ((int)(lVar1 * iVar3 >> 0x22) - (iVar3 >> 0x1f)) * -10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c533798,0x92,_LAB_2c533794,_LAB_2c533790,3);
}

