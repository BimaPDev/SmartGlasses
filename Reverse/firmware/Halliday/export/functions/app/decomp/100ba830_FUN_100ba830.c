/* FUN_100ba830 @ 0x100ba830 */

bool FUN_100ba830(undefined4 param_1,uint3 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uStack_c;
  
  bVar2 = false;
  uStack_c = (uint)param_2;
  iVar1 = thunk_FUN_1009efa0(DAT_100ba85c,(int)&uStack_c + 3,1,param_4,param_1);
  if (iVar1 == 1) {
    bVar2 = uStack_c._3_1_ == '\x01';
  }
  return bVar2;
}

