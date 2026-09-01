/* FUN_100a18bc @ 0x100a18bc */

void FUN_100a18bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = DAT_100a1940;
  FUN_1011dbf4(DAT_100a1944,0xffffffff,param_3,param_4,param_1,param_2,param_3);
  uVar3 = DAT_100a1954;
  uVar2 = DAT_100a1950;
  iVar7 = DAT_100a1948 - DAT_100a194c;
  iVar8 = iVar1;
  for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(iVar1 + 4); iVar9 = iVar9 + 1) {
    uVar6 = *(undefined4 *)(iVar8 + 8);
    uVar4 = FUN_1011ea10(param_1);
    iVar5 = FUN_1011ea30(uVar6,param_1,uVar4);
    if ((iVar5 == 0) && (*(char *)(iVar8 + 0xc) == '\0')) {
      *(undefined1 *)(iVar8 + 0xc) = 1;
      *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
      FUN_100a5b78(iVar7 * 0x20 & 0xff00U | 0xcb0031,uVar3,uVar2,*(undefined4 *)(iVar8 + 8));
    }
    iVar8 = iVar8 + 8;
  }
  FUN_100a1684();
  return;
}

