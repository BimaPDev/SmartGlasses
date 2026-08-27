/* FUN_140732f8 @ 0x140732f8 */

void FUN_140732f8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    if (3 < param_3) {
      iVar5 = (param_3 - 4 & 0xfffffffc) + 4;
      puVar4 = param_2 + -1;
      puVar7 = (undefined4 *)((int)param_1 + iVar5);
      do {
        puVar4 = puVar4 + 1;
        puVar1 = param_1 + 1;
        *param_1 = *puVar4;
        param_1 = puVar1;
      } while (puVar1 != puVar7);
      param_2 = (undefined4 *)(iVar5 + (int)param_2);
      param_3 = param_3 & 3;
      param_1 = puVar7;
    }
  }
  else if (3 < param_3) {
    iVar5 = (param_3 - 4 & 0xfffffffc) + 4;
    puVar7 = (undefined4 *)((int)param_2 + iVar5);
    puVar4 = param_1;
    do {
      puVar1 = param_2 + 1;
      uVar6 = *param_2;
      *(char *)((int)puVar4 + 1) = (char)((uint)uVar6 >> 8);
      *(char *)((int)puVar4 + 2) = (char)((uint)uVar6 >> 0x10);
      *(char *)((int)puVar4 + 3) = (char)((uint)uVar6 >> 0x18);
      *(char *)puVar4 = (char)uVar6;
      param_2 = puVar1;
      puVar4 = puVar4 + 1;
    } while (puVar7 != puVar1);
    param_3 = param_3 & 3;
    param_1 = (undefined4 *)((int)param_1 + iVar5);
    param_2 = puVar7;
  }
  if (param_3 != 0) {
    uVar3 = 0;
    puVar2 = (undefined1 *)((int)param_2 - 1);
    do {
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1 & 0xff;
      *(undefined1 *)param_1 = *puVar2;
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while (uVar3 < param_3);
  }
  return;
}

