/* FUN_10093728 @ 0x10093728 */

void FUN_10093728(int param_1,int param_2,int param_3,int param_4,short param_5,short param_6)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int local_2c [2];
  
  uVar8 = 0;
  iVar9 = 0;
  local_2c[0] = param_3;
LAB_10093744:
  while( true ) {
    if (local_2c[0] == 0) {
      return;
    }
    uVar2 = (*(code *)*DAT_10093894)(param_2,local_2c);
    iVar3 = FUN_10093574();
    iVar4 = local_2c[0];
    param_6 = param_6 + -1;
    sVar1 = param_6;
    if (iVar3 == 0) break;
    while (local_2c[0] != 0) {
      uVar2 = (*(code *)*DAT_10093894)(param_2,local_2c);
      iVar3 = FUN_10093574();
      if (((iVar3 == 0) && ((uVar2 & 0xfffffffd) != 0x2c)) && (1 < uVar2 - 0x24)) {
        (*(code *)*DAT_10093898)(param_2,local_2c);
        iVar3 = local_2c[0];
        sVar10 = sVar1;
        if (local_2c[0] != 0) goto LAB_100937aa;
        break;
      }
      sVar1 = sVar1 + -1;
    }
    iVar3 = 0;
    sVar10 = 0;
LAB_100937aa:
    if (param_1 != 0) {
      thunk_FUN_1011ea40(param_1 + iVar9,param_2 + iVar3,(iVar4 + 1) - iVar3);
    }
    if (param_4 != 0) {
      FUN_1012adbe(param_4 + uVar8 * 2,(int)(short)(param_6 - sVar10) + 1U & 0xffff,sVar10 + param_5
                  );
    }
    iVar9 = (iVar9 + iVar4 + 1) - iVar3;
    uVar8 = uVar8 + 1 + (int)(short)(param_6 - sVar10) & 0xffff;
    param_6 = sVar1;
  }
  iVar4 = (*(code *)*DAT_1009389c)(param_2 + local_2c[0]);
  if (iVar4 == 1) {
    uVar7 = 0;
    do {
      uVar5 = uVar7 & 0xff;
      uVar6 = (uint)*(byte *)(DAT_100938a0 + uVar5);
      if (uVar6 == 0) {
        uVar7 = 0;
        goto LAB_10093824;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar6);
    uVar2 = (uint)*(byte *)(DAT_100938a4 + uVar5);
    goto LAB_10093848;
  }
  if (param_1 != 0) {
    thunk_FUN_1011ea40(param_1 + iVar9,local_2c[0] + param_2,iVar4);
  }
  if (param_4 != 0) {
    *(ushort *)(param_4 + uVar8 * 2) = ~((ushort)~((param_6 + param_5) * 2) >> 1);
  }
  iVar9 = iVar9 + iVar4;
  goto LAB_10093866;
  while (uVar7 = uVar7 + 1, uVar2 != uVar6) {
LAB_10093824:
    uVar5 = uVar7 & 0xff;
    uVar6 = (uint)*(byte *)(DAT_100938a4 + uVar5);
    if (uVar6 == 0) goto LAB_10093848;
  }
  uVar2 = (uint)*(byte *)(DAT_100938a0 + uVar5);
LAB_10093848:
  if (param_1 != 0) {
    *(char *)(param_1 + iVar9) = (char)uVar2;
  }
  if (param_4 != 0) {
    *(ushort *)(param_4 + uVar8 * 2) = ~((ushort)~((param_6 + param_5) * 2) >> 1);
  }
  iVar9 = iVar9 + 1;
LAB_10093866:
  uVar8 = uVar8 + 1 & 0xffff;
  goto LAB_10093744;
}

