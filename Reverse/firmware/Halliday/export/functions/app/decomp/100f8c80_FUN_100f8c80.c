/* FUN_100f8c80 @ 0x100f8c80 */

undefined4 FUN_100f8c80(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = param_1[3];
  uVar3 = param_2 + param_1[0xc] + param_1[0x15];
  if (uVar3 <= uVar4) {
    return 0;
  }
  iVar5 = param_1[0xd];
  if (-1 < (int)uVar4) {
    uVar3 = uVar3 + 1 & 0xfffffffe;
    if (-1 < (int)uVar3) {
      iVar1 = *param_1;
      if (uVar3 == 0) {
        if (iVar5 == 0) {
          param_1[3] = 0;
          iVar1 = 0;
        }
        else {
          (**(code **)(iVar1 + 8))(iVar1,iVar5);
          param_1[0xd] = 0;
          param_1[3] = 0;
          iVar1 = 0;
        }
        goto LAB_100f8cbc;
      }
      if (0x3ffffff < (int)uVar3) {
        uVar2 = 10;
        goto LAB_100f8cc6;
      }
      if (uVar4 == 0) {
        iVar1 = (**(code **)(iVar1 + 4))(iVar1,uVar3 << 5);
        if (iVar1 == 0) {
          uVar2 = 0x40;
          iVar5 = 0;
          goto LAB_100f8cc6;
        }
        iVar6 = 0;
LAB_100f8ce0:
        FUN_1011ea48(iVar1 + iVar6,0,(uVar3 - uVar4) * 0x20);
      }
      else {
        iVar6 = uVar4 << 5;
        iVar1 = (**(code **)(iVar1 + 0xc))(iVar1,iVar6,uVar3 << 5,iVar5,param_4);
        if (iVar1 == 0) {
          uVar2 = 0x40;
          goto LAB_100f8cc6;
        }
        if ((int)uVar4 < (int)uVar3) goto LAB_100f8ce0;
      }
      param_1[0xd] = iVar1;
      param_1[3] = uVar3;
      iVar1 = iVar1 + param_1[0xc] * 0x20;
LAB_100f8cbc:
      param_1[0x16] = iVar1;
      return 0;
    }
  }
  uVar2 = 6;
LAB_100f8cc6:
  param_1[0xd] = iVar5;
  return uVar2;
}

