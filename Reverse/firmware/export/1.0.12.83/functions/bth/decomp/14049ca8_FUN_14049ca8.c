/* FUN_14049ca8 @ 0x14049ca8 */

void FUN_14049ca8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_14049d90;
  FUN_140e5658(DAT_14049d90,0,0x19c);
  uVar3 = FUN_140280f4();
  uVar4 = FUN_1404e2b8(uVar3);
  *(undefined1 *)(iVar1 + 0x180) = uVar4;
  uVar3 = FUN_1404f55c(uVar3);
  *(undefined2 *)(iVar1 + 0x188) = 3;
  *(undefined1 *)(iVar1 + 0x197) = uVar3;
  *(undefined1 *)(iVar1 + 0x181) = 0xbd;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0x100;
  *(undefined2 *)(iVar1 + 0x198) = 0;
  *(undefined1 *)(iVar1 + 0x187) = 0;
  *(undefined2 *)(iVar1 + 0x182) = 0;
  *(undefined2 *)(iVar1 + 0x184) = 0x100;
  *(undefined2 *)(iVar1 + 0x194) = 0;
  *(undefined1 *)(iVar1 + 0x196) = 0;
  FUN_140515ac(iVar1 + 0x180);
  *(int *)(iVar1 + 0x158) = iVar1 + 0x158;
  *(int *)(iVar1 + 0x15c) = iVar1 + 0x158;
  *(int *)(iVar1 + 0x14c) = iVar1 + 0x14c;
  *(int *)(iVar1 + 0x150) = iVar1 + 0x14c;
  *(undefined1 *)(iVar1 + 0x124) = 0xff;
  *(undefined4 *)(iVar1 + 0x140) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x144) = 0xff;
  *(undefined2 *)(iVar1 + 0x122) = 0xffff;
  *(undefined1 *)(iVar1 + 0x138) = 0xff;
  FUN_14052a74();
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined1 *)(iVar1 + 0x5b) = 0xff;
  *(undefined2 *)(iVar1 + 0x10) = 0x100;
  *(undefined1 *)(iVar1 + 0x60) = *(undefined1 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar1 + 0x61) = *(undefined1 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined2 *)(iVar1 + 0x1a) = 0;
  *(undefined2 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 0;
  *(undefined1 *)(iVar1 + 0x12) = 1;
  if (*(int *)(iVar1 + 0x28) != 0) {
    FUN_140e5718();
  }
  uVar5 = FUN_140e52f8(DAT_14049d98,0,DAT_14049d94);
  uVar6 = DAT_14049da0;
  uVar2 = DAT_14049d9c;
  *(undefined4 *)(iVar1 + 0x28) = uVar5;
  uVar6 = FUN_140e52f8(uVar6,0,uVar2);
  uVar2 = DAT_14049da4;
  *(undefined4 *)(iVar1 + 0x17c) = uVar6;
  *(undefined4 *)(DAT_14077390 + 0x10) = uVar2;
  return;
}

