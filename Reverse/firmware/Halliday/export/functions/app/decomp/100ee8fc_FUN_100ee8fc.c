/* FUN_100ee8fc @ 0x100ee8fc */

int FUN_100ee8fc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  FUN_1011dbf4(DAT_100ee984,0xffffffff,param_3,param_4,param_4);
  iVar1 = DAT_100ee988;
  if ((*(byte *)(DAT_100ee988 + 0x51) & 1) == 0) {
    iVar7 = -3;
    goto LAB_100ee96e;
  }
  uVar6 = (uint)*(byte *)(DAT_100ee988 + 0x50);
  if (uVar6 < 5) {
    if (uVar6 != 0) goto LAB_100ee92c;
    param_2 = 1;
    iVar7 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar7 = -0x1c;
      goto LAB_100ee96e;
    }
LAB_100ee92c:
    iVar7 = DAT_100ee988 + (uVar6 - 1) * 0x10;
  }
  FUN_100a5b78(DAT_100ee994 | (DAT_100ee990 - DAT_100ee98c) * 0x20 & 0xff00U,DAT_100ee99c,
               DAT_100ee998);
  iVar7 = FUN_100ee748(iVar7,param_1);
  if (iVar7 == 0) {
    uVar6 = (uint)*(byte *)(iVar1 + 0x50);
    if (param_2 == 0) {
      uVar6 = uVar6 - 1;
    }
    else {
      *(byte *)(iVar1 + 0x50) = *(byte *)(iVar1 + 0x50) + 1;
    }
    puVar5 = (undefined4 *)(iVar1 + uVar6 * 0x10);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *puVar5 = *param_1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
  }
LAB_100ee96e:
  FUN_100ee690();
  return iVar7;
}

