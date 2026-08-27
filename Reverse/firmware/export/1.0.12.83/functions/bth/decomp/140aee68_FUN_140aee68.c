/* FUN_140aee68 @ 0x140aee68 */

void FUN_140aee68(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 uStack_28;
  undefined1 auStack_27 [4];
  undefined2 uStack_23;
  undefined1 auStack_21 [5];
  
  piVar2 = DAT_140aef48;
  iVar4 = *DAT_140aef48;
  register0x0000002c = *DAT_140aef4c;
  if (*(byte *)(iVar4 + 0x1c) == 10) {
    if ((*(char *)(iVar4 + 0x33) == '\x01') && (*(char *)(iVar4 + 0x34) == -0x50)) {
      uVar3 = (uint)*(byte *)(iVar4 + 0x3b);
    }
    else {
      uVar3 = (uint)*(byte *)(iVar4 + 0x3f);
    }
  }
  else {
    uVar3 = 0;
  }
  iVar5 = *(byte *)(iVar4 + 0x1c) + 7 + uVar3;
  iVar1 = -(iVar5 + 7U & 0xfffffff8);
  (&uStack_28)[iVar1] = 2;
  *(undefined4 *)(auStack_27 + iVar1) = *(undefined4 *)(iVar4 + 1);
  *(undefined2 *)(auStack_21 + iVar1 + -2) = *(undefined2 *)(iVar4 + 5);
  auStack_21[iVar1] = *(undefined1 *)(iVar4 + 7);
  FUN_140e5278(auStack_21 + iVar1 + 1,iVar4 + 0x1e,*(byte *)(iVar4 + 0x1c) - 1);
  if ((*(char *)(iVar4 + 0x33) == '\x01') && (*(char *)(iVar4 + 0x34) == -0x50)) {
    FUN_140e5278(auStack_21 + (uint)*(byte *)(iVar4 + 0x1c) + iVar1,iVar4 + 0x3c,
                 *(undefined1 *)(iVar4 + 0x3b));
  }
  else {
    FUN_140e5278(auStack_21 + (uint)*(byte *)(iVar4 + 0x1c) + iVar1,iVar4 + 0x40,
                 *(undefined1 *)(iVar4 + 0x3f));
  }
  FUN_140afd14(&uStack_28 + iVar1,iVar5);
  FUN_140e5658(*piVar2,0,0x55);
  if (*DAT_140aef4c == stack0xffffffdc) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

