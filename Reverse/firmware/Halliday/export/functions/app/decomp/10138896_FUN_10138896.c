/* FUN_10138896 @ 0x10138896 */

undefined4 FUN_10138896(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == 0xd) || (((int)(uint)*(ushort *)(param_1 + 0xa2) >> (param_2 & 0xff)) << 0x1f < 0)
     ) {
    iVar2 = FUN_1013871c(param_1,0,3,0x31);
    if (iVar2 != 0) {
      FUN_101327da(iVar2 + 8,5);
      FUN_101386a6(iVar2,param_2);
      FUN_10132808(iVar2 + 8,param_2 == 5);
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (param_2 & 0xff);
      uVar1 = FUN_100e40e4(param_1,iVar2);
      return uVar1;
    }
    uVar1 = 0xfffffff4;
  }
  else {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & ~(1 << (param_2 & 0xff));
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

