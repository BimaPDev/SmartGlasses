/* FUN_1404d43c @ 0x1404d43c */

void FUN_1404d43c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*DAT_1404d520 == '\0') {
    *DAT_1404d520 = '\x01';
    FUN_140931fc();
    FUN_14093360(DAT_1404d524);
    FUN_14093354(DAT_1404d528);
    iVar1 = FUN_14049c88();
    if (iVar1 != 0) {
      iVar2 = FUN_1404a1b4(0);
      iVar1 = FUN_14093294();
      *(int *)(iVar2 + 0x34) = iVar1;
      uVar3 = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)(iVar2 + 0x1c) = uVar3;
      *(undefined4 *)(iVar2 + 0x38) = uVar3;
      *(undefined1 *)(iVar2 + 0x43) = 2;
      *(undefined1 *)(iVar2 + 0x3f) = 0;
      *(undefined2 *)(iVar2 + 0x44) = 0;
      *(undefined1 *)(iVar2 + 0x47) = 0;
      *(undefined1 *)(iVar2 + 0x84) = 0;
      *(undefined1 *)(iVar2 + 0x49) = 0;
      *(undefined1 *)(iVar2 + 0xa4) = 0;
      *(undefined1 *)(iVar2 + 0x110) = 0;
      FUN_1409315c(iVar1,1);
      FUN_14050b70(0);
      FUN_14050b34(0);
      uVar3 = FUN_140e52f8(DAT_1404d52c,0,iVar2);
      *(undefined4 *)(iVar2 + 0xa0) = uVar3;
      uVar3 = FUN_140e52f8(DAT_1404d530,0,iVar2);
      *(undefined4 *)(iVar2 + 0x88) = uVar3;
      uVar3 = FUN_140e52f8(DAT_1404d534,0,iVar2);
      *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      uVar3 = FUN_140e52f8(DAT_1404d538,0,iVar2);
      *(undefined4 *)(iVar2 + 0x90) = uVar3;
      uVar3 = FUN_140e52f8(DAT_1404d53c,0,iVar2);
      *(undefined4 *)(iVar2 + 0x94) = uVar3;
      uVar3 = FUN_140e52f8(DAT_1404d540,0,iVar2);
      *(undefined4 *)(iVar2 + 0x114) = uVar3;
      uVar3 = FUN_140e52f8(DAT_1404d544,0,iVar2);
      iVar1 = DAT_1404d548;
      *(undefined4 *)(iVar2 + 0x118) = uVar3;
      *(undefined1 *)(iVar1 + 0x121) = 0;
      return;
    }
  }
  return;
}

