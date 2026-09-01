/* FUN_100fee48 @ 0x100fee48 */

void FUN_100fee48(int param_1,int param_2,uint param_3,undefined2 *param_4,undefined2 *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_24;
  
  piVar1 = (int *)(param_1 + 0x2d8);
  piVar2 = (int *)(param_1 + 0x324);
  if (param_2 == 0) {
    iVar6 = param_1 + 0xd8;
  }
  else {
    iVar6 = param_1 + 0x128;
    piVar2 = (int *)(param_1 + 0x328);
    piVar1 = (int *)(param_1 + 0x2dc);
  }
  iVar4 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar6 + 0x22);
  if (uVar8 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    uVar7 = iVar4 + *piVar1;
    if (param_3 < uVar8) {
      if ((iVar4 + param_3 * 4 + 4 <= uVar7) && (local_24 = FUN_100fad58(uVar5), local_24 == 0)) {
        uVar3 = FUN_100fb070(uVar5,&local_24);
        *param_5 = uVar3;
        if (local_24 == 0) {
          uVar3 = FUN_100fb070(uVar5,&local_24);
          *param_4 = uVar3;
          if (local_24 == 0) {
            return;
          }
        }
      }
    }
    else {
      iVar4 = iVar4 + (uVar8 - 1) * 4;
      if ((iVar4 + 2U <= uVar7) && (local_24 = FUN_100fad58(uVar5,iVar4), local_24 == 0)) {
        uVar3 = FUN_100fb070(uVar5,&local_24);
        *param_5 = uVar3;
        if (local_24 == 0) {
          if ((iVar4 + ((param_3 + 2) - uVar8) * 2 + 2 <= uVar7) &&
             (local_24 = FUN_100fad58(uVar5), local_24 == 0)) {
            uVar3 = FUN_100fb070(uVar5,&local_24);
            *param_4 = uVar3;
            return;
          }
          *param_4 = 0;
          return;
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return;
}

