/* FUN_10134f22 @ 0x10134f22 */

uint FUN_10134f22(int param_1,int param_2,int param_3,uint param_4,code *param_5,undefined4 param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar2 = FUN_10134e3e(param_3);
  if (uVar2 < *(ushort *)(param_1 + 0x66)) {
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar3 = FUN_100c1d54(param_3);
    uVar8 = 0;
    while( true ) {
      iVar4 = FUN_10134e3e(param_3);
      uVar1 = *(ushort *)(param_1 + 0x66);
      uVar2 = FUN_10132790(iVar3 + 8);
      if ((uint)uVar1 - iVar4 < uVar2) {
        iVar4 = FUN_10134e3e(param_3);
        uVar7 = (uint)*(ushort *)(param_1 + 0x66) - iVar4;
      }
      else {
        uVar7 = FUN_10132790(iVar3 + 8);
      }
      if (uVar7 == 0) {
        uVar9 = FUN_100c195c(*(undefined1 *)(param_3 + 6));
        iVar3 = FUN_1013270a((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0);
        if (iVar3 == 0) {
          return uVar8;
        }
        FUN_100c1df0(param_3,iVar3);
        iVar4 = FUN_10134e3e(param_3);
        uVar1 = *(ushort *)(param_1 + 0x66);
        uVar2 = FUN_10132790(iVar3 + 8);
        if ((uint)uVar1 - iVar4 < uVar2) {
          iVar4 = FUN_10134e3e(param_3);
          uVar7 = (uint)*(ushort *)(param_1 + 0x66) - iVar4;
        }
        else {
          uVar7 = FUN_10132790(iVar3 + 8);
        }
      }
      uVar2 = (**(code **)(param_2 + 4))
                        (uVar6,param_2,(uint)*(ushort *)(iVar3 + 0xc) + *(int *)(iVar3 + 8),
                         uVar7 & 0xffff,param_4);
      if ((int)uVar2 < 0) break;
      if ((param_5 != (code *)0x0) && (iVar4 = (*param_5)(iVar3,uVar2,param_6), iVar4 == 0)) {
        return uVar8;
      }
      FUN_100c1fe4(iVar3 + 8,uVar2);
      uVar5 = FUN_10134e3e(param_3);
      uVar8 = uVar8 + uVar2;
      param_4 = param_4 + uVar2 & 0xffff;
      if (*(ushort *)(param_1 + 0x66) <= uVar5) {
        return uVar8;
      }
      if (uVar2 != uVar7) {
        return uVar8;
      }
    }
    if (uVar8 != 0) {
      uVar2 = uVar8;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

