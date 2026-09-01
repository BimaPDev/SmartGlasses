/* FUN_1004f084 @ 0x1004f084 */

void FUN_1004f084(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_1004f108;
  iVar3 = *(int *)PTR_DAT_1004f0f0;
  uVar4 = ((int)PTR_DAT_1004f0f4 - (int)PTR_DAT_1004f0f8) * 0x20 & 0xff00;
  if (*DAT_1004f0fc == '\0') {
    if (*(int *)PTR_DAT_1004f0f0 != iVar3) goto LAB_1004f0ac;
  }
  else {
    *DAT_1004f108 = 1;
    *(undefined2 *)(puVar1 + 2) = 0xe4;
    puVar1[4] = 0x38;
    FUN_1004ec7c();
    if (*(int *)PTR_DAT_1004f0f0 == iVar3) {
      uVar4 = uVar4 | 0xf90031;
      uVar2 = DAT_1004f10c;
      goto LAB_1004f0bc;
    }
LAB_1004f0ac:
    FUN_1013cdc0();
  }
  uVar4 = uVar4 | 0xef0011;
  uVar2 = DAT_1004f100;
LAB_1004f0bc:
  FUN_100a5b78(uVar4,DAT_1004f104,uVar2);
  return;
}

