/* FUN_100c8518 @ 0x100c8518 */

int FUN_100c8518(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined3 uStack_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  iVar2 = DAT_100c85c4;
  FUN_10132e56(DAT_100c85c4 + 0x30,0xffffefff);
  iVar1 = FUN_10132e28(iVar2 + 0x30);
  if (iVar1 << 0x19 < 0) {
    iVar1 = FUN_10132e28(iVar2 + 0x30);
    if (iVar1 << 0x17 < 0) {
      local_20 = 0;
      uStack_1c = 0;
      iVar1 = FUN_10132eb0(iVar2 + 0x29,&local_20);
      if (iVar1 == 0) {
        puVar3 = &local_18;
        local_14 = *(undefined2 *)(DAT_100c85c8 + 1);
        local_18 = *DAT_100c85c8;
        uVar4 = 4;
        local_12 = *(undefined1 *)((int)DAT_100c85c8 + 6);
      }
      else {
        uVar4 = 5;
        puVar3 = (undefined4 *)(iVar2 + 0x29);
      }
      iVar2 = FUN_100ca3d4(*(undefined1 *)(iVar2 + 0x20),puVar3,uVar4);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0xc) = 0;
        FUN_100cad6c();
        FUN_100ca13c(iVar2);
      }
    }
    iVar2 = FUN_100c60a0(DAT_100c85cc,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_10132e28(DAT_100c85d0);
    if (iVar2 << 0x1a < 0) {
      thunk_FUN_100c60f8(0);
      FUN_10133040();
      thunk_FUN_100c60f8(1);
      return 0;
    }
  }
  return 0;
}

