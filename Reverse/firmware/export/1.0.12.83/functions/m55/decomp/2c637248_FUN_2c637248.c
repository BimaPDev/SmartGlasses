/* FUN_2c637248 @ 0x2c637248 */

void FUN_2c637248(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  bVar4 = *(byte *)(param_1 + 0x52) & 7;
  if (bVar4 == 1) {
    if (*(int *)(param_1 + 0x30) != -1) {
      iVar2 = (*(code *)*DAT_2c6372f0)
                        (*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x30) + -3);
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0x24) + iVar2);
      if ((int)((uint)*(byte *)(param_1 + 0x52) << 0x19) < 0) {
        puVar5 = *(undefined1 **)(param_1 + 0x2c);
      }
      else {
        puVar5 = (undefined1 *)(param_1 + 0x2c);
      }
      if (*(char *)(*(int *)(param_1 + 0x24) + iVar2) != '\0') {
        uVar6 = 0;
        do {
          puVar1 = puVar5 + uVar6;
          uVar6 = uVar6 + 1 & 0xff;
          *puVar3 = *puVar1;
          puVar3 = (undefined1 *)(*(int *)(param_1 + 0x24) + uVar6 + iVar2);
        } while (*(char *)(*(int *)(param_1 + 0x24) + uVar6 + iVar2) != '\0');
        puVar5 = puVar5 + uVar6;
      }
      *puVar3 = *puVar5;
      if (((int)((uint)*(byte *)(param_1 + 0x52) << 0x19) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
        FUN_2c62bea8();
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xbf;
      return;
    }
  }
  else if ((bVar4 == 2) && (*(int *)(param_1 + 0x34) != -1)) {
    FUN_2c6435c4(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    FUN_2c62bea8(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    return;
  }
  return;
}

