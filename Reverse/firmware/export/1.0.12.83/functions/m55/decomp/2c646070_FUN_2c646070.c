/* FUN_2c646070 @ 0x2c646070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c646070(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = _LAB_2c646104;
  if ((*(char *)(_LAB_2c646104 + 8) == '\x02') &&
     (iVar8 = *(int *)(_LAB_2c646104 + 0x24), iVar8 != 0)) {
    iVar4 = *(int *)(_LAB_2c646104 + 0x14);
    cVar6 = *(char *)(iVar4 + 0x20);
    if (*(char *)(iVar8 + 0x20) == cVar6) {
      if (*(int *)(iVar8 + 0xc) != 0) {
        iVar7 = *(int *)(iVar8 + 8);
        *(int *)(*(int *)(iVar8 + 0xc) + 8) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
        }
        *(undefined4 *)(iVar8 + 0xc) = 0;
        cVar6 = *(char *)(iVar4 + 0x20);
      }
      *(undefined1 *)(iVar4 + 1) = 1;
      iVar3 = *(int *)(iVar2 + 0x24);
      iVar7 = _LAB_2c646108;
      while (iVar1 = iVar3, iVar1 != 0) {
        if (*(char *)(iVar1 + 0x20) < cVar6) {
          *(int *)(iVar4 + 8) = iVar1;
          *(int *)(iVar4 + 0xc) = iVar7;
          *(int *)(iVar7 + 8) = iVar4;
          *(int *)(iVar1 + 0xc) = iVar4;
          goto LAB_2c6460cc;
        }
        iVar7 = iVar1;
        iVar3 = *(int *)(iVar1 + 8);
      }
      *(undefined4 *)(iVar4 + 8) = 0;
      *(int *)(iVar4 + 0xc) = iVar7;
      *(int *)(iVar7 + 8) = iVar4;
LAB_2c6460cc:
      FUN_2c643a84();
      *(undefined1 *)(iVar8 + 1) = 2;
      iVar4 = *(int *)(iVar2 + 0x14);
      *(int *)(iVar2 + 0x18) = iVar8;
      if (iVar8 != iVar4) {
        if (iVar4 != 0) {
          uVar5 = FUN_2c673c88();
          *(undefined4 *)(iVar4 + 0x48) = uVar5;
        }
        uVar5 = FUN_2c673c88();
        *(undefined4 *)(iVar8 + 0x44) = uVar5;
      }
      FUN_2c645d84();
      FUN_2c643a88(iVar8);
    }
  }
  return 0;
}

