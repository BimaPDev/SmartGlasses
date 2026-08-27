/* FUN_1407848c @ 0x1407848c */

undefined4 FUN_1407848c(ushort param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xf0 | 1;
  uVar1 = *(undefined2 *)(param_2 + 8);
  puVar3 = (undefined1 *)FUN_140754f4(param_2,5);
  uVar6 = param_1 & 0xfff;
  *puVar3 = 2;
  *(ushort *)(puVar3 + 1) = param_1;
  *(undefined2 *)(puVar3 + 3) = uVar1;
  iVar4 = FUN_1407667c(1,uVar6);
  iVar2 = DAT_14078574;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14078588,DAT_14078578,uVar6);
  }
  FUN_140e5148(*(undefined4 *)(DAT_14078574 + 4),0xffffffff);
  if (*(uint *)(iVar2 + 0x25c) < 0x50) {
    if (*(char *)(param_2 + 4) < '\0') {
      FUN_14074b94(param_2,iVar2 + 0x254);
    }
    else {
      FUN_14074c04();
    }
    FUN_140e5148(*(undefined4 *)(iVar2 + 4),0xffffffff);
    uVar5 = *(uint *)(iVar2 + 0x25c);
    if ((uint)*(ushort *)(iVar2 + 0x260) < (uVar5 & 0xffff)) {
      *(short *)(iVar2 + 0x260) = (short)uVar5;
    }
    if ((uVar5 & 0xffff) < 0x51) {
      FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
      FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
      thunk_FUN_140a20f4();
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14078584,DAT_14078580,uVar5 & 0xffff,*(undefined2 *)(iVar2 + 0x260));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_1407857c,DAT_14078578,uVar6,0x50);
}

