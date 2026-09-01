/* FUN_1011df34 @ 0x1011df34 */

undefined1 FUN_1011df34(int param_1,uint3 param_2)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = (uint)param_2;
  iVar1 = FUN_1011df0c(param_1,(int)&uStack_c + 3,1,0,param_1);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) | 1;
  }
  return uStack_c._3_1_;
}

