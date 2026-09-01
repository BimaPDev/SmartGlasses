/* FUN_1012fa5e @ 0x1012fa5e */

bool FUN_1012fa5e(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 extraout_r2;
  int iVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    uVar1 = *(ushort *)(param_1 + 0x10e);
    uVar2 = *(ushort *)(param_1 + 0x110);
    uVar3 = *(ushort *)(param_1 + 0x112);
    iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
    uVar4 = FUN_1012d532(*param_2,param_3,param_3,*(int *)(param_1 + 0xc),param_4);
    if ((int)param_2[2] < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1012d532(param_2[1],param_3);
    }
    if ((uVar4 < uVar1) && (uVar5 < uVar1)) {
      if (iVar6 * (uint)uVar2 <= *(uint *)(param_1 + 0x104)) {
        *(undefined1 *)(param_1 + 0x101) = 1;
        *(undefined4 *)(param_1 + 0x108) = 0;
      }
      if ((*(char *)(param_1 + 0x102) == '\0') && (*(char *)(param_1 + 0x101) != '\0')) {
        FUN_1012fa1c(param_2,param_3);
        *(undefined1 *)(param_1 + 0x101) = extraout_r2;
        *(undefined1 *)(param_1 + 0x102) = 1;
      }
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + param_3;
    }
    else if (*(char *)(param_1 + 0x101) == '\x01') {
      if (iVar6 * (uint)uVar3 <= *(uint *)(param_1 + 0x108)) {
        *(undefined4 *)(param_1 + 0x104) = 0;
        *(undefined1 *)(param_1 + 0x101) = 0;
      }
      if ((*(char *)(param_1 + 0x102) != '\0') && (*(char *)(param_1 + 0x101) == '\0')) {
        FUN_1012fa1c(param_2,param_3,1);
        *(undefined1 *)(param_1 + 0x102) = 0;
      }
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    bVar7 = *(char *)(param_1 + 0x101) == '\x01';
  }
  else {
    bVar7 = false;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return bVar7;
}

