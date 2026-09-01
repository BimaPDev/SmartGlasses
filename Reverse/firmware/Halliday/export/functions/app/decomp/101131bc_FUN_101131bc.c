/* FUN_101131bc @ 0x101131bc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_101131bc(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_120 [12];
  undefined2 local_114;
  undefined4 local_84;
  undefined4 uStack_80;
  
  iVar4 = DAT_10113280;
  iVar3 = DAT_1011327c;
  uVar2 = uRam10113278;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(uRam10113278);
  }
  *(undefined1 *)(DAT_1011327c + 0x22) = 0xe0;
  *(undefined1 *)(iVar3 + 0x1f) = 0;
  *(undefined1 *)(iVar3 + 0x18) = 0;
  *(undefined1 *)(iVar3 + 0x19) = 0;
  *(undefined1 *)(iVar3 + 0x1a) = 0;
  *(undefined1 *)(iVar3 + 0x20) = 0;
  *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 0x70000;
  *(undefined1 *)(iVar3 + 0x23) = 0;
  FUN_10068a30();
  FUN_10067f78();
  *(undefined4 *)(iVar3 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x2c) = 0xffffffff;
  local_114 = 0x101;
  *(undefined1 **)(iVar4 + 8) = auStack_120;
  local_84 = 0;
  uStack_80 = 0;
  FUN_1013c644();
  FUN_10112e14(0);
  FUN_10112e14(1);
  iVar3 = DAT_1011328c;
  piVar5 = DAT_10113284;
  *DAT_10113284 = DAT_10113288;
  *piVar5 = *piVar5 << 8;
  FUN_1011517c();
  uVar7 = DAT_10113298;
  uVar8 = DAT_10113294;
  uVar6 = DAT_10113290;
  *(int *)(iVar4 + 0x1c) = iVar3;
  uVar8 = FUN_101136cc(iVar3,uVar7,0x800,uVar8,0,0,0,0,1,uVar6);
  *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) & 0xfb;
  FUN_1013cc6c(iVar3);
  FUN_101130d8(0);
  uVar6 = DAT_10113294;
  *(undefined4 *)(iVar4 + 0xc) = DAT_1011329c;
  *(undefined1 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 4) = uVar2;
  FUN_10068374(iVar3,uVar8,uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

