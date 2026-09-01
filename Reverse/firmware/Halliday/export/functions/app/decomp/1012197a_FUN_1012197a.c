/* FUN_1012197a @ 0x1012197a */

undefined4 FUN_1012197a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar11;
  
  iVar4 = FUN_101214ae();
  if (iVar4 == 1) {
    return 1;
  }
  iVar10 = param_1[3];
  iVar11 = *(int *)(iVar10 + 0x74);
  bVar2 = FUN_101214fa();
  iVar4 = (uint)bVar2 * 0xc;
  iVar7 = iVar4 + iVar10;
  *(int *)(iVar10 + 0x8c) = iVar4 + 0x90 + iVar10;
  if ((*(char *)(iVar7 + 0x90) == '\0') || (cVar1 = *(char *)(iVar7 + 0x91), cVar1 == -1)) {
LAB_1007f8dc:
    uVar3 = FUN_10120ace(param_1,param_2);
    iVar4 = FUN_1007f704(param_1,uVar3);
    if (iVar4 == 1) {
      *(undefined1 *)(*(int *)(iVar10 + 0x8c) + 1) = *(undefined1 *)(*(int *)(iVar10 + 0x74) + 1);
      puVar9 = *(undefined1 **)(iVar10 + 0x8c);
      *(short *)(puVar9 + 2) = (short)uVar3;
      *puVar9 = 0;
      return 1;
    }
  }
  else {
    cVar5 = *(char *)(iVar11 + 1);
    if (cVar5 == cVar1) {
LAB_1007f8a6:
      iVar4 = FUN_10121390(param_1,*(undefined1 *)((uint)bVar2 * 0xc + iVar10 + 0x92),cVar5,0xc,
                           param_4,unaff_r4,unaff_r5);
      if (iVar4 == 1) {
        *(int *)(iVar10 + 0x74) = iVar11;
        goto LAB_1007f8dc;
      }
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return 0;
      }
      uVar6 = 0x1eb;
      uVar3 = DAT_1007f91c;
    }
    else {
      cVar5 = *(char *)(iVar10 + 0x79);
      if (cVar5 == cVar1) {
        *(int *)(iVar10 + 0x74) = iVar10 + 0x78;
        goto LAB_1007f8a6;
      }
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return 0;
      }
      uVar6 = 0x1e4;
      uVar3 = DAT_1007f920;
    }
    (*pcVar8)(uVar3,DAT_1007f918,uVar6);
  }
  return 0;
}

