/* FUN_10001cbc @ 0x10001cbc */

void FUN_10001cbc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_10001d4c;
  *(undefined4 *)(DAT_10001d4c + 4) = 0x10;
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  *(undefined4 *)(iVar1 + 0x410) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar1 + 0x414) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(iVar1 + 0x438) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(iVar1 + 0x404) = *(undefined4 *)(param_2 + 8);
  if (*(char *)(param_2 + 1) != '\a') {
    if (*(char *)(param_2 + 1) == '\b') {
      *(undefined4 *)(iVar1 + 0x43c) = *(undefined4 *)(param_2 + 0x40);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x430) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(iVar1 + 0x434) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(iVar1 + 0x42c) = *(undefined4 *)(param_2 + 0x30);
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined4 *)(iVar1 + 0x418) = uVar2;
    iVar1 = DAT_10001d4c;
    *(undefined4 *)(DAT_10001d4c + 0x408) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar1 + 0x40c) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x41c) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(iVar1 + 0x420) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(iVar1 + 0x424) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(iVar1 + 0x428) = *(undefined4 *)(param_2 + 0x2c);
  }
  FUN_10003098(param_1 + 0x60,param_2,500,0);
  *(undefined4 *)(DAT_10001d4c + 0x400) = *(undefined4 *)(param_2 + 4);
  return;
}

