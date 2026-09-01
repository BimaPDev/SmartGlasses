/* FUN_1012adde @ 0x1012adde */

ushort FUN_1012adde(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
                   byte *param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_100935a4(param_1,param_3,param_3,param_4,param_1,param_2,param_3);
  iVar3 = FUN_100942d8(param_3 + 1);
  if (iVar3 != 0) {
    iVar4 = FUN_100942d8(uVar2 << 1);
    if (iVar4 != 0) {
      if (param_2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        *param_2 = iVar3;
        iVar5 = iVar3;
      }
      FUN_100938d0(param_1,iVar5,param_3,param_4,iVar4,uVar2 & 0xffff);
      if (param_6 != (byte *)0x0) {
        *param_6 = (byte)((ushort)*(undefined2 *)(iVar4 + param_5 * 2) >> 0xf);
      }
      if (param_2 == (int *)0x0) {
        FUN_10094444(iVar3);
      }
      uVar1 = *(ushort *)(iVar4 + param_5 * 2);
      FUN_10094444(iVar4);
      return uVar1 & 0x7fff;
    }
    FUN_10094444(iVar3);
  }
  return 0xffff;
}

