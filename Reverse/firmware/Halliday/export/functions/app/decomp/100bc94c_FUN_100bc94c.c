/* FUN_100bc94c @ 0x100bc94c */

void FUN_100bc94c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = DAT_100bca28;
  if ((*DAT_100bca28 & 1) == 0) {
    uVar4 = (DAT_100bca30 - DAT_100bca2c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100bca34 | uVar4,DAT_100bca3c,DAT_100bca38,uVar4,param_1,param_2,param_3);
    *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 4;
    return;
  }
  iVar5 = *(int *)(DAT_100bca28 + 2);
  if ((iVar5 == 0x20) || (iVar5 == 8)) {
    FUN_100bc840(1);
  }
  FUN_100bc52c(4);
  FUN_100bb198(0x1b,0);
  if ((iVar5 == 1) &&
     (uVar4 = *(byte *)((int)puVar1 + 1) & 1, (*(byte *)((int)puVar1 + 1) & 1) == 0)) {
    FUN_100bc4bc(2,uVar4);
    if ((*puVar1 & 0x60) != 0x60) {
      FUN_100bb198(0xe,uVar4);
      if (*(int *)(puVar1 + 4) != 0) {
        FUN_10136a56();
      }
    }
  }
  iVar2 = FUN_10131468();
  iVar5 = DAT_100bca2c;
  if ((uint)(iVar2 - *(int *)(puVar1 + 8)) < 300) {
    *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 2;
    FUN_100a5b78(DAT_100bca40 | (DAT_100bca30 - iVar5) * 0x20 & 0xff00U,DAT_100bca3c,DAT_100bca44);
  }
  *puVar1 = *puVar1 & 0xfeef;
  uVar3 = FUN_10131468();
  *(undefined4 *)(puVar1 + 10) = uVar3;
  FUN_100bb198(0x16,0);
  FUN_1011dc0a(DAT_100bca48,2000);
  return;
}

