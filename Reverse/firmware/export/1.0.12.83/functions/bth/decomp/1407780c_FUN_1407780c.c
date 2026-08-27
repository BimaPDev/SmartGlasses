/* FUN_1407780c @ 0x1407780c */

undefined4 FUN_1407780c(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  
  pcVar4 = (char *)FUN_14075258();
  iVar3 = DAT_14077980;
  if (*pcVar4 != '\x01') {
    FUN_14075428(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1407797c,*pcVar4);
  }
  sVar1 = *(short *)(pcVar4 + 1);
  FUN_140e5148(*(undefined4 *)(DAT_14077980 + 4),0xffffffff);
  if (0x27 < *(ushort *)(iVar3 + 0x250)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140779a0,DAT_140779a4,sVar1,0x28);
  }
  if ((*(char *)(iVar3 + 8) != '\0') && (sVar1 != 0xc35)) {
    uVar6 = DAT_14077984;
    if (-1 < (int)((uint)*(byte *)(param_1 + 5) << 0x1c)) {
      uVar6 = DAT_14077988;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,uVar6,sVar1);
  }
  iVar5 = FUN_14075258(param_1);
  sVar2 = *(short *)(iVar5 + 1);
  if (sVar2 == 0xc31) {
    *(undefined1 *)(iVar3 + 0x214) = *(undefined1 *)(iVar5 + 4);
  }
  else if (sVar2 == 0xc67) {
    *(undefined1 *)(iVar3 + 0x215) = *(undefined1 *)(iVar5 + 4);
  }
  else if (sVar2 == 0x406) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = DAT_1407798c;
  }
  uVar6 = DAT_14077994;
  if ((sVar1 == 0xc35) || (sVar1 == -0x372)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfb;
    FUN_14074c04(param_1,uVar6);
  }
  else {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
    FUN_14074c04(param_1,DAT_14077990);
    FUN_140e5148(*(undefined4 *)(iVar3 + 4),0xffffffff);
    if (*(int *)(iVar3 + 0x248) == 0) {
      FUN_14076a2c();
    }
    else {
      FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
    }
  }
  FUN_140e5148(*(undefined4 *)(iVar3 + 4),0xffffffff);
  uVar7 = *(short *)(iVar3 + 0x250) + 1;
  if (*(ushort *)(iVar3 + 0x252) < uVar7) {
    *(ushort *)(iVar3 + 0x252) = uVar7;
  }
  *(ushort *)(iVar3 + 0x250) = uVar7;
  if (uVar7 < 0x29) {
    FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
    FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_1407799c,DAT_14077998,uVar7,*(undefined2 *)(iVar3 + 0x252));
}

