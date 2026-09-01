/* FUN_100a1c18 @ 0x100a1c18 */

undefined4 FUN_100a1c18(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  uint uVar7;
  undefined1 auStack_20 [16];
  
  puVar3 = (undefined1 *)FUN_1011ea48(DAT_100a1c40,0,0x34);
  *puVar3 = 0;
  FUN_101164a0(puVar3 + 0x18,DAT_100a1c44,0);
  piVar2 = DAT_100a2260;
  puVar1 = DAT_100a225c;
  puVar4 = DAT_100a225c + 1;
  *DAT_100a2260 = (int)DAT_100a225c;
  FUN_1011ea48(puVar4,0,0x14,in_r3);
  *puVar1 = 10000;
  FUN_1011ea48(auStack_20,0,0x10);
  iVar5 = thunk_FUN_1009efa0(DAT_100a2264,auStack_20,0x10);
  uVar7 = (DAT_100a2268 - DAT_100a226c) * 0x20 & 0xff00;
  if ((iVar5 < 1) || (iVar5 = FUN_1011ea18(auStack_20,DAT_100a2284), iVar5 != 0)) {
    iVar5 = *piVar2;
    uVar6 = DAT_100a2270;
  }
  else {
    FUN_100a5b78(DAT_100a2288 | uVar7,DAT_100a2280,DAT_100a228c);
    uVar6 = 0xffffffff;
    iVar5 = *piVar2;
  }
  *(undefined4 *)(iVar5 + 4) = uVar6;
  iVar5 = *piVar2;
  *(undefined2 *)(iVar5 + 8) = 0x200;
  uVar6 = FUN_1012d932();
  *(undefined4 *)(iVar5 + 0xc) = uVar6;
  iVar5 = FUN_100a1c48(DAT_100a2274);
  if (iVar5 == 0) {
    FUN_1005bf90(DAT_100a2290);
    FUN_100a5b78(DAT_100a2294 | uVar7,DAT_100a2280,DAT_100a2298,*(undefined4 *)*piVar2);
    FUN_1013ca1a(DAT_100a229c,0,1);
    uVar6 = FUN_1011db7e(DAT_100a22a4,0x500,DAT_100a22a0,0,0,0,0xe,0,0);
    FUN_10113564(uVar6,DAT_100a22a8);
    uVar6 = 0;
  }
  else {
    FUN_100a5b78(DAT_100a2278 | uVar7,DAT_100a2280,DAT_100a227c);
    uVar6 = 0xfffffff2;
  }
  return uVar6;
}

