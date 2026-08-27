/* FUN_140c5038 @ 0x140c5038 */

void FUN_140c5038(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  iVar5 = 0;
  puVar7 = (undefined1 *)(param_1 + 0xd);
  do {
    iVar2 = FUN_140df694(iVar5);
    if (iVar2 == -1) {
      uVar4 = 0;
      goto LAB_140c505a;
    }
    iVar5 = iVar5 + 1;
    *puVar7 = (char)iVar2;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 0x80);
  uVar4 = 1;
LAB_140c505a:
  *(undefined1 *)(param_1 + 0xc) = uVar4;
  iVar5 = 0;
  puVar8 = (undefined4 *)(param_1 + 0x90);
  do {
    iVar2 = iVar5 + 1;
    uVar3 = FUN_140da918(iVar5);
    *puVar8 = uVar3;
    iVar5 = iVar2;
    puVar8 = puVar8 + 1;
  } while (iVar2 != 0x100);
  uVar6 = 0;
  puVar8 = (undefined4 *)(param_1 + 0x4a0);
  puVar7 = (undefined1 *)(param_1 + 0x490);
  do {
    uVar1 = uVar6 & 0xff;
    uVar6 = uVar6 + 1;
    *puVar7 = (char)(1 << uVar1);
    uVar3 = FUN_140c4de0(param_1);
    *puVar8 = uVar3;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar6 != 8);
  return;
}

