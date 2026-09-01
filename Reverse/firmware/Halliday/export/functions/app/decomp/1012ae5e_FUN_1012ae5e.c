/* FUN_1012ae5e @ 0x1012ae5e */

uint FUN_1012ae5e(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,uint param_5,
                 byte *param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
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
      uVar6 = 0;
      while (uVar7 = uVar6 & 0xffff, uVar7 < uVar2) {
        uVar1 = *(ushort *)(iVar4 + uVar7 * 2);
        uVar6 = uVar6 + 1;
        if ((uVar1 & 0x7fff) == param_5) {
          if (param_6 != (byte *)0x0) {
            *param_6 = (byte)(uVar1 >> 0xf);
          }
          FUN_10094444(iVar4);
          if (param_2 == (int *)0x0) {
            FUN_10094444(iVar3);
            return uVar7;
          }
          return uVar7;
        }
      }
      FUN_10094444(iVar4);
      if (param_2 != (int *)0x0) {
        return 0xffff;
      }
    }
    FUN_10094444(iVar3);
  }
  return 0xffff;
}

