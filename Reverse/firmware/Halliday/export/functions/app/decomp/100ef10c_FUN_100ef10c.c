/* FUN_100ef10c @ 0x100ef10c */

undefined4 FUN_100ef10c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  
  piVar4 = DAT_100ef278;
  iVar8 = *DAT_100ef278;
  bVar10 = (bool)(*(byte *)(DAT_100ef278 + 2) & 1);
  cVar3 = *(char *)((int)DAT_100ef278 + 9);
  sVar2 = *(short *)(*(int *)(iVar8 + 4) + param_1 * 2);
  if ((*(byte *)(DAT_100ef278 + 2) & 1) != 0) {
    bVar10 = *(char *)(iVar8 + 2) == '\x02';
  }
  sVar1 = *(short *)(iVar8 + 0x10);
  cVar9 = (char)param_1;
  *(char *)((int)DAT_100ef278 + 9) = cVar9;
  if (sVar1 != 0) {
    uVar7 = param_1;
    if (sVar1 == sVar2) {
      uVar5 = FUN_100eee10((int)*(char *)(iVar8 + 2));
      uVar6 = FUN_100eee10((int)(char)(*(char *)(*piVar4 + 2) + '\x01'));
    }
    else {
      uVar6 = 0;
      uVar5 = 0;
    }
    FUN_100eef38(*(undefined1 *)(*piVar4 + 2),uVar5,param_2,0,uVar7,param_2,param_3);
    FUN_100eef38(*(char *)(*piVar4 + 2) + '\x01',uVar6,param_2,0);
  }
  FUN_100eef90((int)(char)(cVar3 + -1),0);
  if (bVar10 == false) {
    FUN_100eef90((int)(char)(cVar3 + '\x01'),0,0);
  }
  FUN_100ef0d4((int)(char)(cVar9 + -2));
  FUN_100ef0d4((int)(char)(cVar9 + '\x02'));
  iVar8 = (int)(char)(param_1 - 1);
  if (*(char *)((int)piVar4 + 0xb) < '\0') {
    FUN_100eeec0(param_1,2);
    FUN_100eeec0(iVar8,0);
    uVar5 = FUN_100eed80(iVar8);
    FUN_100eef90(iVar8,uVar5,0);
    if (bVar10 != false) {
      return 0;
    }
    cVar9 = cVar9 + '\x01';
  }
  else {
    *(undefined1 *)((int)piVar4 + 0xb) = 0xff;
    if ((1 << (param_1 & 0xff) & piVar4[1]) == 0) {
      FUN_100eeec0(param_1,2);
    }
    else {
      uVar5 = FUN_100eed80(param_1);
      FUN_100eef90(param_1,uVar5,0);
    }
    uVar7 = 1 << (param_1 - 1 & 0xff) & piVar4[1];
    if (uVar7 == 0) {
      FUN_100eeec0(iVar8,0);
      uVar5 = FUN_100eed80(iVar8);
    }
    else {
      uVar5 = FUN_100eed80(iVar8);
      uVar7 = 0;
    }
    FUN_100eef90(iVar8,uVar5,uVar7);
    cVar9 = (char)(param_1 + 1);
    if ((1 << (param_1 + 1 & 0xff) & piVar4[1]) != 0) {
      if (bVar10 != false) {
        return 0;
      }
      iVar8 = (int)cVar9;
      goto LAB_100ef200;
    }
    if (bVar10 != false) {
      return 0;
    }
  }
  iVar8 = (int)cVar9;
  FUN_100eeec0(iVar8,bVar10);
LAB_100ef200:
  uVar5 = FUN_100eed80(iVar8);
  FUN_100eef90(iVar8,uVar5,bVar10);
  return 0;
}

